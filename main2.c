#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
// An array storing different ages
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

int i;

// Get the length of the array
int length = sizeof(ages) / sizeof(ages[0]);

// Create a variable and assign the first array element of ages to it
int lowestAge = ages[0];

// Loop through the elements of the ages array to find the lowest age
for (i = 0; i < length; i++) {
  if (lowestAge > ages[i]) {
    lowestAge = ages[i];
  }
}
	return 0;
}

