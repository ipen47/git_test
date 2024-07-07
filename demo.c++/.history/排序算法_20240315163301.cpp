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

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	InsertSort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}