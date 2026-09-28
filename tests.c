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

int main(void)
{
    test1();
    return 0;
}
