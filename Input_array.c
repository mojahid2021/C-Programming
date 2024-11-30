#include<stdio.h>
int main () {
    int a;
    scanf("%d", &a); // input the array size, that means how many values you want store.
    int array[a]; // declare the array with the array size.

    for (int i = 0; i < a; i++) // this loop for inputing the array value.
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < a; i++) // this loop use for print the array value.
    {
        printf("Here is the %d st value you inputed : %d\n", i, array[i]);
    }
    
    return 0;
}