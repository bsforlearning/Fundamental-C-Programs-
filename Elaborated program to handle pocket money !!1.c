/**********************************************************************************
 
 @Bhavanishankar K 
 
  You receive a certain amount of money as an allowance from your parents this week.
You are allowed to go spend it on ice creams for a maximum of five times in one week.
There is no limit on the number of ice creams you can buy in one visit as long as the total price stays within your budget.
If the total price in a visit exceeds the budget, you cannot spend your money in that visit.  
At the end of the week, you wish to know how much money you spent and saved, 
and also how many ice creams you ate in total. Write a C program for the same.*/

#include <stdio.h>
int main ()
{
  int no_times = 1, money_spent = 0, no_ice, ppi, no_ice_eaten = 0, pocket_money;	//Declare the variables
  printf ("Enter the pocket money received = ");	//What is your allowance for the week?
  scanf ("%d", &pocket_money);
  while (no_times <= 5)		//You can only visit the ice cream place a maximum of 5 times
    {
          printf ("Enter number of ice creams and price per ice cream in visit %d : ",no_times);
          scanf ("%d %d", &no_ice, &ppi);
    	  if ((money_spent + (no_ice * ppi)) <= pocket_money)	//If the money you wish to spend is within the budget...
    	    {
    	      money_spent = money_spent + (no_ice * ppi);	//You may spend the money on the ice creams
    	      no_ice_eaten += no_ice;	//The number of ice creams you ate in this visit adds to the total count for the week.
    	    }
    	  else			//If the money you wish to spend is beyond your budget
    	  printf ("Not enough pocket money to spend on this visit. \n");	//You cannot spend the money in this visit
    	  no_times++; //Increment the number of visits
    }

  printf ("You spent %d rs and you saved %d rs\n", money_spent, pocket_money - money_spent); 
  printf ("The number of icecreams you ate this week is %d", no_ice_eaten);
  return 0;
}



