#include <assert.h>
#include "solution.h"

int main(){
    assert(task3(500) == 0);
    assert(task3(1000) == 1);
    assert(task3(1500) == 1);
    assert(task3(4851) == 4);
    assert(task3(1) == 0);

    return 0;
}