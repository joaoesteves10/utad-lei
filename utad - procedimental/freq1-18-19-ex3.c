#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char v[50];

    printf("> ");
    gets(v);

    int i;
    for (i = 0; i < strlen(v); i++) {
      if (v[i] >= 97 && v[i] <= 122) {
        v[i] -= 32;
      }
    }

    puts(v);
    return(0);
    
}
