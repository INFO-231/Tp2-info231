# Insertion en Tête et en Queue dans une Liste Simplement Chaînée Circulaire

Ce projet implémente une **liste simplement chaînée circulaire** en
langage C, permettant l'insertion d'éléments soit au début (tête) soit à
la fin (queue) de la structure. Il inclut un menu interactif pour
faciliter la manipulation de la liste.

## ⚙️ Fonctionnalités

Le programme offre les fonctionnalités suivantes via un menu interactif
:

1.  **Créer une nouvelle liste :** Saisie manuelle du nombre d'éléments
    et de leurs valeurs.
2.  **Insérer en TÊTE :** Ajoute un nouvel élément au début de la liste
    (le nouveau nœud devient la nouvelle tête).
3.  **Insérer en QUEUE :** Ajoute un nouvel élément à la fin de la
    liste.
4.  **Afficher la liste :** Parcourt et affiche tous les éléments de la
    liste, en indiquant le retour à la tête.
5.  **Vider la liste :** Libère toute la mémoire allouée dynamiquement
    pour les nœuds.
6.  **Quitter :** Libère la mémoire restante et termine le programme.

## 🏗️ Structure du Projet

Le code source est contenu dans un seul fichier :
`insertions_tête_queue_list_simpins_tête_queue_simpl.c`.

### Structures de Données Clés

-   `Noeud` : Structure de base représentant un élément de la liste.
    `c     typedef struct Noeud {         int valeur;         struct Noeud *suivant;     } Noeud;`
-   **Liste Circulaire :** La liste est gérée par un pointeur
    (`Noeud *liste`) qui pointe toujours vers le **premier élément (la
    tête)**. Le dernier nœud de la liste pointe sur la tête, formant
    ainsi la boucle circulaire.

### Fonctions Principales

  ----------------------------------------------------------------------------------------
  Fonction                                             Description
  ---------------------------------------------------- -----------------------------------
  `CreerNoeud(int val)`                                Alloue et initialise un nouveau
                                                       nœud.

  `Inserer(Noeud **liste, int valeur, int position)`   La fonction clé. Gère l'insertion
                                                       en `TETE` (0) ou en `QUEUE` (1), y
                                                       compris le cas de la liste vide.

  `Afficher(Noeud *liste)`                             Parcourt la liste circulaire en
                                                       utilisant une boucle `do-while` et
                                                       affiche les valeurs.

  `LibererListe(Noeud **liste)`                        Libère séquentiellement tous les
                                                       nœuds de la liste pour éviter les
                                                       fuites de mémoire.

  `CreerListeParSaisie(Noeud **liste)`                 Gère la création initiale ou le
                                                       remplacement d'une liste existante.
  ----------------------------------------------------------------------------------------

## 🚀 Compilation et Exécution

### Prérequis

-   Un compilateur C standard (par exemple, GCC).

### Compilation

Ouvrez un terminal et utilisez la commande suivante pour compiler le
programme :

\`\`\`bash gcc insertions_tête_queue_list_simpins_tête_queue_simpl.c -o
liste_circulaire
