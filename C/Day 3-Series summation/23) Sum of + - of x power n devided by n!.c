#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i=0,j=0,f=1,n=0,x=0;
	float s=0.0;
	printf("Enter the value of 'n' and 'x' respectively ");
	scanf("%d %d",&n,&x);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		s=s+(float)pow(-1,i+1)*pow(x,i)/f;
		f=1;
		if(i!=n)
		{
			if(i%2==0)
				printf(" %d(pow)%d/%d! +",x,i,i);
			else
				printf(" %d(pow)%d/%d! -",x,i,i);
		}
		else
			printf(" %d(pow)%d/%d! = ",x,i,i);
	}
	printf("%f",s);
}
