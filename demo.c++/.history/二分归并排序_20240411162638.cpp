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
            arr[i]=temp[]
        }
}
int main()
{

    return 0;
}
