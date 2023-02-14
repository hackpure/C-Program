// C Program For Area Of Equilateral Triangle

#include <stdio.h>
#include <math.h>

void main(){
	float side, root_three, area;
	printf("Enter The Side Of Your Equilateral Triangle : ");
	scanf("%f", &side);
	root_three = sqrt(3);
	printf("Area Of Euilateral Triangle With Side %f Is : %f", side, (root_three / 4) * (side * side));
}