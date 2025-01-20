#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*this program  ask user to ente two numbers and entering the operator then it displaying solution using switch case*/
	double num1, num2,results;
	char operation;
	printf("plz enter first number:\n");
	scanf("%lf",&num1);
	
	printf("plz enter second number:\n");
	scanf("%lf",&num2);
	
	printf(" plz enter the operation li '+','-','/','*'\n");
	scanf(" %c",&operation);
	
	switch(operation){
		case '+':
			results = num1+num2;
			printf("the numberof %lf and %lf equal to %lf",num1,num2,results);
			break;
			case '-':
			results = num1-num2;
			printf("the number %lf-%lf=%lf",num1,num2,results);
			break;
			case'*':
			results =num1*num2;
			printf("numeber %lf *%lf=%lf",num1,num2,results);
			break;
			case'/':
			results =num1/num2;
			printf("the number%lf/%lf=%lf",num1,num2,results);
			break;
			default:
			printf("envalid");
			break;
						
	}
	return 0;
}
