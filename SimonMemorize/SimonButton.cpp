#include "SimonButton.h"
#include <iostream>
#include <cstring> // Pour utiliser strcpy() et strdup()
#include <cstdlib> // Pour utiliser rand() et srand()
#include <ctime>   // Pour utiliser time()

using namespace std;
/*SimonButton::SimonButton(QObject *parent)
    : QObject{parent}
{

}*/
SimonButton::SimonButton() // Constructeur
    : position(nullptr) {
    cout << "Object is being created" << endl;
    srand(static_cast<unsigned>(time(nullptr)));
}

SimonButton::~SimonButton() // Destructeur
{
    if (position != nullptr) {
        delete[] position; // Libère la mémoire allouée dynamiquement pour la position
    }
    cout << "Object is being deleted" << endl;
}

void SimonButton::setColor(const char* colo) {
    strcpy(color, colo); // Copie la couleur dans le tableau de caractères color
}

void SimonButton::setPosition(const char* pos) {
    if (position != nullptr) {
        delete[] position; // Libère la mémoire existante si elle est déjà allouée
    }
    position = strdup(pos); // Alloue dynamiquement de la mémoire pour la position et la copie
}

const char* SimonButton::getColor() const {
    return color;
}

const char* SimonButton::getPosition() const {
    return position;
}

void SimonButton::setColorRandom() {
    // Tableau de couleurs possibles
    const char* colors[] = {"red", "green", "blue", "yellow"};
    // Génère un nombre aléatoire entre 0 et 3 inclus
    int randomIndex = rand() % 4;
    // Attribue la couleur correspondante à l'index généré aléatoirement
    strcpy(color, colors[randomIndex]);
}


