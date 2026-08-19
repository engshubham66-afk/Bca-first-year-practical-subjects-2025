#include<stdio.h>
#include<conio.h>

 main()
{
	int num;
	
	printf("enter any number: \n");
	scanf("%d",&num);
	for(int i=1;i<=10; i++)
	{
		printf("%d*%d = %d\n",num,i,num*i);
		
	}
	getch();
}
