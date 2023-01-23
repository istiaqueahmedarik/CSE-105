#include <stdio.h>

int main ()
{
  /* Declaring 5 variables. */
  int i, nth, num = 1, position = 0, palindrom = 0;
  scanf ("%d", &nth);

  /* Checking if the number is a palindrome. */
  while (position != nth)
    {
      int num1=num;
      int num2=0;
   /* Reversing the number. */
    while(num1!=0)
    {
        int r=num1%10;
        num1/=10;
        num2=num2*10+r;
    }
    /* Checking if the number is a palindrome. */
	if(num==num2)
      {
          position++;
          palindrom=num;
      }
      num = num + 1;
    }
  printf ("%d", palindrom);
  return 0;
}