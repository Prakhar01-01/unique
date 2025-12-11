#include <stdio.h>
int factorial(int x) {
    int fact =1;
    for ( int i = 1; i <=x; i++)
    {
        fact*=i;
    }
    return fact;
}
int combination (int n, int r) {
    int nCr = factorial(n)/ (factorial(n-r) * factorial(r));
    return nCr;
    
}
int main() {
    int n;
    printf("Enter the no of lines");
    scanf("%d", &n);
    for ( int i = 0; i <=n; i++)
    {
        for ( int j = 0; j <= i; j++)
        {
           int iCj = combination (i,j);
            printf("%d", iCj);
        }
        printf("\n");
        
    }

    return 0;
    
}