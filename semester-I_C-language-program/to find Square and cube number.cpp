#include<stdio.h>

main()
{
	int n,i;
	printf("Enter an positive integer:\n");
	scanf("%d",&n);
	if(n<=0){
		printf("Invalid value! \n Please a non-negative value: ");
	return 1;
		}
	printf("Number\tSquare\tCube");

	
	printf("\n==========================================================================================\n");
	for(i=1; i<=n; i++){
		printf("%d\t%d\t%d\n",i,i*i,i*i*i);
}
return  0;
}
