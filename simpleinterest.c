// C Porgram To Calculate Simple Interest

#include <stdio.h>

void main(){
	float principal, rate, time;
	printf("Enter The Principal Amount : ");
	scanf("%f", &principal);
	printf("Enter The Rate Of Interest : ");
	scanf("%f", &rate);
	printf("Enter The Time : ");
	scanf("%f", &time);
	printf("Simple Interest Is : %f", (principal * rate * time) / 100);
}