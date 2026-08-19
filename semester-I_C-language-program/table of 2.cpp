#include<stdio.h>
#include<conio.h>

main()
{
	// 1 2 3 4 ...10n
	int num;
	
	printf("enter the number: \n");
	scanf("%d",&num);
	
	for(int i=1; i<=10; i++)
	{  
		printf(" %d*%d= %d\n", num,i, num*i);
        }
	getch();
	
}
