#include<stdio.h>
int main()
{
int lap_p,c_saving,m_savings;
printf("Laptop price: ");
scanf("%d",&lap_p);
printf("Current savings: ");
scanf("%d",&c_saving);
printf("Monthly Savings: ");
scanf("%d",&m_savings);
int month=0;
while(c_saving<lap_p)
{month++;
c_saving=c_saving+m_savings;
printf("Month %d: savings=%d\n",month,c_saving);
}

printf("Sara can buy the laptop after %d months",month);
return 0;
}