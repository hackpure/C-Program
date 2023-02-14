// C Porgram To Calculate Square Root Of A Given Number

#include <stdio.h>
#include <math.h>

int main(){
	float num;
	float squareroot;
	printf("Enter Your Number : ");
	scanf("%f", &num);
	squareroot = sqrt(num);
	printf("Square Root Of %f Is : %f", num, squareroot);
	return 0;
}