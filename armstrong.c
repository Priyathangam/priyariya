#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int num,sum=0,r,n;
printf("\n enter the number: ");
scanf("%d",&num);
n=num;
while(n>0)
{
r=n%10;
sum+=pow(r,3);
n=n/10;
}
if(sum==num)
printf("\n %d is an armstrong number",num);
else
printf("\n %d is not an armstrong number",num);
return 0;
}
