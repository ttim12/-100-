#include<stdio.h>
int main() {
	int score;char result;
	printf("请输入成绩：");
	scanf_s("%d", &score);
	result = (score >= 90) ? 65 : (score >= 60 ? 66 : 67);
	printf("%c", result);


	return 0;
}
