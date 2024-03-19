#include<conio.h>
#include<stdio.h>
void main()
{
	int n;
	clrscr();


	printf("Enter the Number :-");
	scanf("%d",&n);

	if(n%2==0)
	{
		printf("Number is Even ");
	}
	else
	{
		printf("Number is Odd ");
	}
	getch();
}