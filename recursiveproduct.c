#include <stdio.h>

int calculateProduct(int num1, int num2)
{
    if (num1 < num2) {
        return calculateProduct(num2, num1);
    }
    else if (num2 != 0) {
        return (num1 + calculateProduct(num1, num2 - 1));
    }
    else {
        return 0;
    }
}
