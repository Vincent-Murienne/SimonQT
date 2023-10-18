#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include "SimonButton.h"
//#include <QtMultimedia>

namespace Ui {
class gamewindow;
}

class gamewindow : public QDialog
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = nullptr);
    ~gamewindow();
    void startGame();

private slots:
    void on_btn_rouge_clicked();

    void on_btn_vert_clicked();

    void on_btn_bleu_clicked();

    void on_btn_jaune_clicked();

    // void on_btn_noir_clicked();

    //void gestionClignotement();

    // void arreterClignotement();

    //void clignoterBouton();

private:
    Ui::gamewindow *ui;
    SimonButton* buttons; // Tableau de boutons Simon
    //QMediaPlayer *music;
    int sequenceLength;   // Longueur de la séquence actuelle
    int maxSequenceLength; // Longueur maximale de la séquence
};

#endif // GAMEWINDOW_H
