#include<stdio.h>
int main()
{

int runs,truns=0,dotballs=0,bound=0;
int i;
for(i=1 ;i<=6;i++)
{printf("Balls  %d  runs: ",i);
scanf("%d",&runs);

truns=truns+runs;
if(runs==4||runs==6)
{bound++;
}
if(runs==0)
{dotballs++;
}
}
printf("Total Runs: %d\n",truns);
printf("Boundaries: %d\n",bound);
printf("Dot Balls: %d\n",dotballs);
return 0;
}