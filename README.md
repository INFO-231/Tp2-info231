# TP N°2 INF 231_EC2: STRUCTURE DE DONNEES II
## ÉNONCÉS DU TP
Écrire en C
1. Lire un élément et supprimer toutes les occurence dans la liste 
2. Insertion d'un élément dans une liste simplement chaîne trié 
3. Insertion d'un élément dans une liste doublement chaîne trié 
4. Insertion en tête et en queue dans une liste simplement chaîne circulaire 
5. Insertion en tête et en queue dans une liste doublement chaîne circulaire
   
## Objectif: Gestion de Listes Chaînées en C

Un programme modulaire en C avec interface terminal pour manipuler différents types de listes chaînées.

## ⚙️ Fonctionnalités

1. **Suppression d'occurrences** - suppression de toutes les occurence dans une liste simplement chaînée
2. **Insertion triée** - Liste simplement chaînée
3. **Insertion triée** - Liste doublement chaînée
4. **Insertion tête/queue** - Liste simplement chaînée circulaire
5. **Insertion tête/queue** - Liste doublement chaînée circulaire

## 📂 Contenu
- `main.c` : programme principal (interface utilisateur mode terminal )
- `fonction_listes.c` : implémentation des fonctions
- `fonction_listes.h` : bibliothèque des fonctions crée et structures de données
- `makefile` : makefile pour compiler automatiquement sous système de distribution Linux 
- `/doc` : documentation des différents membres 




## 🚀 Compilation et exécution sur Ubuntu 

```bash
# Compilation
make

# Exécution
./main
```
## 🖥️ Compilation sous **Visual Studio (Windows)**

1. Ouvrir Visual Studio.


2. Créer un nouveau projet C (Console Application).


3. Ajouter les fichiers suivants au projet :
```bash
main.c

fonction_listes.c

fonction_listes.h
```


4. Vérifier que dans Propriétés du projet :

Le langage est bien réglé en C (pas C++).

Le répertoire contenant fonction_operation.h est inclus dans les Include Directories.



5. Cliquer sur Build → Build Solution (ou Ctrl+Shift+B).


6. Exécuter le projet avec Ctrl+F5.

