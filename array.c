#include<stdio.h>
int main () {
    int array[5] = {1,2,3,4,5}; // 5 is the array size, means how many values storing the array.

    for (int i = 0; i < 5; i++)
    {
        printf("Here is the array value : %d\n", array[i]);
    }
    

    return 0;
}