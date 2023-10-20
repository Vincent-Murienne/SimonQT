#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <Qtimer>
#include <QRandomGenerator>
#include <QPropertyAnimation>
#include <QUrl>
#include <QThread>
#include "mainwindow.h"
//#include <QtMultimedia/QMediaPlayer>
//#include <QtWidgets>
//#include <QSound>
//#include <QMediaPlayer>

// Constructeur
gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow),
    attenteUtilisateur(false)  // Désactivez l'attente de l'utilisateur au début
{
    ui->setupUi(this);
    ui->label_end->hide();
    QTimer::singleShot(1000, this, SLOT(startGame()));
    //sequencesList.append(QVector<int>()); // Ajoutez une nouvelle séquence vide à la liste
}

/*gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow),
    attenteUtilisateur(false),
    currentSequenceIndex(-1)  // Initialisez currentSequenceIndex à -1 pour indiquer qu'aucune séquence n'est sélectionnée
{
    ui->setupUi(this);

    // Désactivez les boutons tant que le jeu n'a pas démarré
    EnabledFalseButton();

    // Notez que nous n'ajoutons pas de séquence ici, nous attendons que l'utilisateur appuie sur le bouton de démarrage.
}*/



gamewindow::~gamewindow()
{
    delete ui;
}

void gamewindow::startGame() {
    // Dans le constructeur ou une méthode d'initialisation
    sequenceInit.append(QRandomGenerator::global()->bounded(4));  // Ajoutez la première couleur à la séquence initiale
    sequenceEvolve = sequenceInit;  // Initialisez la séquence évolutive avec la séquence initiale

    sequenceLength = 1;  // Commencez avec une seule couleur
    randomSequence();  // Affichez la séquence de Simon
}

/*void gamewindow::startGame() {
    // Commencez avec une seule couleur seulement si l'utilisateur appuie sur le bouton de démarrage
    sequenceList.clear();
    QVector<int> firstSequence;
    firstSequence.append(QRandomGenerator::global()->bounded(4));  // Ajoutez une couleur aléatoire
    sequenceList.append(firstSequence);

    // Affichez la séquence au joueur
    currentSequenceIndex = 0;
    showCurrentSequence();
}*/


void gamewindow::EnabledTrueButton() {
    ui->btn_rouge->setEnabled(true);
    ui->btn_vert->setEnabled(true);
    ui->btn_bleu->setEnabled(true);
    ui->btn_jaune->setEnabled(true);
}

void gamewindow::on_btn_rouge_clicked() {
    qDebug() << "Bouton Rouge cliqué.";
    if (attenteUtilisateur) {
        handleButtonClick(0);
    }
}

void gamewindow::on_btn_vert_clicked() {
    qDebug() << "Bouton Vert cliqué.";
    if (attenteUtilisateur) {
        handleButtonClick(1);
    }
}

void gamewindow::on_btn_bleu_clicked() {
    qDebug() << "Bouton Bleu cliqué.";
    if (attenteUtilisateur) {
        handleButtonClick(2);
    }
}

void gamewindow::on_btn_jaune_clicked() {
    qDebug() << "Bouton jaune cliqué.";
    if (attenteUtilisateur) {
        handleButtonClick(3);
    }
}

void gamewindow::showColor(int couleur) {
    switch (couleur) {
    case 0:
        ui->btn_rouge->setStyleSheet("background-color:rgba(255, 0, 0, 0.3);border-top-left-radius:80px 80px;");
        break;
    case 1:
        ui->btn_vert->setStyleSheet("background-color:rgba(0, 220, 0, 0.3) ; border-top-right-radius: 80px 80px;");
        break;
    case 2:
        ui->btn_bleu->setStyleSheet("background-color:rgba(0 ,130 , 225, 0.3) ; border-bottom-left-radius: 80px 80px;");
        break;
    case 3:
        ui->btn_jaune->setStyleSheet("background-color:rgba(255 ,255 , 80, 0.8);border-bottom-right-radius: 80px 80px;");
        break;
    }
}

void gamewindow::ResetButtonColors() {
    ui->btn_rouge->setStyleSheet("background-color: red;");
    ui->btn_vert->setStyleSheet("background-color: green;");
    ui->btn_bleu->setStyleSheet("background-color: blue;");
    ui->btn_jaune->setStyleSheet("background-color: yellow;");
}

void gamewindow::randomSequence() {
    EnabledTrueButton();
    attenteUtilisateur = false;

    for (int i = 0; i < sequenceInit.size(); ++i) {
        int couleur = sequenceInit.at(i);
        QTimer::singleShot(i * 1500, this, [this, couleur]() {
            showColor(couleur);

            // Attendez 1 seconde  avant de réinitialiser la couleur
            QTimer::singleShot(1000, this, [this]() {
                ResetButtonColors();
            });

            // Attendez 1 seconde avant de passer à la couleur suivante
            QTimer::singleShot(1000, this, [this]() {
                if (attenteUtilisateur) {
                    ResetButtonColors();
                }
            });
        });
    }

    // Attendez le temps nécessaire pour montrer la séquence, puis réactivez les boutons
    QTimer::singleShot(sequenceInit.size() * 1500, this, [this]() {
        attenteUtilisateur = true;
        ResetButtonColors();  // Réinitialisez les couleurs des boutons à l'état d'origine
    });
}



void gamewindow::handleButtonClick(int couleur) {
    ++compteur;
    if (attenteUtilisateur) {
        if (!sequenceInit.isEmpty() && couleur == sequenceInit.first()) {
            sequenceInit.removeFirst(); // Retirez la couleur de la séquence

            // Si la séquence est vide, l'utilisateur a réussi, ajoutez une nouvelle couleur
            if (sequenceInit.isEmpty()) {
                int nouvelleCouleur = QRandomGenerator::global()->bounded(4);  // Générez une nouvelle couleur aléatoire
                sequenceInit.append(nouvelleCouleur);  // Ajoutez la nouvelle couleur à la séquence
                showColor(sequenceInit.first());  // Affichez la première couleur dans la séquence
                ++sequenceLength;  // Augmentez la longueur de la séquence pour le prochain tour
                qDebug() << "Vous êtes à l'étape" << compteur << "du jeu";
                //QLabel *compteur_lb = new QLabel(this); // Créez un nouveau QLabel
                //QString compteur = "Valeur de la variable : " + QString::number(reinterpret_cast<qulonglong>(compteur));
                //compteur_lb->setText(compteur); // Affichez la variable dans le label
                //compteur_lb->show(); // Affichez le label à l'écran
                randomSequence();  // Affichez la nouvelle séquence de Simon
            }
        } else {
            qDebug() << "Mauvais bouton choisi. Fin de la partie.";
            ui->label_end->show();

            QTimer::singleShot(2000, this, [this]() {
                close();

                mainwindow *MainForm = new mainwindow(this);

                // Affichez la deuxième fenêtre
                MainForm->show();
            })
        ;}
    }
}

/*void gamewindow::handleButtonClick(int couleur) {
    if (attenteUtilisateur) {
        if (!sequenceInit.isEmpty() && couleur == sequenceInit.first()) {
            sequenceInit.removeFirst(); // Retirez la couleur de la séquence

            // Si la séquence est vide, l'utilisateur a réussi, ajoutez la séquence à la liste des séquences
            if (sequenceInit.isEmpty()) {
                // Vérifiez d'abord si currentSequenceIndex est dans la plage valide
                if (currentSequenceIndex >= 0 && currentSequenceIndex < sequenceList.size()) {
                    QVector<int> completedSequence = sequenceList.at(currentSequenceIndex); // Obtenez la séquence terminée

                    // Ajoutez la séquence terminée à la liste de toutes les séquences
                    allSequences.append(completedSequence.toList());

                    qDebug() << "Vous êtes à l'étape" << compteur << "du jeu";
                    ++compteur;

                    // Reste du code...
                } else {
                    qDebug() << "Index de séquence invalide : " << currentSequenceIndex;
                }
            }
        } else {
            qDebug() << "Mauvais bouton choisi. Fin de la partie.";
            ui->label_end->show();

            QTimer::singleShot(2000, this, [this]() {
                close();

                mainwindow *MainForm = new mainwindow(this);

                // Affichez la deuxième fenêtre
                MainForm->show();
            });
        }
    }
}*/





