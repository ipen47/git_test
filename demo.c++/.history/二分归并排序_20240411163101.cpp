#include <iostream>
using namespace std;
void merge(int *arr, int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    int *temp = new int[];
    while (i <= l && j <= r)
    {
        if (arr[i] < arr[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= l)
        temp[k++] = arr[i++];
    while (j<=r)
        temp[k++] = arr[j++];
        for(int i=0;i<=r;i++)
        {
            arr[i]=temp[i];
        }

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
��������������������������������

    ��Ȩ����������Ϊ����ԭ�����£���ѭ CC 4.0 BY -
    SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӻͱ�������

    ԭ�����ӣ�https : // blog.csdn.net/weixin_45482422/article/details/108253383
                      int
                      main()
{

    return 0;
}
