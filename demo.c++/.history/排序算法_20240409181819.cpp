#include <iostream>
#
using namespace std;
//插入排序
void InsertSort(int *arr, int n);
//冒泡排序
void BubbleSort(int *arr, int n);
//希尔排序
void ShellSort(int *arr, int n);

void swap(int *a, int *b);
//快速排序
void QuickSort(int *arr, int begin, int end);
//快速排序
void QuickSort1(int *arr, int begin, int end);

int main()
{
	int arr1[5], arr2[5];
	cout << "please input arr1: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}

	cout << "please input arr2: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}
	InsertSort(arr1, 5);
	BubbleSort(arr2, 5);
	cout << "please ouput arr1 of InsertSort: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "please ouput arr2 of BubbleSort: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << " ";
	}
	return 0;
}
//插入排序
void InsertSort(int *arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int temp = arr[i + 1];
		while (end >= 0)
		{
			if (temp < arr[end])
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = temp;
	}
}
//冒泡排序
void BubbleSort(int *arr, int n)
{
	int end = n;
	while (end)
	{
		int flag = 0;
		for (int i = 1; i < end; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		end--;
	}
}
//希尔排序
void ShellSort(int *arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//?????gap?????????
		gap = gap / 2;
		//????????????
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tem = arr[end + gap];
			while (end >= 0)
			{
				if (tem < arr[end])
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = tem;
		}
	}
}
//选择排序
void swap(int *a, int *b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}
void SelectSort(int *arr, int n)
{
	//保存参与单趟排序的第一个和最后一个数的下标
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		//保存最大值的下标
		int maxi = begin;
		//保存最小值的下标
		int mini = begin;
		//找出最大值和最小值的下标
		for (int i = begin; i <= end; ++i)
		{
			if (arr[i] < arr[mini])
			{
				mini = i;
			}
			if (arr[i] > arr[maxi])
			{
				maxi = i;
			}
		}
		//最小值放在序列开头
		swap(&arr[mini], &arr[begin]);
		//防止最大的数在begin位置被换走
		if (begin == maxi)
		{
			maxi = mini;
		}
		//最大值3序列结尾
		swap(&arr[maxi], &arr[end]);
		++begin;
		--end;
	}
}
//快速排序（左右指针法）
void QuickSort(int *arr, int begin, int end)
{
	//只有一个数或区间不存在
	if (begin >= end)
		return;
	int left = begin;
	int right = end;
	//选左边为key
	int keyi = begin;
	while (begin < end)
	{
		//右边选小  等号防止和Key值相等 防止顺序begin和end越界
		while (arr[end] >= arr[keyi] && begin < end)
		{
			--end;

			//左边选大
			while (arr[begin] <= arr[keyi] && begin < end)
			{
				++begin;
			}
			//小的换到右边，大的换到左边
			swap(&arr[begin], &arr[end]);
		}
		swap(&arr[keyi], &arr[end]);
		keyi = end;
		//[left,keyi-1]keyi[keyi+1,right]
		QuickSort(arr, left, keyi - 1);
		QuickSort(arr, keyi + 1, right);
	}
	//快速排序（挖坑法）
	void QuickSort1(int *arr, int begin, int end)
	{
		if (begin >= end)
			return;
		int left = begin, right = end;
		int key = arr[begin];
		while (begin < end)
		{
			//找小
			while (arr[end] >= key && begin < end)
			{
				--end;
			}
			//小的放在左边坑里
			arr[begin] = arr[end];
			//找大
			while (arr[begin] <= key && begin < end)
			{
				++begin;
			}
			//大的放在右边坑里
			arr[end] = arr[begin];
		}
		arr[begin] = key;
		int keyi = begin;
		//[left,keyi-1]keyi[keyi+1,right]
		QuickSort1(arr, left, keyi - 1);
		QuickSort1(arr, keyi + 1, right);
	}
