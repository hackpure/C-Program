// C Program To Enter Two Angles and Find The Third Angle

#include <stdio.h>

int main(){
	int angleone, angletwo;
	printf("Enter The First Angle : ");
	scanf("%d", &angleone);
	printf("Enter The Second Angle : ");
	scanf("%d", &angletwo);
	printf("By Angle Sum Property Of Triangles ..!");
	printf("\nThe Third Angle Is : %d", (180 - (angleone + angletwo)));
	return 0;
}