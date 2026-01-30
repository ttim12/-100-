#include <stdio.h>
int main() {
	int a, b = 1;
	for (int i = 101; i < 200; i++) {
		b = 1;
		for (a = 2; a < (i / 2); a++) {
			if (i % a == 0) {
				b = 0;
				break;
			}
		}
		if (b == 1) { printf("%d\n", i); }
	}

	return 0;
}