#include "solutions.h"

int task1(int rub, int cents, int numbersOfPie) {
    int totalCents = (rub * 100 + cents) * numbersOfPie;
    return totalCents % 100;
}
