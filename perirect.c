// C Program To Find The Perimenter Of Rectangle Of Given Length And Breadth

#include <stdio.h>

int main(){
	int length, breadth;
	printf("Enter The Length Of The Rectangle : ");
	scanf("%d", &length);
	printf("Enter The Breadth Of Rectangle : ");
	scanf("%d", &breadth);
	printf("Perimeter Of Rectangle With Length %d and Breadth %d Is : %d", length, breadth, 2 * (length + breadth));
	return 0;
}
