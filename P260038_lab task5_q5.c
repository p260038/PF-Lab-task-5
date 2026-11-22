#include<stdio.h>
int main()
{
int choice,quan;
int t_item=0;
int bill=0;
float dis=0.0;
float pay;
for(;;)
{
printf("_________________________________");
printf("\nChoice\tItem\t\tPrice (Rs)\n");
printf("_________________________________\n");
printf("1\tTea\t\t60\n");
printf("2\tSamosa\t\t40\n");
printf("3\tSandwich\t180\n");
printf("4\tCheckout\t --\n");
printf("_________________________________\n");
printf("Enter Choice: ");
scanf("%d",&choice);
if(choice==4)
{
break;
}
if(choice>=1 && choice<=3)
{
printf("Quantity: ");
scanf("%d",&quan);
if(choice==1)
{
bill+=60*quan;
}
else if(choice==2)
{
bill+=40*quan;
}
else if(choice==3)
{
bill+=180*quan;
}
t_item+=quan;
printf("Current bill: Rs %d\n ",bill);
}

else
{
printf("Invalid choice.Try again.\n");
}
}
if(bill>1000)
{
dis=bill*0.10;
}
else
{
dis=0.0;
}

pay=bill-dis;

printf("\nTotal items: %d\n",t_item);
printf("Bill: Rs %d\n",bill);
printf("Discount: Rs %.0f\n",dis);
printf("Payable: Rs %.0f\n",pay);

return 0;

}