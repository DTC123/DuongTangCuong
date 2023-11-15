#include "Header.h"

int main()
{
	int a[MAX];
	nhap(a, 10);
	//Goi ham tinh tong cac phan tu co trong mang
	cout << "\n Tong la:" << tong(a, 10);
	return 0;
}