#include <stdio.h>
int main() {
  int l, b, perimeter, area;
  printf("Enter the length of the reactangle\n");
  scanf("%d", &l);

  printf("Enter the breadth of reactangle\n");
  scanf("%d", &b);

  perimeter = 2 * (l +b);
  area = l * b ;
  printf("Perimeter:%d\n" , perimeter);
  printf("Area:%d\n" , area);
  if (area>perimeter) {
    printf("Area is greater than the perimeter");
  }
  else {
    printf("Perimeter is greater than the Area");
  }
return 0;
} 