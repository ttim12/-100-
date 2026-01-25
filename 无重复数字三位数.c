题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。



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
