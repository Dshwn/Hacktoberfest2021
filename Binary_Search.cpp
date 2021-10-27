#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(void)
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to be searched: ";
    int x;
    cin >> x;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element not present"
        : cout << "Element found at index " << result;
    return 0;
}
// Time complexity : O(log n);
