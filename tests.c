#include "solutions.h"
#include <assert.h>
#include <stdio.h>

void test1()
{
    assert(task1(1, 50, 2) == 0);
    printf("Test 1 task 1 OK\n");

    assert(task1(2, 30, 3) == 90);
    printf("Test 2 task 1 OK\n");

    assert(task1(0, 5, 1) == 5);
    printf("Test 3 task 1 OK\n");
}

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
    printf("Test 3 task 2 OK\n");
}

void test3(){
    assert(task3(500) == 0);
    printf("Test 1 task 3 OK\n");

    assert(task3(1000) == 1);
    printf("Test 2 task 3 OK\n");

    assert(task3(1500) == 1);
    printf("Test 3 task 3 OK\n");

    assert(task3(4851) == 4);
    printf("Test 4 task 3 OK\n");

    assert(task3(1) == 0);
    printf("Test 5 task 3 OK\n");
}

int main(void)
{
    test1();
    test2();
    test3();
    return 0;
}







