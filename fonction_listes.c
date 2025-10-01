#include <stdio.h>
#include <stdlib.h>
#include "fonction_listes.h"

// FONCTIONS GÉNÉRALES

void afficherMenu() {
    printf("\n=== GESTION DE LISTES CHAÎNÉES ===\n");
    printf("1. Supprimer toutes les occurrences d'un élément (Liste simplement chaînée)\n");
    printf("2. Insérer un élément dans une liste simplement chaînée triée\n");
    printf("3. Insérer un élément dans une liste doublement chaînée triée\n");
    printf("4. Insertion en tête/queue dans une liste simplement chaînée circulaire\n");
    printf("5. Insertion en tête/queue dans une liste doublement chaînée circulaire\n");
    printf("6. Afficher toutes les listes\n");
    printf("7. Quitter\n");
    printf("Choix : ");
}

//  LISTE SIMPLEMENT CHAÎNÉE 

NoeudSC* creerNoeudSC(int donnee) {
    NoeudSC* nouveau = (NoeudSC*)malloc(sizeof(NoeudSC));
    if (nouveau == NULL) {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    nouveau->donnee = donnee;
    nouveau->suivant = NULL;
    return nouveau;
}

void insererTriSC(NoeudSC** tete, int donnee) {
    NoeudSC* nouveau = creerNoeudSC(donnee);
    
    // Cas 1: liste vide ou insertion en tête
    if (*tete == NULL || (*tete)->donnee >= donnee) {
        nouveau->suivant = *tete;
        *tete = nouveau;
        return;
    }
    
    // Cas 2: insertion au milieu ou en queue
    NoeudSC* courant = *tete;
    while (courant->suivant != NULL && courant->suivant->donnee < donnee) {
        courant = courant->suivant;
    }
    
    nouveau->suivant = courant->suivant;
    courant->suivant = nouveau;
}

void supprimerOccurrencesSC(NoeudSC** tete, int valeur) {
    NoeudSC* temp = *tete;
    NoeudSC* precedent = NULL;
    
    // Supprimer toutes les occurrences en tête
    while (temp != NULL && temp->donnee == valeur) {
        *tete = temp->suivant;
        free(temp);
        temp = *tete;
    }
    
    // Supprimer les occurrences dans le reste de la liste
    while (temp != NULL) {
        while (temp != NULL && temp->donnee != valeur) {
            precedent = temp;
            temp = temp->suivant;
        }
        
        if (temp == NULL) return;
        
        precedent->suivant = temp->suivant;
        free(temp);
        temp = precedent->suivant;
    }
}

void afficherListeSC(NoeudSC* tete) {
    NoeudSC* courant = tete;
    printf("Liste simplement chaînée : ");
    while (courant != NULL) {
        printf("%d -> ", courant->donnee);
        courant = courant->suivant;
    }
    printf("NULL\n");
}

void libererListeSC(NoeudSC* tete) {
    NoeudSC* temp;
    while (tete != NULL) {
        temp = tete;
        tete = tete->suivant;
        free(temp);
    }
}

//  LISTE DOUBLEMENT CHAÎNÉE 

NoeudDC* creerNoeudDC(int donnee) {
    NoeudDC* nouveau = (NoeudDC*)malloc(sizeof(NoeudDC));
    if (nouveau == NULL) {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    nouveau->donnee = donnee;
    nouveau->precedent = NULL;
    nouveau->suivant = NULL;
    return nouveau;
}

void insererTriDC(NoeudDC** tete, int donnee) {
    NoeudDC* nouveau = creerNoeudDC(donnee);
    
    // Cas 1: liste vide
    if (*tete == NULL) {
        *tete = nouveau;
        return;
    }
    
    // Cas 2: insertion en tête
    if ((*tete)->donnee >= donnee) {
        nouveau->suivant = *tete;
        (*tete)->precedent = nouveau;
        *tete = nouveau;
        return;
    }
    
    // Cas 3: insertion au milieu ou en queue
    NoeudDC* courant = *tete;
    while (courant->suivant != NULL && courant->suivant->donnee < donnee) {
        courant = courant->suivant;
    }
    
    nouveau->suivant = courant->suivant;
    nouveau->precedent = courant;
    
    if (courant->suivant != NULL) {
        courant->suivant->precedent = nouveau;
    }
    
    courant->suivant = nouveau;
}

void afficherListeDC(NoeudDC* tete) {
    NoeudDC* courant = tete;
    printf("Liste doublement chaînée  : ");
    while (courant != NULL) {
        printf("%d <-> ", courant->donnee);
        courant = courant->suivant;
    }
    printf("NULL\n");
}

void libererListeDC(NoeudDC* tete) {
    NoeudDC* temp;
    while (tete != NULL) {
        temp = tete;
        tete = tete->suivant;
        free(temp);
    }
}

// LISTE SIMPLEMENT CHAÎNÉE CIRCULAIRE 

void insererTeteSCC(ListeSCC* liste, int donnee) {
    NoeudSC* nouveau = creerNoeudSC(donnee);
    
    if (liste->tete == NULL) {
        liste->tete = nouveau;
        nouveau->suivant = nouveau; // Pointe sur lui-même
    } else {
        NoeudSC* queue = liste->tete;
        while (queue->suivant != liste->tete) {
            queue = queue->suivant;
        }
        nouveau->suivant = liste->tete;
        liste->tete = nouveau;
        queue->suivant = nouveau;
    }
}

void insererQueueSCC(ListeSCC* liste, int donnee) {
    NoeudSC* nouveau = creerNoeudSC(donnee);
    
    if (liste->tete == NULL) {
        liste->tete = nouveau;
        nouveau->suivant = nouveau;
    } else {
        NoeudSC* queue = liste->tete;
        while (queue->suivant != liste->tete) {
            queue = queue->suivant;
        }
        queue->suivant = nouveau;
        nouveau->suivant = liste->tete;
    }
}

void afficherListeSCC(ListeSCC* liste) {
    if (liste->tete == NULL) {
        printf("Liste simplement chaînée circulaire : Vide\n");
        return;
    }
    
    NoeudSC* courant = liste->tete;
    printf("Liste simplement chaînée circulaire : ");
    do {
        printf("%d -> ", courant->donnee);
        courant = courant->suivant;
    } while (courant != liste->tete);
    printf("(retour à la tête)\n");
}

void libererListeSCC(ListeSCC* liste) {
    if (liste->tete == NULL) return;
    
    NoeudSC* courant = liste->tete->suivant;
    NoeudSC* temp;
    
    while (courant != liste->tete) {
        temp = courant;
        courant = courant->suivant;
        free(temp);
    }
    free(liste->tete);
    liste->tete = NULL;
}

//  LISTE DOUBLEMENT CHAÎNÉE CIRCULAIRE

void insererTeteDCC(ListeDCC* liste, int donnee) {
    NoeudDC* nouveau = creerNoeudDC(donnee);
    
    if (liste->tete == NULL) {
        liste->tete = nouveau;
        nouveau->suivant = nouveau;
        nouveau->precedent = nouveau;
    } else {
        NoeudDC* queue = liste->tete->precedent;
        
        nouveau->suivant = liste->tete;
        nouveau->precedent = queue;
        liste->tete->precedent = nouveau;
        queue->suivant = nouveau;
        liste->tete = nouveau;
    }
}

void insererQueueDCC(ListeDCC* liste, int donnee) {
    NoeudDC* nouveau = creerNoeudDC(donnee);
    
    if (liste->tete == NULL) {
        liste->tete = nouveau;
        nouveau->suivant = nouveau;
        nouveau->precedent = nouveau;
    } else {
        NoeudDC* queue = liste->tete->precedent;
        
        nouveau->suivant = liste->tete;
        nouveau->precedent = queue;
        queue->suivant = nouveau;
        liste->tete->precedent = nouveau;
    }
}

void afficherListeDCC(ListeDCC* liste) {
    if (liste->tete == NULL) {
        printf("Liste doublement chaînée circulaire : Vide\n");
        return;
    }
    
    NoeudDC* courant = liste->tete;
    printf("Liste doublement chaînée circulaire : ");
    do {
        printf("%d <-> ", courant->donnee);
        courant = courant->suivant;
    } while (courant != liste->tete);
    printf("(retour à la tête)\n");
}

void libererListeDCC(ListeDCC* liste) {
    if (liste->tete == NULL) return;
    
    NoeudDC* courant = liste->tete->suivant;
    NoeudDC* temp;
    
    while (courant != liste->tete) {
        temp = courant;
        courant = courant->suivant;
        free(temp);
    }
    free(liste->tete);
    liste->tete = NULL;
}