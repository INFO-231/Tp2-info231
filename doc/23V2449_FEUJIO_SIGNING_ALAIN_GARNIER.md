# 📘 Gestion de Listes Chaînées en C

Ce projet illustre la manipulation de différentes structures de listes chaînées en langage C :

Liste simplement chaînée

Liste doublement chaînée

Liste simplement chaînée circulaire

Liste doublement chaînée circulaire

## 📖 Description des fichiers

### 🔹 fonction_listes.h

Définition des structures :

NoeudSC : élément d’une liste simplement chaînée.
```c
typedef struct NoeudSC {
    int donnee;
    struct NoeudSC* suivant;
} NoeudSC;
```

NoeudDC : élément d’une liste doublement chaînée.
```c
typedef struct NoeudDC {
    int donnee;
    struct NoeudDC* precedent;
    struct NoeudDC* suivant;
} NoeudDC;
```

ListeSCC : liste simplement chaînée circulaire.
```c
typedef struct ListeSCC {
    NoeudSC* tete;
} ListeSCC;
```

ListeDCC : liste doublement chaînée circulaire.
```c
typedef struct ListeDCC {
    NoeudDC* tete;
} ListeDCC;
```

### 🔹 fonction_listes.c

Contient toutes les fonctions de manipulation des listes.

**🟢 Fonctions générales**

void afficherMenu()
→ Affiche le menu principal du programme.


**🟠 Liste simplement chaînée**

-NoeudSC* creerNoeudSC(int donnee) : crée un nouveau nœud.

-void insererTriSC(NoeudSC** tete, int donnee) : insère un élément dans une liste triée.

-void supprimerOccurrencesSC(NoeudSC** tete, int valeur) : supprime toutes les occurrences d’une valeur.
```
#procedure implémenté
1. Supprimer toutes les occurrences en tête
2. Parcourir le reste de la liste
3. Pour chaque occurrence trouvée :
   - Relier le nœud précédent au nœud suivant
   - Libérer le nœud courant
```

-void afficherListeSC(NoeudSC* tete) : affiche la liste.

-void libererListeSC(NoeudSC* tete) : libère la mémoire.


**🔵 Liste doublement chaînée**

-void insererTriDC(NoeudDC** tete, int donnee) : insertion triée.
```
1. Créer un nouveau nœud
2. Cas 1 : liste vide → devenir tête
3. Cas 2 : insertion en tête (valeur ≤ tête)
   - Nouveau → suivant = tête actuelle
   - Tête actuelle → précédent = nouveau
   - Tête = nouveau
4. Cas 3 : insertion au milieu/queue
   - Trouver position entre courant et courant→suivant
   - Ajuster 4 pointeurs
```

-void afficherListeDC(NoeudDC* tete) : affichage.

-void libererListeDC(NoeudDC* tete) : libération mémoire.


**🟣 Liste simplement chaînée circulaire**

-void insererTeteSCC(ListeSCC* liste, int donnee) : insertion en tête.

-void insererQueueSCC(ListeSCC* liste, int donnee) : insertion en queue.

-void afficherListeSCC(ListeSCC* liste) : affichage.

-void libererListeSCC(ListeSCC* liste) : libération mémoire.


**🔴 Liste doublement chaînée circulaire**

-void insererTeteDCC(ListeDCC* liste, int donnee) : insertion en tête.

-void insererQueueDCC(ListeDCC* liste, int donnee) : insertion en queue.

-void afficherListeDCC(ListeDCC* liste) : affichage.

-void libererListeDCC(ListeDCC* liste) : libération mémoire.




### 🔹 main.c

Programme interactif avec menu :

1. Supprimer toutes les occurrences (liste simplement chaînée)


2. Insérer dans une liste simplement chaînée triée


3. Insérer dans une liste doublement chaînée triée


4. Insertion en tête/queue (liste simplement chaînée circulaire)


5. Insertion en tête/queue (liste doublement chaînée circulaire)


6. Afficher toutes les listes


7. Quitter




**🧪 Exemple d’utilisation:**

```bash
=== PROGRAMME DE GESTION DE LISTES CHAÎNÉES ===

1. Supprimer toutes les occurrences d'un élément (Liste simplement chaînée)
2. Insérer un élément dans une liste simplement chaînée triée
3. Insérer un élément dans une liste doublement chaînée triée
4. Insertion en tête/queue dans une liste simplement chaînée circulaire
5. Insertion en tête/queue dans une liste doublement chaînée circulaire
6. Afficher toutes les listes
7. Quitter

Choix : 2
Entrez une valeur : 15
```

## 📌 Points forts du projet


-Gestion dynamique la mémoire (allocation mémoire avec malloc et libération avec free).

-Implémentation de plusieurs variantes de listes chaînées(liste simplement chaînée, doublement chaînée et circulaire .

-Menu interactif pour tester facilement.

