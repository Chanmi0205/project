#include <stdio.h>
int number1, number2, number3, number4;
 
void addition() {  //덧셈 
	number3 = number1 + number2; 
}

void subtraction() { //뺄셈 
	number3 = number1 - number2;	
}

void multiplication() {  //곱셈 
	number3 = number1 * number2;	
}

void division() {  //나눗셈 
	number3 = number1 / number2;
	number4 = number1 % number2;	
}

int main(void) {
	
	printf ("계산 방법과 수를 입력하세요. \n1.곱셈 2.뺄셈 3.곱셈 4.나눗셈 \n : ");
	
	int number;
	scanf ("%d", &number);
	
	if ( number == 1 ) {
		printf ("더할 수를 입력하세요 : ");
		scanf ("%d %d", &number1, &number2);
		addition();
	printf ("결과값 : %d", number3); 		
    }
    
	else if ( number == 2 ) {
		printf ("뺄 수를 입력하세요 : ");
		scanf ("%d %d", &number1, &number2);
		subtraction();
	printf ("결과값 : %d", number3); 		
    }
    
    else if ( number == 3 ) {
		printf ("곱할 수를 입력하세요 : ");
		scanf ("%d %d", &number1, &number2);
		multiplication();
	printf ("결과값 : %d", number3); 		
    }
    
    else if ( number == 4 ) {
		printf ("나눌 수를 입력하세요 : ");
		scanf ("%d %d", &number1, &number2);
		division();
	printf ("결과값 : %d.%d", number3, number4); 		
    }
    
    else 
	printf ("잘못된 입력값입니다."); 

	return 0;
}
	 
