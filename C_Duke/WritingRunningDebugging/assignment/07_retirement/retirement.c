#include <stdio.h>
#include <stdlib.h>
#define MONTHPERYEAR 12

typedef struct {
  int months;
  double contribution;
  double rate_of_return;
} retire_info; // My have trouble here for finder?

void retirement(int startAge, double initial, retire_info working,
                retire_info retired) {
  int Age = startAge / MONTHPERYEAR;
  int month = startAge % MONTHPERYEAR;
  int retiredAge = startAge + working.months;
  int lifeLength = retiredAge + retired.months;
  double money = initial;
  int nowadays = 0;
  printf("Age %3d month %2d you have $%.2lf\n", Age, month, money);

  for (int first = month + 1; first < MONTHPERYEAR; first++) {
    money = money + working.rate_of_return * money + working.contribution;
    printf("Age %3d month %2d you have $%.2lf\n", Age, first, money);
  }

  for (int i = Age + 1; i < lifeLength / MONTHPERYEAR; i++) {
    for (int j = 0; j < MONTHPERYEAR; j++) {
      nowadays = i * MONTHPERYEAR + j;
      if (nowadays <= retiredAge) {
        money = money + working.rate_of_return * money + working.contribution;
        printf("Age %3d month %2d you have $%.2lf\n", i, j, money);
      }
      if (nowadays > retiredAge) {
        money = money + retired.rate_of_return * money - retired.contribution;
        printf("Age %3d month %2d you have $%.2lf\n", i, j, money);
      }
    }
  }
}

int main(void) {
  int startAge = 327;
  double initial = 21345;
  retire_info working;
  retire_info retired;

  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045 / 12;

  retired.months = 384;
  retired.contribution = 4000;
  retired.rate_of_return = 0.01 / 12;
  retirement(startAge, initial, working, retired);
}
