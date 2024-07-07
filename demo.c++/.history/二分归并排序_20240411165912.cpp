#include <iostream>
using namespace std;
//�鲢����
void merge(int *R, int low, int high)
{
    int mid = (low + high) / 2;
    //��Ҫ����һ����������飬��ʱ��Ź鲢�Ľ��
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

    //��Ҫ����ʱ���������Ԫ�����·Ż�Ŀ������
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
