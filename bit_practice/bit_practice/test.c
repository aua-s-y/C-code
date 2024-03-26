#include<stdio.h>
//
// 
// print 1~100的奇数
// 
//add(void)
//{
//
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//		if (i % 2 == 1)
//			printf("%d ", i);
//			return 0;
//};
//
//
//int main()
//{
//	add();
//
//	return 0;
//}

//
// 
// 99乘法表
// 
//int main()
//{
//	int i;
//	int f;
//
//	for (i = 1;i <= 9; i++)
//	{
//		for (f = 1; f <= i; f++)
//		{
//			printf("%d * %d = %d ", f, i, f * i);
//	
//		}
//
//	printf("\n");
//
//	}
//		
//	return 0;
//}


//打印100~200的素数
//int main() 
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//				//拿2~i—1的数字去试除  2是因为素数能被一整除 i-1是为了避开i本身。只要能被这其中的数字整除，就不是素数。
//		int j = 0;
//		int flag = 1;//用0和1标记i是不是素数。i是素数为1，不是为0
//		
//		for (j = 2;j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数，标记为0
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			printf("%d ",i);
//			count++;
//		}
//
//
//	}
//	printf("\n%d",count);//统计素数各数
//	
//	return 0; 
//}

//优化1
//#include<math.h>
//aqrt 开平方
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		
//		int j = 0;
//		int flag = 1;
//
//		for (j = 2;j <= sqrt(i); j++)//假设 m = a * b   那么，a和b中肯定有一个是 <= sqrt(m) ps;因为a*b=m，m必然可以被a或者b整除
//									 //比如 16=2*8 或者 4*4 那么只需要便利到4以内 就可以知道有没有数可以将它整除
//									
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//
//	}
//	printf("\n%d", count);
//
//	return 0;
//}


////优化2
//#include<math.h>
////aqrt 开平方
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//偶数是必然能被2整除的，所以偶数不需要被考虑
//	//101->跳过100  i+=2 -> i+2=i  两个一跳，刚好跳过了偶数 101 -> 103 -> 105 -> 107 ...... 
//	//两次优化后，计算量只有原来的4分之1
//
//	for (i = 101;i <= 200;i+=2)
//	{
//
//		int j = 0;
//		int flag = 1;
//
//		for (j = 2;j <= sqrt(i); j++)
//			
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//
//	}
//	printf("\n%d", count);
//
//	return 0;
//}




 

////  查验一个三角形的种类
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf_s("%d %d %d",&a,&b,&c);
//
//	if (a + b > c && b + c > a && a + c > b)
//	{
//		if (a == b && b == c)
//			printf("是等边三角形捏");
//		else if (a == b || b == c || c == a)
//			printf("是等腰三角形捏");
//		else 
//			printf("是普通的三角形捏");
//	}
//
//	else
//		printf("不是三角形捏");
//
//
//	return 0;
//}


//最大公约数 解法1

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int k = 0;
//	scanf_s("%d %d",&a,&b);
//	k = (a > b ? a : b);       //三目运算符
//	while (1) 
//	{
//		if (a % k==0 && b % k==0)
//		{
//			break;
//		}
//		k--;
//	}
//	printf("%d",k);
//	return 0;
//}
//

//
////最大公约数 解法2
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d %d",&m,&n);
//	//辗转相除法
//	int k = 0; 
//
//	while (k = m % n)
//	{
//		m = n;
//		n = k;
//
//	}
//	printf("%d\n",n);
//	return 0;
//}
//	



////最大公约数 解法3(递归)
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf_s("%d %d",&x,&y);
//	int a = gcd(x,y);
//	printf("%d", a);
//	return 0;
//}
//
//int gcd(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//		
//	return gcd(b, a % b);
//}
//


//最小公倍数 解法1
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d",&a,&b);
//	int k = (a > b ? a : b);
//	int s = 1;
//	while (s)
//	{
//		if (k % a == 0 && k % b == 0)
//		{
//			printf("%d", k);
//			s = 0;
//			//s代替了break
//		}
//		k++;
//	}
//		
//	return 0;
//}

//
////最小公倍数 解法2  
//// 
////最⼩公倍数可以由两数乘积除以两数的最⼤公约数求得
//
//int main()
//{
//	int a = 0;  
//	int b = 0;
//	scanf_s("%d %d",&a,&b);
//	int k = a * b;
//	int n = 0;
//	while (n = a % b)
//	{
//		a = b;
//		b = n;
//	}
//		
//	printf("%d\n",k/b);
//
//	return 0;
//}


