#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap do dai hinh chu nhat la:");
	scanf("%d",&a);
	printf("Nhap do rong hinh chu nhat la:");
	scanf("%d",&b);
	int c = (a + b) * 2;
	int d = a * b;
	printf("Chu vi cua hinh chu nhat la:%d\n",c);
	printf("Dien tich cua hinh chu nhat la:%d",d);
	
}