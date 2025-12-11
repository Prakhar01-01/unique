#include <stdio.h>
int main() {
    int marks[10] = {55, 33, 56, 60, 45, 22, 45, 14, 55, 69} , i;
    for ( i = 0; i < 10; i++)
    {
        if (marks[i] <35)
        {
            printf("The failed student's roll numbers:%d\n", i);
        }
    }
        
        return 0;
    
}