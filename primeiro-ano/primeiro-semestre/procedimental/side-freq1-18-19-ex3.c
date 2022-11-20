/* FREQUÊNCIA 1 DE PROGRAMAÇÃO PROCEDIMENTAL, 2018/2019; ENUNCIADO DISPONÍVEL NO SIDE

3. Faça um subprograma que receba, como parâmetro de entrada, um vetor de carateres, terminado com o carater ‘\0’, e a apresente no ecrã com todos os carateres em maiúsculas.

Exemplo: entra o vetor "aNo letIVo 18/19\0" e deve aparecer no ecrã “ANO LETIVO 18/19”.

Nota: os carateres maiúsculos têm o código ASCII com um valor que difere em 32 do código ASCII do caráter minúsculo correspondente. Por exemplo o código ASCII dos carateres ‘A’ = 65 e ‘a’ = 97. */

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
