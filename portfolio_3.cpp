#include <stdio.h>
int price, money;

void change() {
	int a;
	a = money - price;
	price = a;
}

int main (void) {
    printf ("받은 돈의 금액을 입력하세요. : ");
	scanf ("%d", &money); 
	printf ("구매하신 상품의 총 금액을 입력하세요. : ");
	scanf ("%d", &price);
	change();
	printf ("거스름 돈은 %d(원)입니다.", price);
	return 0;
}
