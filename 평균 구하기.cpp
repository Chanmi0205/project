#include <stdio.h>
int a, number, integer, sum;
int subject[] = {0, };
 
int main (void) {
	printf ("�� �� �����Դϱ�? : ");
	scanf ("%d", &number);
	
	if ( number > 0 ) {
	printf ("������ ������ ������ �Է��ϼ���. : ");
	for ( a=0; a<number; a++ ) {
		scanf ("%d", &subject[a]);
	}
	for ( a=0; a<number; a++ ) {
		sum = sum + subject[a];
	}
	integer = sum / number;
	
	printf ("%d", integer);
 	return 0;
    }
    
    printf ("�߸��� �Է��Դϴ�.");
    return 0;
}
