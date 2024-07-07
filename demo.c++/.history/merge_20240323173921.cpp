
//合并两个有序数组
#include <iostream>
using namespace std;

// void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// {
// 	for (int i = 0; i != n; ++i)
// 	{
// 		nums1[m + i] = nums2[i];
// 	}
// 	sort(nums1.begin(), nums1.end());
// }
void merge1(int *nums1, int m, int *nums2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int dst = m + n - 1;
    // nums2 先走完的情况
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[dst--] = nums1[i--];
        }
        else
        {
            nums1[dst--] = nums2[j--];
        }
    }
    // nums1 先走完的情况
    while (j >= 0)
    {
        nums1[dst--] = nums2[j--];
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    int arr1[m + n], arr2[n];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }
    merge1(arr1, m, arr2, n);
    for (int i = 0; i < m + n; i++)
    {
        cout << arr1[i] << ",";
    }
    return 0;
}