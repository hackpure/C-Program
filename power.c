// C Program To Find Power Of Any Given Number

#include <stdio.h>
#include <math.h>

int main(){
	float base, power, calc;
	printf("Enter The Base : ");
	scanf("%f", &base);
	printf("Enter The Power Of Base : ");
	scanf("%f", &power);
	calc = pow(base, power);
	printf("Your Result Is : %f", calc);
	return 0;
}