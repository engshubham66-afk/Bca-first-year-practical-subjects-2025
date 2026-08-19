#include<stdio.h>

 main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	int i=2;
	while(i<=n/2)
	{
		if(n%i==0){
			printf("Not prime ");
			goto end;
		}
		i++;
	}
	printf("prime number ");
	end:
return 0;
}
