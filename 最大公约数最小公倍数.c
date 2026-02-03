//#include<stdio.h>
//int main()
//{
//    int a, b, t, r, n;
//    printf("请输入两个数字：\n");
//    scanf_s("%d %d", &a, &b);
//    if (a < b)
//    {
//        t = b; b = a; a = t;
//    }
//    r = a % b;
//    n = a * b;
//    while (r != 0)
//    {
//        a = b;
//        b = r;
//        r = a % b;
//    }
//    printf("这两个数的最大公约数是%d，最小公倍数是%d\n", b, n / b);
//
//    return 0;
//}
//
//
//
//
//




#include <stdio.h>
int main() {
	int a, b;
	int x = 1, y = 0;
	printf("请输入2个数字\n");
	scanf_s("%d %d", &a, &b);
	int temp = a;
	if(a > b) {
		a = b,b = temp;
	}
	for (int i = 1; i < a; i++) {
		if(a%i==0 && b % i == 0) {
			x = i;
		}
	}
	y = (a * b) / x;
	printf("最大公约数是%d\n最小公倍数是%d\n", x, y);
	return 0;
}