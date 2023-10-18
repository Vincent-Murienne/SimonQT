#ifndef SIMONBUTTON_H
#define SIMONBUTTON_H

#include <QObject>

/*class SimonButton : public QObject
{
    Q_OBJECT
public:
    explicit SimonButton(QObject *parent = nullptr);

signals:

};*/

class SimonButton {
public:
    SimonButton(); // Constructeur
    ~SimonButton(); // Destructeur
    void setColorRandom();

    void setColor(const char* col); // Fonction pour définir la couleur
    void setPosition(const char* pos); // Fonction pour définir la position

    const char* getColor() const; // Fonction pour obtenir la couleur
    const char* getPosition() const; // Fonction pour obtenir la position

private:
    char color[25]; // Tableau de caractères pour stocker la couleur
    char* position; // Pointeur de caractère pour stocker la position (alloué dynamiquement)
};

#endif // SIMONBUTTON_H
