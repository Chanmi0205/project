#include <stdio.h>
int price, money;

void change() {
	int a;
	a = money - price;
	price = a;
}

int main (void) {
    printf ("���� ���� �ݾ��� �Է��ϼ���. : ");
	scanf ("%d", &money); 
	printf ("�����Ͻ� ��ǰ�� �� �ݾ��� �Է��ϼ���. : ");
	scanf ("%d", &price);
	change();
	printf ("�Ž��� ���� %d(��)�Դϴ�.", price);
	return 0;
}
