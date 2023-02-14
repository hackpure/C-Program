// C Program To Convert Days To Years, Weeks and Days 

#include <stdio.h>

void main(){
	int days;
	printf("Enter Number Of Days : ");
	scanf("%d", &days);
	printf("Number Of Years : %d\n", days / 365);
	printf("Number Of Weeks : %d\n", days / 7);
	printf("Number Of Days : %d\n", days);
}
