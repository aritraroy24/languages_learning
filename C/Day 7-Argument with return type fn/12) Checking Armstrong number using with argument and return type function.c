#include<stdio.h>
#include<conio.h>
armstrong(int);
void main()
{
	int n=0,x=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	x=armstrong(n);
	if(x==0)
		printf("It is an Armstrong number");
	else
		printf("It is not an Armstrong number");
}
armstrong(int n1)
{
	int s1=0,m=0,temp=0,flag=0;
	temp=n1;
	while(n1!=0)
	{
		m=n1%10;
		n1=n1/10;
		s1=s1+m*m*m;
	}
	if(s1==temp)
		flag=0;
	else
		flag=1;
	if(flag==0)
		return 0;
	else
		return 1;
}
