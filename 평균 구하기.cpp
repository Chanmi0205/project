#include <stdio.h>
int a, number, integer, sum;
int subject[] = {0, };
 
int main (void) {
	printf ("총 몇 과목입니까? : ");
	scanf ("%d", &number);
	
	if ( number > 0 ) {
	printf ("각각의 과목의 점수를 입력하세요. : ");
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
    
    printf ("잘못된 입력입니다.");
    return 0;
}
