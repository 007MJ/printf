# ft_printf

## Description

Le projet **ft_printf** est une réimplémentation de la fonction standard `printf` en C. Ce projet vise à recréer une version simplifiée et fonctionnelle de `printf`, en manipulant les arguments variadiques et en gérant différents types de conversion.

## Fonctionnalités

- Support des conversions suivantes :
  - `%c` : Affichage d'un caractère
  - `%s` : Affichage d'une chaîne de caractères
  - `%p` : Affichage d'un pointeur en notation hexadécimale
  - `%d` : Affichage d'un entier décimal signé
  - `%i` : Affichage d'un entier décimal signé (identique à `%d`)
  - `%u` : Affichage d'un entier non signé en base 10
  - `%x` : Affichage d'un entier non signé en base 16 (lettres en minuscules)
  - `%X` : Affichage d'un entier non signé en base 16 (lettres en majuscules)
  - `%%` : Affichage du caractère `%`
