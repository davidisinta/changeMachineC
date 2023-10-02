#include <stdio.h>

int main(void) 
{

  // initialize factors for the different dimensions 
  float pennyFactor=0.01;
  float nickelFactor=0.05;
  float dimeFactor=0.1;
  float quarterFactor=0.25;
  
  printf("Please input the number of Pennies, Nickels, Dimes and Quarters repectively:\n");

  int pennies=0;
  int nickels=0;
  int dimes=0;
  int quarters=0;

  scanf("%d %d %d %d", &pennies, &nickels, &dimes, &quarters);
  printf("You have entered %d pennies, %d nickels, %d dimes, and %d quarters:\n", pennies, nickels,dimes,quarters);

 float pennyVal=pennies*pennyFactor;
 float nickelVal=nickels*nickelFactor;
 float dimeVal=dimes*dimeFactor;
 float  quarterVal=quarters*quarterFactor;

  
//calculate total amount of money
int totalCash= pennyVal+nickelVal+dimeVal+quarterVal;

printf("Total Amount Entered: $%d \n", totalCash);

  int currentVal=totalCash;
  int twenties=0;
  int tens=0;
  int fives=0;
  int ones=0;

  int amountDeducted=0;

  //get the number of 20 dollar bills
  //we must use a combination of div and mod to achieve this

  if (currentVal>=20)
  {
    twenties=currentVal/20;

    amountDeducted=twenties*20;
    currentVal-=amountDeducted;
  }
  

  // get number of 10 dollar bills
  if (currentVal>=10)
  {
    tens=currentVal/10;

    amountDeducted=tens*10;
    currentVal-=amountDeducted;
  }

  //get 5 dollar bills
  if (currentVal>=5)
  {
    fives=currentVal/5;

    amountDeducted=fives*5;
    currentVal-=amountDeducted;
  }

  //get one dollar bills
  if (currentVal>=1)
  {
    ones=currentVal;

  }

  printf("You will receive: %d - $20 bills, %d - $10 bills, %d - $5 bills, and %d $1 bills", twenties, tens, fives, ones);
    

  
  return 0;
}
