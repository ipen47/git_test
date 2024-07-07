#include <iostream>
using namespace std;
void merge(int *arr, int l,  int r)
{
    int i = l;
    m
    int j = mid + 1;
    int k = l;
    int *temp = new int[r-l+1];

    while (i <= l && j <= r)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= l)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];
    for (int i = 0; i <= r; i++)
    {
        arr[i] = temp[i];
    }
}
void mergeSort(int *R, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(R, low, mid);
    mergeSort(R, mid + 1, high);
    merge(R, low,  high);
}

int main()
{
    int R[] = {49, 36, 24, 65, 97, 6, 25};
    int n = 7;
    mergeSort(R, 0, n - 1);
    for (int i = 0; i < n; ++i)
        cout << R[i] << endl;
    return 0;
}
