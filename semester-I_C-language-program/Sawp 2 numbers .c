#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	
    temp=a;
	a=b;
		b=temp;
	
	

	printf("a=%d and b=%d",a,b);
	getch();
}
