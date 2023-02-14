// C Program To Input Basic Datatypes and Print The Output

#include <stdio.h>

void main(){
	int a;
	float b;
	char c;
	double d;
	printf("Enter Character Value : ");
	scanf("%c", &c);
	printf("Enter Integer Value : ");
	scanf("%d", &a);
	printf("Enter Float Value : ");
	scanf("%f", &b);
	printf("Enter Double Value : ");
	scanf("%lf", &d);
	printf("Integer %d \nFloat %f \nCharacter %c \nDouble %lf", a, b, c, d);
}