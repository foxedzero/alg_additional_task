#include <stdio.h>
#include <assert.h>
#include "solution.h"

int main(){
    assert(kmeters(500) == 0);
    assert(kmeters(1000) == 1);
    assert(kmeters(1500) == 1);
    assert(kmeters(4851) == 4);
    assert(kmeters(1) == 0);

    return 0;
}