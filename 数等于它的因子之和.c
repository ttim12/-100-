#include <stdio.h>
int main()  {
	int a = 0,A, b = 0,sum=0;
	for(sum=1;sum<1000;sum++){
		b = 0;
		for (a = 1; a < sum; a++) {
			if (sum % a == 0) {
				b += a;
				A = a;
			}
		}
		if(b==sum){
			printf("%d is a 完数  %d=1",sum,sum);
			b = 0;
			for (a = 2; a < sum; a++) {
				if (sum % a == 0) {
					printf("+%d",a);
					b += a;
					if(A==a){
						printf("\n");
					}
				}
			}
		}
	}
	return 0;
}



// ﻿#include <stdio.h>
// int main()  {
// 	int a = 0, b = 0,sum=0;
// 	for(sum=1;sum<1000;sum++){
// 		b = 0;
// 		for (a = 1; a < sum; a++) {
// 			if (sum % a == 0) {
// 				b += a;
// 			}
// 		}
// 		if(b==sum){
// 			printf("%d is a 完数  %d=",sum,sum);
// 			b = 0;
// 			for (a = 1; a < sum; a++) {
// 				if (sum % a == 0) {
// 					printf("%d",a);
// 					b += a;
// 					if (b < sum) {
// 						printf("+");
// 					}
// 					if(b==sum){
// 						printf("\n");
// 					}
// 				}
// 			}
// 		}
// 	}
// 	return 0;

// }
