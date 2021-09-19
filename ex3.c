#include <stdio.h>

int main(void) {
    int age = 21, age_conv;

    age_conv = age * 365;
    printf("My age in years is %d and converted to days are %d.", age, age_conv);
    return 0;
}