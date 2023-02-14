// C Program To Find The Area Of Triangle When Base and Height Are Given

#include <stdio.h>

int main(){
	int base, height;
	printf("Enter The Base Of The Triangle : ");
	scanf("%d", &base);
	printf("Enter The Height Of The Triangle : ");
	scanf("%d", &height);
	printf("The Area Of The Triangle Is : %f", 0.5 * (base * height));
	return 0;
}