// C Program To Convert Celcius Into Farenheit

#include <stdio.h>

int main(){
	float farenheit;
	printf("Enter The Temperature In Farenheit : ");
	scanf("%f", &farenheit);
	printf("Temperature In Celcius Is : %f", (farenheit - 32) * 5/9);
	return 0;
}