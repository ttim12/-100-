#include <stdio.h>
int main() {
	int a,b,ok=0;
	printf("请输入一个数\n");
	scanf_s("%d", &a);
	b = a;
	printf("%d=",a);
	while (b != 1) {
		if (ok == 1) {
			printf("*");
		}
		for (int i = 2; i <= a; i++) {
			if (b % i == 0) {
				if (i == a) { printf("1*%d", a); b = 1; break; }
				printf("%d", i);
				ok = 1;
				b = b / i;
				break;
			}
			else ok = 0;
		}
	}
	return 0;
}