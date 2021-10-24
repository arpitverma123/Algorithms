// QUESTION  1:
// I/P : N=4
// O/P:4444
//         4333
//         4322
//         4321








#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int m= (i<j)?i:j;
            printf("%d",n-m);
        }
        printf("\n");
    } 
    return 0;
}
