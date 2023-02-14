// C Program To Calculate Compound Interest

#include <stdio.h>
#include <math.h>

void main(){
	float principle, rate, time, ci;
	printf("Enter The Principal Amount : ");
	scanf("%f", &principle);
	printf("Enter The Rate Of Interest : ");
	scanf("%f", &rate);
	printf("Enter The Time : ");
	scanf("%f", &time);
	ci = principle * pow((1 + rate / 100), time);
	printf("Coumpund Interest Is : %f", ci);
}