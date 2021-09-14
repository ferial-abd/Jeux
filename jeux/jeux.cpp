#include <iostream>
#include <ctime>

int main() {

    char letterx;
    int numbery;
    int tentative = 0;
    int taille = 0;




    std::string pseudo;

    std::cout << "Quel est ton pseudo ? ";
    std::cin >> pseudo;

    std::cout << "Bonjour " << pseudo << ", la partie commence!\n";


    while ((taille < 1) || (taille > 26)) {

        std::cout << "Choisis la taille d'une grille de jeu ? (26 max) : ";
        std::cin >> taille;

        }


    srand(time(0));
    int rndx = rand()%taille + 65;
    char secretx = char(rndx);

    int secrety = rand()%taille + 1;

    std::cout << "Secret : " << secretx << secrety << "\n";


    std::cout << "Tu dois deviner l'emplacement du bateau (une case dans une grille [1 .." << taille << "] x [A .." << char(64 + taille) << "] :\n";
    std::cout << "Quelle lettre pour choisir une ligne ? (A a " << char(64 + taille) << ") : ";
    std::cin >> letterx;

    std::cout << "Quelle numéro pour choisir une colonne ? (1 a " << taille << ") : ";
    std::cin >> numbery;


    while ((numbery != secrety) || (letterx != secretx)) {


        std::cout << "Tentative n "<< tentative+1 << "\n";

        std::cout << "Rate! Reessaie : ";

        std::cout << "Quelle lettre pour choisir une ligne ? (A a " << char(64 + taille) << ") : ";
        std::cin >> letterx;

        std::cout << "Quelle numéro pour choisir une colonne ? (1 a " << taille << ") : ";
        std::cin >> numbery;

        tentative++;

    } 

    std::cout << "Bravo "<< pseudo << "!\n";
    std::cout << "Tu as trouve au bout de " << tentative+1 << " tentatives.\n";

    return 0;
}