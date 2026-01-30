#include <stdio.h>
int main() {
	int month[41] = {0};
	month[0] = 1, month[1] = 1;
	for (int i=2;i<41; i++) {
		month[i] = (month[i - 2] + month[i - 1]);
	}
	for (int j=0;j<41; j++) {
		printf("第%d个月   有%d对    %d只\n", j, month[j],month[j]*2);
	}
	return 0;
}
