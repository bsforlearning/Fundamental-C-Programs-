/*

@Bhavanishankar 

C program to 
  a. print the unique elements in the given array
  b. print the kth unique element in the array
  
  example 
  if array a={ 1, 2, 1, 3, 4, 2 }
  then the output : 3, 4   ( unique elements)
  if k=2 then the output = 4
  if k exceeds the number of unique elements print appropriate message 
*/

#include<stdio.h>
int
main ()
{

  int a[6] = { 1, 2, 1, 3, 4, 2 };
//  int a[6] = { 1, 1, 1, 1, 4, 2 };
  int i, j, k;
  for (i = 0; i < 6; i++)
    {
      if(a[i]==0) continue;
      for (j = i+1; j < 6; j++)
	    {
	        if (a[j] == 0)
	        continue;
	       if (a[i] == a[j])
	         {
	            a[i] = a[j] = 0;
	            break;
	         }
    	}
    }
  printf ("The unique elements present in the array are \t");
  for (i = 0; i < 6; i++)
    {
      if (a[i] == 0)
	    continue;
      printf ("%d ", a[i]);
    }
  printf ("\nEnter the vaalue of k  ");
  scanf ("%d", &k);
  for (i = 0; i < 6; i++)
    {
      if (a[i] == 0)
    	continue;
      else
    	k--;
      if (!k)
	    break;
    }
  if (k)
    printf ("No unique element found ");
  else
    printf ("the kth unique element is %d ", a[i]);
return 0;
}

