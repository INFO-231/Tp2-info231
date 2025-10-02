# 📚 Liste Doublement Chaînée Circulaire (Insertion en Tête) – C

## 📖 Définition

La liste doublement chaînée circulaire combine :
- Les avantages des listes doublement chaînées (parcours bidirectionnel)
- La structure circulaire (pas de fin NULL)
- Chaque nœud pointe vers son suivant et son précédent

## 🏗️ Structure de donnée

```c
typedef struct ListeDCC {
    NoeudDC* tete;
} ListeDCC;

typedef struct NoeudDC {
    int donnee;
    struct NoeudDC* precedent;
    struct NoeudDC* suivant;
} NoeudDC;
```

**Propriétés :**

tete→precedent = dernier nœud

tete→precedent→suivant = tête

Structure totalement circulaire

## 📂 Structure du projet

.
├── src
│ ├── main.c # Programme principal
│ ├── fonction_listes.c # Implémentation des fonctions
│ └── fonction_listes.h # Structures + prototypes
├── obj # Fichiers objets (créés après compilation)
├── Makefile # Compilation automatique
└── README.md # Documentation



## ⚙️ Compilation
Pour compiler, tapez :

```bash
make

Un exécutable nommé liste sera généré.
▶️ Exécution

Lancer le programme avec :

./main
```
## ⚙️ Opérations implémentées

**Insertion en tête**
**Fonction :** insererTeteDCC()

**Algorithme :**
```c
1. Créer nouveau nœud
2. Si liste vide :
   - tête = nouveau
   - nouveau→suivant = nouveau
   - nouveau→precedent = nouveau
3. Sinon :
   - dernier = tête→precedent
   - nouveau→suivant = tête
   - nouveau→precedent = dernier
   - tête→precedent = nouveau
   - dernier→suivant = nouveau
   - tête = nouveau
```
