#include <stdio.h>
int main() {
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int year = 0, month1 = 0, day = 0, a,sum=0;
	printf("请输入年 月 日\n");
	scanf_s("%d%d%d", &year, &month1, &day);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		month[1] = 29;
	}
	for (a = 1;a<month1;a++) {
		sum+= month[a - 1];
	}
	printf("这是这一年的第%d天\n", sum + day);
	return 0;
}






//_________________________________________________________________________________________________________________________________________
//错误示例，一开始我不想用数组的方法，想偷懒只用28, 30, 31这3个数字，不过忘了月份的天数没有规律（规律不明显），导致代码错误，逻辑似乎也是比较乱的
//#include <stdio.h>
//int main() {
//	int year, month, day;
//	int a = 0, b = 0, sum = 0;
//	printf("输入年月日");
//	scanf_s("%d%d%d", &year, &month, &day);
//	if (year % 4 == 0&&year%100!=0) {
//		sum += 1;
//	}
//	for (a = 1; a <=month;) {
//		sum += 31;
//		a += 2;		
//		if (month > 3) {
//		for (b = 2; b <= month;) {
//			if (b == 2) { sum += 28; b += 2; break; }
//			sum += 30;
//			b += 2;
//			}
//		}
//	}
//	printf("%d %d", sum, day);
//		printf("这是这一年的第%d天\n", sum+day);
//	return 0;
//}