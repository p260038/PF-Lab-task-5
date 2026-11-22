#include <stdio.h>
int main()
{
int pin;
for(int i=2;i>=0;i--)
{  
printf("Enter PIN: ");
scanf("%d",&pin);
if(pin==4321)
{
printf("Access granted");
return 0;
}
if(i>0)
{     
printf("Wrong PIN. %d attempt(s) left.\n",i);
}
}
printf("Card blocked. Please contact your bank.");
return 0;
}