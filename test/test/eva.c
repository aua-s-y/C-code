
//
//// 打印二进制的奇数位
//#include <stdio.h>
//int main()
//{
//	int n;
//	int i;
//	scanf_s("%d", &n);
//	for (i = 30;i >= 0; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//	return 0;
//}


// 求两个不同的二进制数中的不同位的个数

#include<stdio.h>
int main()
{
	int m = 2;
	int n = 5;
	int count = 0;
	int ret = n ^ m;
	while (ret != 0)
	{
		ret &= (ret - 1);
		count++;
	}
	printf("%d", count);

	return 0;
}


//#include<stdio.h>
//int main()
//{
//
//
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//
//
//	return 0;
//}