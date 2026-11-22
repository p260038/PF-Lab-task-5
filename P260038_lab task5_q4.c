#include <stdio.h>
int main()
{
int t_student,marks;
int passed=0,failed=0;
int t_sum=0;
int highest=-1;
printf("Number of Students: ");
scanf("%d",&t_student);
if(t_student<1)
{ 
printf("Invalid number of students!");
return 0;
}
for(int i=1;i<=t_student;i++)
{  
printf("Marks of student %d:  ",i);
scanf("%d",&marks);
t_sum=t_sum+marks;
if(marks>=50)
{
passed++;
}
else
{
failed++;
}
if(marks>highest)
{
highest=marks;
}
}
float average=(float)t_sum/t_student;
printf("\nPassed: %d\n",passed);
printf("Failed: %d\n",failed);
printf("Highest: %d\n",highest);
printf("Average: %.2f\n",average);
return 0;
}