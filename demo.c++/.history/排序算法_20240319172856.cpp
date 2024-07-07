#include <iostream>
using namespace std;
//��������
void InsertSort(int *arr, int n);
//ð������
void BubbleSort(int *arr, int n);
//ϣ������
void ShellSort(int *arr, int n);
//ѡ������
void swap(int *a, int *b);
//��������   hoare�汾(����ָ�뷨)
void QuickSort(int *arr, int begin, int end);
//��������  �ڿӷ�
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
//��������
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
//ð������
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
//ϣ������
void ShellSort(int *arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//ÿ�ζ�gap�۰����
		gap = gap / 2;
		//��������
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
//ѡ������
void swap(int *a, int *b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}
void SelectSort(int *arr, int n)
{
	//������뵥������ĵ�һ���������һ�������±�
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		//�������ֵ���±�
		int maxi = begin;
		//������Сֵ���±�
		int mini = begin;
		//�ҳ����ֵ����Сֵ���±�
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
		//��Сֵ�������п�ͷ
		swap(&arr[mini], &arr[begin]);
		//��ֹ��������beginλ�ñ�����
		if (begin == maxi)
		{
			maxi = mini;
		}
		//���ֵ�������н�β
		swap(&arr[maxi], &arr[end]);
		++begin;
		--end;
	}
}
//��������   hoare�汾(����ָ�뷨)
void QuickSort(int *arr, int begin, int end)
{
	//ֻ��һ���������䲻����
	if (begin >= end)
		return;
	int left = begin;
	int right = end;
	//ѡ���Ϊkey
	int keyi = begin;
	while (begin < end)
	{
		//�ұ�ѡС   �Ⱥŷ�ֹ��keyֵ���    ��ֹ˳��begin��endԽ��
		while (arr[end] >= arr[keyi] && begin < end)
		{
			--end;
		}
		//���ѡ��
		while (arr[begin] <= arr[keyi] && begin < end)
		{
			++begin;
		}
		//С�Ļ����ұߣ���Ļ������
		swap(&arr[begin], &arr[end]);
	}
	swap(&arr[keyi], &arr[end]);
	keyi = end;
	//[left,keyi-1]keyi[keyi+1,right]
	QuickSort(arr, left, keyi - 1);
	QuickSort(arr, keyi + 1, right);
}
//��������  �ڿӷ�
void QuickSort1(int *arr, int begin, int end)
{
	if (begin >= end)
		return;
	int left = begin, right = end;
	int key = arr[begin];
	while (begin < end)
	{
		//��С
		while (arr[end] >= key && begin < end)
		{
			--end;
		}
		//С�ķŵ���ߵĿ���
		arr[begin] = arr[end];
		//�Ҵ�
		while (arr[begin] <= key && begin < end)
		{
			++begin;
		}
		//��ķŵ��ұߵĿ���
		arr[end] = arr[begin];
	}
	arr[begin] = key;
	int keyi = begin;
	//[left,keyi-1]keyi[keyi+1,right]
	QuickSort1(arr, left, keyi - 1);
	QuickSort1(arr, keyi + 1, right);
}
