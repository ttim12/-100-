//利用int的字符编码219为白色的色块来解决
#include <stdio.h>
int main() {
	system("chcp 437");//显示扩展的ASCII码----437 OEM-美国
	for (int i = 0; i < 8; i++) {
		for(int j=0;j<4;j++){
			if (i % 2 == 0) {
				printf("%c%c  ", 219, 219);
			}else 
				printf("  %c%c", 219, 219);
		}
		printf("\n");
	}


	return 0;
}