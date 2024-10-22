#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	    sum=sum+i;
	}
	printf("sum of %d numbers is %d",n,sum);
	return 0;
	getch();
}



