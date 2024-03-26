/*#include <stdio.h>


int FIB(int n)
{
	if (n <= 2)
	
		return 1;
	else
		return FIB(n - 1) + FIB(n - 2);
	

}


int main()
{
	int n = 0;
	int r;
	scanf_s("%d", &n);
	r = FIB(n);
	printf("%d\n", r);
	return 0;

}
     */     
//
//#include <stdio.h>
//
//int main()
//{
//
//	int n;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	scanf_s("%d",&n);
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	
//	printf("%d", c);
//
//
//	return 0;
//}


//迭代的方式效率更高，注意int溢出
//
// 
// 
// 

#include <stdio.h>

int qingwa(int n)
{
	if (n <= 2)
		return n;
	else
		return qingwa(n - 1) + qingwa(n - 2);

}
	

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int s;
	s = qingwa(n);
	
	printf("%d", s);


	return 0;
}

//------------------------------------------------------------------------------------------------
//#include <stdio.h>
//
//int qingwa_tail(int n, int a, int b) {
//    if (n <= 0)
//        return a;
//    else
//        return qingwa_tail(n - 1, b, a + b);
//}
//
//int qingwa(int n) {
//    return qingwa_tail(n, 1, 1);
//}
//
//int main() {
//    int n = 0;
//    scanf_s("%d", &n);
//    int s;
//    s = qingwa(n);
//
//    printf("%d", s);
//    return 0;
//}
//////尾递归优化 



//#include <stdio.h>
//
//
//int FIB(int n)
//{
//	if (n <= 2)
//
//		return 1;
//	else
//		if()
//
//
//}
//
//int FIBS(int b)
//{
//	return FIB(b - 1) + FIB(b - 2);
//}
//	
//	
//
//
//int main()
//{
//	int n = 0;
//	int r;
//	scanf_s("%d", &n);
//	r = FIB(n);
//	printf("%d\n", r);
//	return 0;
//
//}
