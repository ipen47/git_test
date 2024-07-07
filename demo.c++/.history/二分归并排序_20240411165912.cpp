#include <iostream>
using namespace std;
//归并函数
void merge(int *R, int low, int high)
{
    int mid = (low + high) / 2;
    //需要定义一个额外的数组，临时存放归并的结果
    int maxSize = high - low + 1;
    int temp[maxSize];
    int k = 0;
    int i = low;
    int j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (R[i] < R[j])
            temp[k++] = R[i++];
        else
            temp[k++] = R[j++];
    }
    while (i <= mid)
        temp[k++] = R[i++];
    while (j <= high)
        temp[k++] = R[j++];

    //需要把临时数组里面的元素重新放回目标数组
    for (int i = low, j = 0; i <= high && j < k; ++i, ++j)
        R[i] = temp[j];
}
void mergeSort(int *R, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(R, low, mid);
    mergeSort(R, mid + 1, high);
    merge(R, low, high);
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
