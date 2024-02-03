# ft_printf

## Introduction

Bienvenue sur le projet ft_printf, une réalisation personnelle développée dans le cadre de ma formation à l'école 42. L'objectif de ce projet est de recréer la fonctionnalité de la fonction `printf()` en langage C. Cette implémentation a été conçue dans le cadre d'un projet pédagogique pour approfondir mes compétences en programmation, en particulier dans la manipulation des fonctions à nombre variable d'arguments.

## Fonctionnalités

Le projet ft_printf offre une version personnalisée de la fonction `printf()`, permettant de gérer les conversions spécifiées telles que `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, et `%%`. Cette réalisation est conforme aux spécifications standard de `printf()` et a été testée pour assurer son bon fonctionnement dans une variété de scénarios.

## Utilisation

Pour utiliser ft_printf dans votre projet, incluez le fichier d'en-tête `ft_printf.h` et assurez-vous d'avoir compilé la bibliothèque statique `libftprintf.a`. Vous pouvez ensuite appeler la fonction `ft_printf()` comme vous le feriez avec `printf()`, en passant les arguments et les spécificateurs de format appropriés.

## Exemple

Voici un exemple simple d'utilisation de ft_printf :

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}

