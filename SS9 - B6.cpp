#include <stdio.h>

int main()
{
	int t, n;
	int a[100];
	int MAX = -99999, MIN = 99999;
	while(t != 8)
	{
		for (int i = 0; i < 20; i ++)
			printf("=");
		printf("MENU");
		for (int i = 0; i < 20; i ++)
			printf("=");
		printf("\n1. Nhap so phan tu va gia tri cac phan tu.\n");
		printf("2. In ra gia tri cac phan tu.\n");
		printf("3. In ra cac phan tu chan va tinh tong.\n");
		printf("4. In ra gia tri lon nhat va nho nhat trong mang.\n");
		printf("5. In ra cac phan tu la so nguyen to va tinh tong.\n");
		printf("6. Nhap vao mot so va thong ke co bao nhieu phan tu do.\n");
		printf("7. Them mot phan tu vao vi tri chi dinh.\n");
		printf("8. Thoat.\n");
		for (int i = 0; i < 44; i ++)
			printf("=");
		printf("\nHay lua chon MENU: ");
		scanf("%d", &t);
		if (t == 1)
		{
			printf("Nhap vao so phan tu: ");
			scanf("%d", &n);
			printf("Nhap vao cac gia tri: ");
			for (int i = 0; i < n; i ++)
			{
				scanf("%d", &a[i]);
				if (a[i] > MAX)
					MAX = a[i];
				if (a[i] < MIN)
					MIN = a[i];
			}
			printf("\n");
		}
		if (t == 2)
		{
			printf("Gia tri cua cac phan tu la: ");
			for (int i = 0; i < n; i ++)
			{
				printf("%d ", a[i]);
			}
			printf("\n");
		}
		if (t == 3)
		{
			int sum = 0;
			printf("Cac phan tu chan la: ");
			for (int i = 0; i < n; i ++)
			{
				if (a[i] % 2 == 0)
				{
					printf("%d ", a[i]);
					sum += a[i];
				}
			}
			printf("\nTong cua chung la: %d", sum);
			printf("\n");
		}
		if (t == 4)
		{
			printf("Phan tu lon nhat trong mang la: %d \nPhan tu nho nhat trong mang la: %d\n", MAX, MIN);
		}
		if (t == 5)
		{
			int sum = 0;
			printf("Cac phan tu la so nguyen to trong mang la: ");
			for (int i = 0; i < n; i ++)
			{
				int check = 1;
				for (int j = 2; j <= a[i] / 2; j ++)
				{
					if (a[i] % j == 0)
					{
						check = 0;
						break;
					}
				}
				if (check == 1)
				{
					printf("%d ", a[i]);
					sum += a[i];
				}
			}
			printf("\nTong cua chung la: %d", sum);
			printf("\n");
		}
		if (t == 6)
		{
			int k;
			printf("Nhap vao mot so: ");
			scanf("%d", &k);
			int count = 0;
			for (int i = 0; i < n; i ++)
			{
				if (a[i] == k)
					count ++;
			}
			printf("So luong so do trong mang la: ");
			printf("%d", count);
			printf("\n");
		}
		if (t == 7)
		{
			int k, vi_tri;
			printf("Xin hay nhap mot so: ");
			scanf("%d", &k);
			printf("Xin hay nhap vi tri muon chen: ");
			scanf("%d", &vi_tri);
			for (int i = n; i >= vi_tri; i --)
			{
				a[i] = a[i - 1];
			}
			a[vi_tri - 1] = k;
			printf("Mang sau khi da chen la: ");
			for (int i = 0; i < n; i ++)
				printf("%d ", a[i]);
			printf("\n");
		}
	}
	return 0;
}
