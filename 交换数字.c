#include <stdio.h>
int main() {
	int x, y, z;
	printf("请输入三个数字");
	scanf_s("%d %d %d", &x, &y, &z);
	void change(int *a, int *b);
	if (x > y) {
		change(&x, &y);
	}	
	if (x > z) {
		change(&x, &z);
	}
	if(y>z){
		change(&y, &z);
	}
	printf("排序后：%d %d %d\n", x, y, z);
	return 0;
}
void change(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}