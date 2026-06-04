*This activity has been created as part of the 42 curriculum by mimparat.*

## Description

get_next_line est une fonction C qui lit une ligne à la fois depuis un file descriptor.
Appelée en boucle, elle parcourt un fichier entier ligne par ligne, en retournant
chaque ligne avec son `\n` final. Elle retourne NULL en fin de fichier ou en cas d'erreur.

## Instructions

Compilation :
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

Utilisation dans un programme :
#include "get_next_line.h"
char *line = get_next_line(fd);

## Algorithme

[Explique ici avec tes propres mots : pourquoi la variable statique, comment tu joins
le buffer à la statique à chaque appel, comment tu extrais la ligne et conserves le reste.]

## Resources

- man read
- man open
- https://en.wikipedia.org/wiki/File_descriptor

Utilisation de l'IA : Claude a été utilisé comme tuteur pour comprendre les concepts
(variables statiques, read, gestion mémoire) et guider la réflexion, sans fournir
de code directement.