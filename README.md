#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calculator( double num1, double num2, double result, char operetor){
	switch(operetor){
	case'+':
		result=num1+num2;
		printf("%lf + %lf = %lf",num1,num2,result);
		break;
		case'-':
			result=num1-num2;
			printf("%lf - %lf = %lf",num1,num2,result);
			break;
			case'*':
				result=num1*num2;
				printf("%lf * %lf = %lf",num1,num2,result);
				break;
			  case '/':
            if (num2 != 0) { // Check for division by zero
                result = num1 / num2; // Assign the result
                printf("%lf / %lf = %lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator! Please use '+', '-', '*', or '/'.\n");
            break;
	}
		}
int main(){
	double num1, num2 ,result = 0;
	char operetor;
	printf("plz enter first number:");
	scanf("%lf", &num1);
		printf("plz enter the operator you want'+','-','*','/'");
		scanf(" %c",&operetor);
	printf("plz enter second number:");
	scanf("%lf",&num2);
	calculator(num1, num2 , result, operetor);
	return 0;
}
