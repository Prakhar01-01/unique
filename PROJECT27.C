//WAP to print:
//*
//** 
//*** 
//**** 

#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter the number of lines:");
    scanf("%d", &n);

for ( i = 1; i <= n; i++)
{
    for ( j = 1; j <= i; j++)   //n=3, 1st for loop =   1<=3.. fir andr jaayega , j=1 , 1<=1,,, ek star print ho jayega , phir j++ ...now j=2 2<=1 (wrong) ..loop break phir outer loop me jayega,i=2,,, 2<=3, phir andr jayega , but aab iss baar phir se j=1 ho gya hoga kyoki andr vala loop restart hua hai...1<=2 phir ek star print hoga,, j++, 2<=2, ek aur star print hoga, j++, phir loop break ho jayega..and continued again from the outer loop with i=3
    {
        printf("*");
        
    }
    printf("\n");                
}





return 0;
}

