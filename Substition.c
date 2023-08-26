#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALPHABET 26
int main(){
  const char letters[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q'};
  char *cipher = malloc(26);
  char *s = malloc(5);
  char *cip = malloc(5);
  puts("Enter the cipher code: ");
  scanf("%s", cipher);
  puts("Enter the Plain Text: ");
  scanf("%s", s);
  for(size_t i = 0; i < sizeof(letters)*sizeof(char);i++){
    for(size_t j = 0; j < sizeof(letters)*sizeof(char); j++) {
     if(s[i] == letters[j]) {
      cip[i] += cipher[j];
      }
    }
  }
  printf("Plain Text: %s\n", s);
  printf("Cipher Text: %s\n", cip);
}
