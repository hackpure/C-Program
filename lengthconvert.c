// C Program To Convert Length (in cm) To Meter and Kilometer

#include <stdio.h>

void main(){
	float length;
	printf("Enter The Length (in cm) : ");
	scanf("%f", &length);
	printf("Length In Meters : %f\n", length / 100);
	printf("Length In KiloMeters : %f", length / 100000);
}