#include "solutions.h"
#include <assert.h>
#include <stdio.h>

void test2()
{
    int n, k;
    n = 3, k = 10;
    assert (task2(n, k) == 1);
    printf("Test 1 task 2 OK\n");

    n = 1000, k = 1000;
    assert (task2(n, k) == 0);
    printf("Test 2 task 2 OK\n");

    n = 150, k = 7;
    assert (task2(n, k) == k);
    printf("Test 3 task 2 OK");
}

int main( void )
{
    test2();
}







