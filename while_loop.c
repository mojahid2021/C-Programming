#include<stdio.h>
int main () {
    int i = 0, a=5; // if print 1 to 5 , just change the i value is = 1
    while ( i < a) // if print 1 to 5, just add i <= a
    {
       printf("%d - Hello world!\n",i);

       i++;
    }
    
    return 0;
}