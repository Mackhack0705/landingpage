#include <stdio.h>
int main()
{
int base, exponent;
long int result=1;
scanf("%d", &base); //The base value is taken from test case
scanf("%d", &exponent);  //The exponent value is taken from test case
 while(exponent!=0)
     {
         result*=base; 
         exponent--;
     }
printf("The result is : %ld\n", result);

return 0;
}
