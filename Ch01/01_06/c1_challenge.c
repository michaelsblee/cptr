#include <stdio.h>

int main() {
    char a;
    char *x;

    int b;
    int *y;

    // Output address of variables of a and b
    printf("Address of 'a': %p\n",&a);
	printf("Address of 'b': %p\n",&b);

    // Initialize pointers x, y to their corresponding variables
    // Output addresses stored in each pointer variable
    x = &a;
    y = &b;
    printf("address of a: %p\n",x);
    printf("address of b: %p\n",y);
}