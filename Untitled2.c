#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, sum;
	
	printf("enter the first num:");
	
	scanmf("%d",&i);
	
	printf("enter second num:");
	
	scanf("%d",&j);
	
	sum=i+j;
	
	printf("the sum is:",&sum);
	
	return 0;
}
