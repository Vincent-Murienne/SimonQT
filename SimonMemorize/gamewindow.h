#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <QPushButton>
#include <QVector>
//#include <QtMultimedia>

namespace Ui {
class gamewindow;
}

class gamewindow : public QDialog
{
    Q_OBJECT

signals:
    void simonSequenceDisplayed();

public:
    explicit gamewindow(QWidget *parent = nullptr);
    ~gamewindow();


public slots:
    void randomSequence(); // Methode séquence aléatoire généré par le Simon
    void handleButtonClick(int color); // Gestion selection click du bouton
    void showColor(int color); // Affichage des nouvelles couleurs
    void ResetButtonColors(); // Affichage des anciennes couleurs
    void startGame(); // Methode principal pour lancer le jeu
    void EnabledTrueButton();

private slots:

    void on_btn_rouge_clicked();

    void on_btn_vert_clicked();

    void on_btn_bleu_clicked();

    void on_btn_jaune_clicked();

private:
    Ui::gamewindow *ui;
    int compteur = 0;
    bool attenteUtilisateur;
    int sequenceLength = 1;

    QVector<int> sequenceInit;  // Séquence initiale du jeu (1 couleur)
    QVector<int> sequenceEvolve;  // Séquence évolutive (nouvelles couleurs ajoutées à chaque tour)
    /*QList<QVector<int>> sequenceList;
    QList<QVector<int>> completedSequence;
    QList<QList<int>> allSequences; // Liste pour stocker les séquences précédentes
    int currentSequenceIndex = 0; // Index de la séquence que le joueur doit reproduire actuellement*/

};

#endif // GAMEWINDOW_H
