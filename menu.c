#include<stdio.h>
void main()
{
	int value;
	printf("Enter number between 1 to 5:");
	scanf("%d",&value);
	switch(value)
	{
	case 1:
		printf("Your order is 'PIZZA'\n");
		printf("Cost is 'Rs- 239'");
		break;
	case 2:
		printf("Your order is 'BURGER'\n");
		printf("Cost is 'Rs- 129'");
		break;
	case 3:
	    printf("Your order is 'PASTA'\n");
		printf("Cost is 'Rs- 179'");
		break;
	case 4:
	    printf("Your order is 'FRENCH FRIES'\n");
	    printf("Cost is 'Rs- 99'");
	    break;
	case 5:
		printf("Your order is 'SANDWICH'\n");
	    printf("Cost is 'Rs- 149'");
	    break;
	default:
		printf("Not matched from our menue:)");
		
	}
}
