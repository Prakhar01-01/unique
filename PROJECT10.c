//PROFIT LOSS BY GIVING COST AND SELLING PRICE
#include <stdio.h>
int main() {
    float cp, sp, profit,loss, lossper, profitper;


  printf("Enter the cost price");
  scanf("%f", & cp);
  printf("Enter the  selling price");
  scanf("%f", & sp);

  if (cp<sp) {
    printf("It's a Profit\n");
    profit = sp - cp;
    printf("Your Profit: %f\n", profit);
    profitper = profit / cp *100; 
    printf("Your Profit percentage is: %f\n", profitper);
}
  else {
    printf("It's a Loss\n");
    loss = cp - sp;
    printf("Youe Loss: %f\n", loss);
    lossper = loss / cp *100;
    printf("Your Loss percentage is: %f\n", lossper);
  }


return 0;
} 