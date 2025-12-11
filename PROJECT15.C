//Display the GP- 3,12,48.... UPTO N TERMS
#include <stdio.h>
int main() 
{
    int i, n;
    printf("Enter the number:");
    scanf("%d", &n);
    int a=3;
    for(i=1; i<=n; i++) {
    printf("%d\n", a);
    a= a*4;
    
}

return 0;
}

//i ka kaam "for" loop ke andr sirf "n" bar loop chalane ka hai, usse GP se mtlb nhi, GP ka main calc "a" ke terms me hi ho rha, 
//agr i nhi rhega to pta hi kaise chalega ki loop kitne tkk chaalana hai.....