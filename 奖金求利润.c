#include <stdio.h>
int main() {
int money = 0;
double sum = 0.0;
printf("请输入销售额：");
scanf_s("%d", &money);
if (money <= 100000) {
	sum = money * 0.1;
}
else if (money <= 200000) {
	sum = 10000 + (money - 100000) * 0.075;
}
else if (money <= 400000) {
	sum = 17500 + (money - 200000) * 0.05;
}
else if (money <= 600000) {
	sum = 27500 + (money - 400000) * 0.03;
}
else if (money <= 1000000) {
	sum = 33500 + (money - 600000) * 0.015;
}
else {
	sum = 39500 + (money - 1000000) * 0.01;
}
printf("奖金总额为：%lf\n", sum);
	return 0;
}
//反过来____________________________________________________________
//int main() {
//	float money = 0.0, sum = 0.0;
//	printf("请输入奖金：");
//	scanf_s("%f", &money);
//	if (money < 10000) {
//		sum = money / 0.1;
//	}
//	else if (money < 17500) {
//		sum = 100000 + (money - 10000) / 0.075;
//	}
//	else if (money < 27500) {
//		sum = 200000 + (money - 17500) / 0.05;
//	}
//	else if (money < 33500) {
//		sum = 400000 + (money - 27500) / 0.03;
//	}
//	else if (money < 39500) {
//		sum = 600000 + (money - 33500) / 0.015;
//	}
//	else {
//		sum = 1000000 + (money - 39500) / 0.01;
//	}
//	printf("销售额为：%.0lf\n", sum);
//