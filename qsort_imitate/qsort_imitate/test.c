#include<stdio.h>


void swap(char* buf1,char* buf2,size_t x)
{
	int i = 0;
	for(i = 0;i < x;i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void qsort_li(void* base,size_t sz,size_t x,int (*cmp)(const void* p1, const void* p2))//不知道比较的类型，所以只能用const
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int j;
		for(j=0; j <sz - 1- i;j++)
			if (cmp((char*)base +j*x , (char*)base +(j+1)*x)>0)
			{
				swap((char*)base + j * x, (char*)base + (j + 1) * x, x);
			}
	}

}
int cmp_int(const void* p1 ,const void* p2)
{
	return (*(int*)p1 > *(int*)p2) - (*(int*)p1 < *(int*)p2);
}

int main()
{
	int arr[10] = { 9,8,6,5,7,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort_li(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d", arr[i]);
	}
	
	return 0;
}