//简单版计算3位水仙花数
//#include <stdio.h>
//int main() {
//	int number = 100, a, b, c;
//	for (number = 100; number < 1000; number++) {
//		a = number / 100;
//		b = (number / 10) % 10;
//		c = number % 10;
//		if(number == a * a * a + b * b * b + c * c * c) {
//			printf("%d\n", number);
//		}
//	}
//
//	return 0;
//}

//-------------------进阶版无限计算水仙花数-----------------------
#include <stdio.h>
#include <time.h>
int main() {
	long int num, n,sum;
	clock_t prev_time = clock();
	for (num = 1;; num++) {
		sum = 0, n = 0;
		int tempnum = num;
		while (tempnum != 0) {
			tempnum /= 10;
			n++;//求位数n
		}
		int n1 = n, sum0 = num, tempnum1 = num;
		for (; n >0; n--) {
			int one = tempnum1 % 10,sumone=1;
			tempnum1 /= 10;
			for (int i = 0; i < n1; i++) {
				sumone*=one;//个位数的n次方
			}
			sum += sumone;
		}
			if (sum == sum0 && sum0 != 0) {
				//printf("%d  ", sum0);
				clock_t now = clock(); 
				
				double s = (double)(now - prev_time)/ CLOCKS_PER_SEC; 
				printf("%d     总耗时%fs    ",sum0,(double)now / CLOCKS_PER_SEC);
				printf("  (耗时: %lf 秒)\n",  s);
				prev_time = now; 
			}
	}
	return 0;

}