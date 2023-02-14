// C Program To Calculate Total Average and Percentage Of Given Marks Of Five Subjects

#include <stdio.h>

void main(){
	float sub1, sub2, sub3, sub4, sub5, maxmarks, total, percentage;
	printf("Enter Maximum Marks : ");
	scanf("%f", &maxmarks);
	printf("Enter The Marks Of First Subject : ");
	scanf("%f", &sub1);
	printf("Enter The Marks Of Second Subject : ");
	scanf("%f", &sub2);
	printf("Enter The Marks Of Third Subject : ");
	scanf("%f", &sub3);
	printf("Enter The Marks Of Fourth Subject : ");
	scanf("%f", &sub4);
	printf("Enter The Marks Of Fifth Subject : ");
	scanf("%f", &sub5);
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	printf("Total Marks Obtained : %f\n", total);
	printf("Average Of Marks : %f\n", total / 5);
	percentage = total / maxmarks * 100;
	printf("Percentage Obtained %f", percentage);
}