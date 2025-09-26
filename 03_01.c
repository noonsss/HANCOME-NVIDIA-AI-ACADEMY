/* <ÆÄÀÏ 1 : a.c> */
#include <stdio.h>
extern int i=1;

int main(void)
{
   int i, j;

   int (*pm)[4][5];

printf("pm=%d \n\n ",
	     sizeof(pm) );


   i = reset();
   for (j = 0; j < 3; j++)
      printf("i=%d; inc_i()=%d; new(i)=%d\n",
	     i, inc_i(), new(i));

   if (getch() == '0')
   {
	exit(0);
   }

}
