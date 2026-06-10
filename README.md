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

Une variable statique stock conserve les données lues mais pas encore retournées entre deux appels. Sans elle, les caractères lus au-delà d'un \n seraient perdus à chaque appel.
À chaque appel, read() remplit un buffer de taille BUFFER_SIZE. Ce buffer est ajouté à stock via ft_strjoin. On répète cette opération jusqu'à trouver un \n dans stock ou atteindre la fin du fichier.
Une fois un \n trouvé, on extrait ce qui le précède (incluant le \n) pour former la ligne à retourner. Ce qui suit le \n reste dans stock pour le prochain appel.

## Resources

- man read
- man open
- https://en.wikipedia.org/wiki/File_descriptor

Utilisation de l'IA : Claude a été utilisé comme tuteur pour comprendre les concepts
(variables statiques, read, gestion mémoire) et guider la réflexion, sans fournir
de code directement.