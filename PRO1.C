#include<conio.h>
#include<stdio.h>
void main()
{
	int a=0,b,price , amount=0 ;

	clrscr();
	while (a!=6){
	printf("\nno.    item     price");
	printf("\n---------------------------");
	printf("\n1.     pizza     70 rs.");
	printf("\n2.     pasta     60 rs.");
	printf("\n3.     burger    50 rs.");
	printf("\n4.     fries     20 rs.");
	printf("\n5.     cola      15 rs.");
	printf("\n---------------------------");
	printf("\nenter 6 if you want to exit");
	printf("\n---------------------------");
	printf("\nenter the number of item you want: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("\npizza");
		printf("\nplease enter the quantity: ");
		scanf("%d",&b);
		break;
		case 2:
		printf("\npasta");
		printf("\nplease enter the quantity: ");
		scanf("%d",&b);
		break;
		case 3:
		printf("\nburger");
		printf("\nplease enter the quantity: ");
		scanf("%d",&b);
		break;
		case 4:
		printf("\nfries");
		printf("\nplease enter the quantity: ");
		scanf("%d",&b);
		break;
		case 5:
		printf("\ncola");
		printf("\nplease enter the quantity: ");
		scanf("%d",&b);
		break;
		case 6:
		printf("\nYour total billing amount = $ %d " , amount);
		break;
		default:
		printf("invalid choice");
		break;
	}
	if(a==1)
	{
		price=70*b;
		printf("price: %d",price);
		amount += price;
	}
	else if(a==2)
	{
		price=60*b;
		printf("price: %d",price);
		amount+=price;
	}
	else if(a==3)
	{
		price=40*b;
		printf("price: %d",price);
		amount+=price;
	}
	else if(a==4)
	{
		price=50*b;
		printf("price: %d",price);
		amount+=price;
	}
	else if(a==5)
	{
		price=15*b;
		printf("price: %d",price);
		amount+=price;
	}
	else if( a==6)
	{
		break;
	}
	else
	{
		printf("enter correct num");
	}
	}
	getch();
}



















