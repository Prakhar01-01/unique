#include <stdio.h>
void swap(int a, int b) {
    int z= a;
    b =a;
    a = z;
    return; 
}

int main() {
    int a,b;
    printf("enter the no");
    scanf("%d%d", &a, &b);
swap(a,b);
printf("a is:%d", a);
printf("b is:%d", b);


return 0;

    
    
}