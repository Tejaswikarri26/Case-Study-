#include<stdio.h>
int main ()
{
int choice;
float amount,balance;
printf("enter current balance:");
scanf("%f",&balance);
printf("\n1. balance inquiry");
printf("\n2. cash withdrawl");
printf("\n3. cash deposit");
printf("\nenter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:  
  printf("current balance: %.2f\n",balance);
 break;
case 2:
printf("enter withdrawl amount:");
scanf("%f",&amount);
if(amount <= balance)
{
balance = balance - amount;
printf("\nTransaction successful");
printf("\nRemaining balance: %.2f", balance);
}
else
  printf("\nInsufficient balance");
break;
case 3:
printf("enter the deposit amount:");
scanf("%f", &amount);
 balance = balance + amount;
printf("\nDeposit successful");
printf("\nUpdated balance: %.2f\n", balance);
break;
default:
printf("\nInvalid option");
return 0;
}
}





  
