#ifndef FONCTION_LISTES_H
#define FONCTION_LISTES_H

// Structure pour liste simplement chaînée
typedef struct NoeudSC {
    int donnee;
    struct NoeudSC* suivant;
} NoeudSC;

// Structure pour liste doublement chaînée
typedef struct NoeudDC {
    int donnee;
    struct NoeudDC* precedent;
    struct NoeudDC* suivant;
} NoeudDC;

// Structure pour liste simplement chaînée circulaire
typedef struct ListeSCC {
    NoeudSC* tete;
} ListeSCC;

// Structure pour liste doublement chaînée circulaire
typedef struct ListeDCC {
    NoeudDC* tete;
} ListeDCC;

// Prototypes des fonctions
void afficherMenu();

// Fonctions pour liste simplement chaînée
NoeudSC* creerNoeudSC(int donnee);
void insererTriSC(NoeudSC** tete, int donnee);
void supprimerOccurrencesSC(NoeudSC** tete, int valeur);
void afficherListeSC(NoeudSC* tete);
void libererListeSC(NoeudSC* tete);

// Fonctions pour liste doublement chaînée
NoeudDC* creerNoeudDC(int donnee);
void insererTriDC(NoeudDC** tete, int donnee);
void afficherListeDC(NoeudDC* tete);
void libererListeDC(NoeudDC* tete);

// Fonctions pour liste simplement chaînée circulaire
void insererTeteSCC(ListeSCC* liste, int donnee);
void insererQueueSCC(ListeSCC* liste, int donnee);
void afficherListeSCC(ListeSCC* liste);
void libererListeSCC(ListeSCC* liste);

// Fonctions pour liste doublement chaînée circulaire
void insererTeteDCC(ListeDCC* liste, int donnee);
void insererQueueDCC(ListeDCC* liste, int donnee);
void afficherListeDCC(ListeDCC* liste);
void libererListeDCC(ListeDCC* liste);

#endif