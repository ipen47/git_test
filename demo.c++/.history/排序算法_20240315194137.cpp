#include <iostream>
using namespace std;
//≤Â»Î≈≈–Ú
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
//√∞≈›≈≈–Ú
void BubbleSort(int *arr, int n)
{
	int end = n;
	while (end)
	{
		int flag = 0;
		for (int i; i < end; i++)
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
	cout << "please ouput arr2 of InsertSort: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << " ";
	}
	return 0;
}