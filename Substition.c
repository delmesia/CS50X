#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  const char letters[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q'};
  char *cipher = malloc(26); 	//This will allocate enough space for the cipher key
  char *s = malloc(26);		//Plaint text that the user will provide
  char *cip = malloc(26);	//The cipher key that will be printed to stdout.
  puts("Enter the cipher code: ");
  scanf("%s", cipher);
  puts("Enter the Plain Text: ");
  scanf("%s", s);
  for(size_t i = 0; i < sizeof(letters)*sizeof(char);i++){
    for(size_t j = 0; j < sizeof(letters)*sizeof(char); j++) {
     if(s[i] == letters[j]) { 	
      cip[i] += cipher[j];	// For each character in *s, find the equivalent in letters[] array
				// and keep the index to map it to the cipher key that will be printed
      }
    }
  }
  printf("Plain Text: %s\n", s);
  printf("Cipher Text: %s\n", cip);
}
