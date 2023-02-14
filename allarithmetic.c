// C Program For All Arithmetic Operations

#include <stdio.h>

int main(){
	int a, b;
	printf("Enter Your First Number : ");
	scanf("%d", &a);
	printf("Enter Your Second Number : ");
	scanf("%d", &b);
	printf("Addition Of %d and %d Is = %d", a, b, a + b);
	printf("\nSubtraction Of %d and %d Is = %d", a, b, a - b);
	printf("\nMultiplication Of %d and %d Is = %d", a, b, a * b);
	printf("\nDivision Of %d and %d Is = %d ", a, b, a / b);
	printf("\nRemainder Of %d and %d Is = %d ", a, b, a % b);
	return 0;
}