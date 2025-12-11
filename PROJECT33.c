// #include <stdio.h>

// int main()
// {
// int n, Factorial=1;
// printf("Enter the number:");
// scanf("%d", &n);
// for ( int i = 1; i <= n; i++)
// {
//     Factorial= Factorial* i ;
// }
// printf("Factorial:%d", Factorial);

// return 0;


// }
//for calculating nCr and nPr
#include <stdio.h>

int main()
{
    int n,r;
    float nCr;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter r:");
    scanf("%d", &r);
    int nfact=1, rfact=1, nrfact=1;
    for ( int i = 2; i <=n ; i++)
    {
        nfact *= i;
    }
    printf("n!:%d\n", nfact);
    for ( int i = 2; i <=r ; i++)
    {
        rfact *= i;
    }
    printf("r!:%d\n", rfact);
    for ( int i = 2; i <=(n-r) ; i++)
    {
        nrfact *= i;
    }
    printf("(n-r)!:%d\n", nrfact);

    nCr = nfact/(rfact*nrfact);
    printf("The value of nCr is:%f\n", nCr);

    return 0;
}



    
