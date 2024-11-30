#include<stdio.h>
int main () {
    int a, b, division;
    printf("Enter the 1st Value: ");
    scanf("%d",&a);
    printf("Enter the 2hd Value: ");
    scanf("%d",&b);

    division = a / b;
    printf("The result of Division is : %d\n", division);

    return 0;
}