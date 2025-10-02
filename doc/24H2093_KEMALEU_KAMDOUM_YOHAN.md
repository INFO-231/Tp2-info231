## Liste Simplement Chaînée Triée - Insertion d'Éléments

Ce programme implémente une liste simplement chaînée triée où les éléments sont automatiquement insérés dans l'ordre croissant.

## Structure du Programme

Fichiers

· fonction_listes.h : Fichier d'en-tête contenant les déclarations des structures et fonctions
· fonction_listes.c : Implémentation des fonctions de la liste
· main.c : Programme principal de démonstration

Structures de Données

```c
typedef struct NoeudSC {
    int donnee; //valeur stockée 
    struct NoeudSC* suivant;
} NoeudSC;
```

## Fonctions Implémentées

· NoeudSC* creerNoeudSC(int donnee): Crée un nouveau nœud avec la valeur spécifiée
· void insererTriSC(NoeudSC** tete, int donnee): Insère un élément dans la liste en maintenant l'ordre trié
· void afficherListeSC(NoeudSC* tete);: Affiche le contenu de la liste
· void insererTriSC(NoeudSC** tete, int donnee): Libère la mémoire allouée pour la liste

Fonctionnalités

· Insertion triée automatique : Les éléments sont insérés directement à leur position correcte
· Gestion mémoire : Allocation et libération correcte de la mémoire
· Affichage clair : Visualisation de la liste sous forme de chaîne

## Compilation et Exécution

Compilation

make

##Exécution

./main


# Exemple d'Exécution


Liste triée : 1 -> 2 -> 3 -> 5 -> 8 -> 9 -> NULL


## Explication de l'exemple

Le programme principal insère les valeurs dans cet ordre : 5, 2, 8, 3, 9, 1

La fonction insert_sorted les place automatiquement dans l'ordre croissant :

· Insertion initiale : 5
· Insertion de 2 : 2 → 5
· Insertion de 8 : 2 → 5 → 8
· Insertion de 3 : 2 → 3 → 5 → 8
· Insertion de 9 : 2 → 3 → 5 → 8 → 9
· Insertion de 1 : 1 → 2 → 3 → 5 → 8 → 9
