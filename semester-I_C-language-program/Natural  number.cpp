#include<stdio.h>
#include<conio.h>

int main()
{
	// 1, 2, 3, 4, ....n
	int n,i=1;
	printf("enter any number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf(" %d",i);
		++i;
	}
	getch();
}
