#include <stdio.h>
int main() {
	int a, n,sum=0;
	scanf_s("%d%d", &a, &n);
	for(;n>0;n--) {
		sum += a;
		a = ((a * 10) + (a%10));
		printf("%d\n", a);	
	}
	printf("%d\n", sum);
	return 0;
}
