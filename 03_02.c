/*<ÆÄÀÏ 2 : b.c>*/

static int i = 10;
int inc_i()
{
   i++;
   return i;
}
int new(int i)
{
   static int val = 100;
   val += i;
   return val;
}
