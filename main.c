#include <stdio.h>
#include <stdlib.h>
#include "fonction_listes.h"

int main() {
    int choix, valeur, sousChoix;
    
    // Initialisation des listes
    NoeudSC* listeSC = NULL;
    NoeudDC* listeDC = NULL;
    
    ListeSCC listeSCC = {NULL};
    ListeDCC listeDCC = {NULL};
    
    printf("=== PROGRAMME DE GESTION DE LISTES CHAÎNÉES ===\n");
    
    do {
        afficherMenu();
        scanf("%d", &choix);
        
        switch (choix) {
            case 1: // Supprimer occurrences dans liste simplement chaînée
                printf("Entrez la valeur à supprimer : ");
                scanf("%d", &valeur);
                supprimerOccurrencesSC(&listeSC, valeur);
                printf("Toutes les occurrences de %d ont été supprimées.\n", valeur);
                break;
                
            case 2: // Insertion triée dans liste simplement chaînée
                printf("Entrez la valeur à insérer : ");
                scanf("%d", &valeur);
                insererTriSC(&listeSC, valeur);
                printf("Valeur %d insérée dans la liste triée.\n", valeur);
                break;
                
            case 3: // Insertion triée dans liste doublement chaînée
                printf("Entrez la valeur à insérer : ");
                scanf("%d", &valeur);
                insererTriDC(&listeDC, valeur);
                printf("Valeur %d insérée dans la liste triée.\n", valeur);
                break;
                
            case 4: // Insertion tête/queue dans liste simplement chaînée circulaire
                printf("1. Insertion en tête\n");
                printf("2. Insertion en queue\n");
                printf("Choix : ");
                scanf("%d", &sousChoix);
                printf("Entrez la valeur à insérer : ");
                scanf("%d", &valeur);
                
                if (sousChoix == 1) {
                    insererTeteSCC(&listeSCC, valeur);
                    printf("Valeur %d insérée en tête.\n", valeur);
                } else if (sousChoix == 2) {
                    insererQueueSCC(&listeSCC, valeur);
                    printf("Valeur %d insérée en queue.\n", valeur);
                } else {
                    printf("Choix invalide.\n");
                }
                break;
                
            case 5: // Insertion tête/queue dans liste doublement chaînée circulaire
                printf("1. Insertion en tête\n");
                printf("2. Insertion en queue\n");
                printf("Choix : ");
                scanf("%d", &sousChoix);
                printf("Entrez la valeur à insérer : ");
                scanf("%d", &valeur);
                
                if (sousChoix == 1) {
                    insererTeteDCC(&listeDCC, valeur);
                    printf("Valeur %d insérée en tête.\n", valeur);
                } else if (sousChoix == 2) {
                    insererQueueDCC(&listeDCC, valeur);
                    printf("Valeur %d insérée en queue.\n", valeur);
                } else {
                    printf("Choix invalide.\n");
                }
                break;
                
            case 6: // Afficher toutes les listes
                printf("\n--- ÉTAT DES LISTES ---\n");
                afficherListeSC(listeSC);
                afficherListeDC(listeDC);
                afficherListeSCC(&listeSCC);
                afficherListeDCC(&listeDCC);
                break;
                
            case 7: // Quitter
                printf("Au revoir !\n");
                break;
                
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
        
    } while (choix != 7);
    
    // Libération de la mémoire
    libererListeSC(listeSC);
    libererListeDC(listeDC);
    libererListeSCC(&listeSCC);
    libererListeDCC(&listeDCC);
    
    return 0;
}