#include<stdio.h>
main()
{
	int food;
	printf("What food would you like to eat? \n\n1.burger \n\n2.sandwich \n\n3.pizza \n\n4.pasta \n\n5.juice");
	scanf("%d",&food);
	switch(food)
	{
		case 1:
			printf("\nFood item:burger \nprice:150");
			break;
		case 2:
			printf("\nFood item:sandwich \nprice:100");
			break;
		case 3:
			printf("\nFood item:pizza \n\nprice:160");
			break;
		case 4:
			printf("\nFood item:pasta \n\nprice:200");
			break;
		case 5:
			printf("\nFood item:juice \n\nprice:60");
			break;
		default:
			printf("\nsry,the food is not available here");
		  
	}
	return 0;
	
}
