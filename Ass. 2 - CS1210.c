//ex1.c

#include <stdio.h>

int main(void) {
    char first[8] = "Michael", last[4] = "Loh";
    
    printf("%s %s \n", first, last);
    printf("%s\n%s \n", first, last);
    printf("%s", first);
    printf(" %s", last);
    return 0;
}


//ex3.c

#include <stdio.h>

int main(void) {
    int age = 21, age_conv;

    age_conv = age * 365;
    printf("My age in years is %d and converted to days are %d.", age, age_conv);
    return 0;
}

// ex8.c

#include <stdio.h>

int two(void) {
    printf("two\n");
    return 0;
}

int one_three(void) {
    printf("one\n");
    two();
    printf("three\n");
    return 0;
}

int main(void) {
    printf("starting now:\n");
    one_three();
    printf("done!");
    return 0;
}