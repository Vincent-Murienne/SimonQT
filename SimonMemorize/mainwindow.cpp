#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"
#include <QPushButton>

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    // Connexion du signal clicked() du bouton à la fonction on_btn_exit_clicked()
    connect(ui->btn_exit, SIGNAL(clicked()), this, SLOT(on_btn_exit_clicked()));
}

mainwindow::~mainwindow()
{
    delete ui;
}


void mainwindow::on_btn_jouer_clicked()
{
    close();

    gamewindow *GameForm = new gamewindow(this);

    // Affichez la deuxième fenêtre
    GameForm->exec();
}


void mainwindow::on_btn_exit_clicked()
{
    close(); // Ferme la fenêtre principale
}

