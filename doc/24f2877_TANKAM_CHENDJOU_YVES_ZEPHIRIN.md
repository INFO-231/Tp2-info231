# Insertion en Tête dans une Liste Simplement Chaînée Circulaire

Ce projet implémente une **liste simplement chaînée circulaire** en
langage C, permettant l'insertion d'éléments  au début (tête de liste). Il inclut un menu interactif pour
faciliter la manipulation de la liste.

## ⚙️ Fonctionnalités

Le programme offre les fonctionnalités suivantes via un menu interactif
:

1.  **Créer une nouvelle liste**
2.  **Insérer en TÊTE :** Ajoute un nouvel élément au début de la liste
    (le nouveau nœud devient la nouvelle tête).
3.  **Afficher la liste :** Parcourt et affiche tous les éléments de la
    liste, en indiquant le retour à la tête.
4.  **Vider la liste :** Libère toute la mémoire allouée dynamiquement
    pour les nœuds.
5.  **Quitter :** Libère la mémoire restante et termine le programme.


### Structures de Données Clés

-   `NoeudSC` : Structure de base représentant un élément de la liste.
   
    `c     typedef struct NoeudSC {
    int donnee;
    struct NoeudSC* suivant;
} NoeudSC;`


-   **Liste Circulaire :** La liste est gérée par un pointeur
    (`Noeud *liste`) qui pointe toujours vers le **premier élément (la  tete)**. Le dernier nœud de la liste pointe sur la tête, formant
    ainsi la boucle circulaire.

```c
    typedef struct ListeSCC {
    NoeudSC* tete;
} ListeSCC;
```

### Fonctions Principales

**1. Insertion en tête**
Fonction : insererTeteSCC()

Algorithme : 
```bash
1. Créer nouveau nœud
2. Si liste vide :
   - tête = nouveau
   - nouveau→suivant = nouveau (pointe sur lui-même)
3. Sinon :
   - Trouver le dernier nœud (qui pointe vers tête actuelle)
   - nouveau→suivant = tête actuelle
   - dernier→suivant = nouveau
   - tête = nouveau
```

## 🚀 Compilation et Exécution

### Prérequis

-   Un compilateur C standard (par exemple, GCC).

### Compilation

Ouvrez un terminal et utilisez la commande suivante pour compiler le
programme :

```bash
make #compiler
./main #exécuter
```
