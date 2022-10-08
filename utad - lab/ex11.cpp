#include <stdio.h>
#include <locale.h>
#include <math.h>
/* 11. Uma empresa de telecomunicações cobra a utilização de uma linha dedicada
para transmissão de dados de acordo com a duração dessa utilização, segundo a
seguinte tabela de preços:

Tempo de utilização   |   Preço
1ª hora               |   2 cent./min.
2ª hora à 6ª hora     |   1 cent./min.
7ª hora à 24ª hora    |   30 cent./hora

Escreva um programa que, partindo dos valores de início e fim da utilização
(hora, minutos e segundos) calcule o valor a ser cobrado. */

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int elapsedTime, startTimeHours, startTimeMinutes, startTimeSeconds, endTimeHours, endTimeMinutes, endTimeSeconds;
  float price = 0;

  printf("hora de início (hh:mm:ss): ");
  scanf_s("%d:%d:%d", &startTimeHours, &startTimeMinutes, &startTimeSeconds);

  printf("hora de fim (hh:mm:ss): ");
  scanf_s("%d:%d:%d", &endTimeHours, &endTimeMinutes, &endTimeSeconds);

  elapsedTime = (( endTimeHours * 3600 + endTimeMinutes * 60 + endTimeSeconds ) - ( startTimeHours * 3600 + startTimeMinutes * 60 + startTimeSeconds )) / 60;
  // tempo da chamada, em minutos, já que tudo é cobrado em minutos ou em horas

  // evita valores inválidos no input e para a execução para valores negativos
  // isto torna impossível calcular o preço de chamadas entre dias diferentes, mas evita problemas com números negativos
  if (startTimeHours > 24 || startTimeHours < 0 || endTimeHours > 24 || endTimeHours < 0 ||
    startTimeMinutes > 60 || startTimeMinutes < 0 || endTimeMinutes > 60 || startTimeMinutes < 0 ||
    startTimeSeconds > 60 || startTimeSeconds < 0 || endTimeSeconds > 60 || endTimeSeconds < 0 ||
    elapsedTime < 0 ) {
      printf("valor inválido");
      return 1;
    }

  printf("-----\ntempo da chamada: %d minutos\n", elapsedTime);

  // da 2a à 6a hora, o tempo é maior que 6*60 minutos e menor ou igual a 24*60 minutos
  if (elapsedTime > 6*60 && elapsedTime <= 24*60) {
    // retirar as primeiras seis horas, para tornar os cálculos mais fáceis
    elapsedTime -= 6*60;
    // o warning diz que perdemos precisão ao fazer esta divisão, mas como só queremos a parte inteira, não há problema
    price += (elapsedTime/60) * 0.30;
    // agora só sobram os 60 minutos que tiramos no início da condição
    elapsedTime = 6*60;
  }

  // da 2a à 6a hora, o tempo é maior que 60 minutos e menor ou igual a 6*60 minutos
  if (elapsedTime > 60 && elapsedTime <= 6*60) {
    // retirar a primeira hora, para tornar os cálculos mais fáceis
    elapsedTime -= 60;
    price += elapsedTime * 0.01;
    // agora só sobram os 60 minutos que tiramos no início da condição
    elapsedTime = 60;
  }

  // na primeira hora, o tempo é menor ou igual a 60 minutos
  if (elapsedTime <= 60) {
    price += elapsedTime * 0.02;
  }

  printf("a chamada teve um custo de %.2f €", price);

  return 0;
}
