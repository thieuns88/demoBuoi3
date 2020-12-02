#include <stdio.h>
#include <stdlib.h>
#include "tinhtoan.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=100, b=7;
	printf("\nTong 2 so: %d",tong(a,b));
	printf("\nHieu 2 so: %d",hieu(a,b));
	printf("\nTich 2 so: %d",tich(a,b));
	printf("\nThuong 2 so: %0.2f",thuong(a,b));
	return 0;
}
