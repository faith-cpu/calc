#include <stdio.h>

int main(){
	int a, b, choice, result;
	printf("1) add\n");
	printf("2) Subtract\n");
	printf("3) Devide\n");
	printf("4) Multiply\n\n");
	printf("Enter choice : ");
	scanf("%d\n", &choice);
	
	switch(choice){
		case 1:
			printf("Enter a value : ");
			scanf("%d", &a);
			printf("Enter another value : ");
			scanf("%d", &b);
			result = a + b;
			printf("The sum is %d", result);
			break;
		case 2:	
			printf("Enter a value : ");
			scanf("%d", &a);
			printf("Enter another value : ");
			scanf("%d", &b);
			result = a - b;
			printf("The difference is %d", result);
			break;
			
		case 3:
			printf("Enter a value : ");
			scanf("%d", &a);
			printf("Enter another value : ");
			scanf("%d", &b);
			result = a / b;
			printf("The result %d", result);
			break;
			
		case 4:
			printf("Enter a value : ");
			scanf("%d", &a);
			printf("Enter another value : ");
			scanf("%d", &b);
			result = a * b;
			printf("The product is %d", result);
			break;
			default:
				printf("Choice not available");
			
	}
	
	return 0;
	
}