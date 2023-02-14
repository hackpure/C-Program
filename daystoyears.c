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




/*

If-else Approach

int main(){
	int days;
	int years = 0;
	int weeks = 0;
	int days_left = 0;
	printf("Enter Number Of Days : ");
	scanf("%d", &days);
	while (days >= 365){
		days -= 365;
		years += 1;
	}
	while (days >= 7){
		days -= 7;
		weeks += 1;
	}
	if (days < 7){
		days_left = days;
	}
	printf("Number Of Years : %d", years);
	printf("\nNumber Of Weeks : %d", weeks);
	printf("\nNumber Of Days : %d", days_left);
	return 0;
} */