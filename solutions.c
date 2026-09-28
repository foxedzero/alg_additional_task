#include "solutions.h"

int task1(int rub, int cents, int numbersOfPie) {
    int totalCents = (rub * 100 + cents) * numbersOfPie;
    return totalCents % 100;
}

int task2( int n, int k ) {
    return k % n;
}

int task3(int meters){
    int km = meters / 1000;
    return km;
}