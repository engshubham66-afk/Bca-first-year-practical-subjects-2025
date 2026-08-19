#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b\n ");
	scanf("%d%d",&a,&b);
	
	printf("a=%d and b=%d",a,b);
	int sum=a+b;
	printf("\nSum of two numbers is %d",sum);
	getch();
}
