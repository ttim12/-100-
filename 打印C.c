#include <stdio.h>
int main() {
	int a = 0;
	for (a; a < 6; a++) {
		if (a % 5 == 0) {
			printf("*********\n");
		}
		else {
			printf("*\n");
		}
	}
	return 0;
}