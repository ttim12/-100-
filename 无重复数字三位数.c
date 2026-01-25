#include <stdio.h>	
int main() {
	int num[4] = { 1,2,3,4 };
	int one[3] = { 0 };
	int number = 0,a=0,cnt=0;
	for (int a1 = 0; a1 < 4; a1++) {
		for (int a2 = 0; a2 < 4; a2++) {
			for (int a3 = 0; a3 < 4; a3++){
				number = num[a1] * 100 + num[a2] * 10 + num[a3];
				one[0] = number / 100;
				one[1] = number / 10 % 10;
				one[2] = number % 10;
				if(one[0]!= one[1] && one[0] != one[2] && one[1] != one[2]) {
					printf("%d ", number);
					cnt++;
					if (cnt%5==0) { printf("\n"); }
				}
			}
		}
	}
	printf("\n有%d个",cnt);
	return 0;
}