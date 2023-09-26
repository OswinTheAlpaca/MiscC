#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_REPEATED_CHARS 9

char* rle_encode(const char* s) {
  // On alloue de l'espace pour le résultat final
  char* result = malloc(strlen(s) * 2 + 1);
  // On crée un pointeur vers le début du résultat final
  char* p = result;

  while (*s) {
    // On compte le nombre de caractères successifs
    int count = 1;
    while (s[count] == *s && count < MAX_REPEATED_CHARS) {
      count++;
    }

    // On écrit le nombre de caractères successifs et le caractère lui-même
    if (count > 1) {
      sprintf(p, "%d%c", count, *s);
      p += 2;
    } else {
      *p = *s;
      p++;
    }

    // On avance le pointeur vers le caractère suivant
    s += count;
  }

  // On ajoute un caractère nul pour marquer la fin de la chaîne
  *p = '\0';

  return result;
}

char* rle_decode(const char* s) {
  // On alloue de l'espace pour le résultat final
  char* result = malloc(strlen(s) + 1);
  // On crée un pointeur vers le début du résultat final
  char* p = result;

  while (*s) {
    // Si le caractère suivant est un chiffre, cela signifie qu'on a une occurrence successive
    if (isdigit(*s)) {
      // On lit le nombre de caractères successifs
      int count = *s - '0';
      s++;

      // On ajoute les caractères successifs au résultat final
      for (int i = 0; i < count; i++) {
        *p = *s;
        p++;
      }
    } else {
      // Sinon, on ajoute simplement le caractère au résultat final
      *p = *s;
      p++;
    }

    // On avance le pointeur vers le caractère suivant
    s++;
  }

  // On ajoute un caractère nul pour marquer la fin de la chaîne
  *p = '\0';

  return result;
}

int main(){
    const char* s;
    rle_encode(s);
    rle_decode(s);
    return 0;

}

