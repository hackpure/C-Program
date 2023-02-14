// C Program To Find Diameter, Circumference And Area Of A Circle

#include <stdio.h>

int main(){
	float radius;
	printf("Enter The Radius Of The Circle : ");
	scanf("%f", &radius);
	printf("Diameter Of Your Circle Is : %f", 2 * radius);
	printf("\nCircumference Of Your Circle Is : %f", 2 * 3.14 * radius);
	printf("\nArea Of Circle Is : %f", 3.14 * radius * radius);
	return 0;
}