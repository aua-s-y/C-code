#include <stdio.h>


void bubble_sort(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//����������ģ�flag���ж��Ƿ���Ҫִ��forѭ��
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (*(arr+j) > *(arr+j + 1))
			{
				int tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
				flag = 0;//��������
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
void print_arr(int arr[], int sz) //��ӡ
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}