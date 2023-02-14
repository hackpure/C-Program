// C Program To Convert Celcius Into Farenheit

#include <stdio.h>

int main(){
	float celcius;
	printf("Enter The Temperature In Celcius : ");
	scanf("%f", &celcius);
	printf("Temperature In Farenheit Is : %f", (celcius * 1.8) + 32);
	return 0;
}