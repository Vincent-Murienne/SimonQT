#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void on_btn_jouer_clicked();

    void on_btn_exit_clicked();

private:
    Ui::mainwindow *ui;
};
#endif // MAINWINDOW_H
