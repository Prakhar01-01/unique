#include <stdio.h>
int factorial (int x) {
int fact =1;
for ( int i=2; i <=x ; i++)
{
	fact *= i;
}
	return fact;
}


int main() {
	int n, r, nCr, nPr;
	printf("Enter the number");
	scanf ("%d", &n);
	printf("Enter the number");
	scanf ("%d", &r);
	
	nCr= factorial(n)/ factorial(n-r) * factorial(r);
	nPr= factorial(n)/ factorial(n-r);
	    printf("The PERMUTATION is:%d", nPr);
		printf("The COMBINATION is:%d", nCr);

	    
	    return 0;

}

