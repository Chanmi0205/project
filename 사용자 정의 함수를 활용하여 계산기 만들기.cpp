#include <stdio.h>
int number1, number2, number3, number4;
 
void addition() {  //���� 
	number3 = number1 + number2; 
}

void subtraction() { //���� 
	number3 = number1 - number2;	
}

void multiplication() {  //���� 
	number3 = number1 * number2;	
}

void division() {  //������ 
	number3 = number1 / number2;
	number4 = number1 % number2;	
}

int main(void) {
	
	printf ("��� ����� ���� �Է��ϼ���. \n1.���� 2.���� 3.���� 4.������ \n : ");
	
	int number;
	scanf ("%d", &number);
	
	if ( number == 1 ) {
		printf ("���� ���� �Է��ϼ��� : ");
		scanf ("%d %d", &number1, &number2);
		addition();
	printf ("����� : %d", number3); 		
    }
    
	else if ( number == 2 ) {
		printf ("�� ���� �Է��ϼ��� : ");
		scanf ("%d %d", &number1, &number2);
		subtraction();
	printf ("����� : %d", number3); 		
    }
    
    else if ( number == 3 ) {
		printf ("���� ���� �Է��ϼ��� : ");
		scanf ("%d %d", &number1, &number2);
		multiplication();
	printf ("����� : %d", number3); 		
    }
    
    else if ( number == 4 ) {
		printf ("���� ���� �Է��ϼ��� : ");
		scanf ("%d %d", &number1, &number2);
		division();
	printf ("����� : %d.%d", number3, number4); 		
    }
    
    else 
	printf ("�߸��� �Է°��Դϴ�."); 

	return 0;
}
	 
