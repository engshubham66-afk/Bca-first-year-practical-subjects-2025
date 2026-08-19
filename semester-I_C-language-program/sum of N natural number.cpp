#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,sum=0;
	printf("enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	sum=sum+i;
	}
	printf("Sum of N natural number: %d", sum);
}
