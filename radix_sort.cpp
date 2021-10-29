/* Author : VANSH KAPILA */
#include <iostream>
const int mod = 1000000007;
using namespace std;

void radixsort(int arr[], int n) {

	int maxx = INT_MIN;
    //maxx denotes the maximum element in the array
	for (int i = 0; i < n; i++)
	{
		maxx = max(arr[i], maxx);
	}

	//Counting Sort Algorithm placewise
	for (int place = 1; maxx / place > 0; place *= 10)
	{
		const int digit = 10;
		//10 is taken because 10 is the number of 
		//possible allocations for any random digit in a number.
		int ans[n];
		int count_track[digit] = {0};
       
		for (int i = 0; i < n; i++)
		{
			count_track[(arr[i] / place) % 10]++;
		}
		//prefix sum upto index i stored in additional memory
		for (int i = 1; i < digit; i++)
		{
			count_track[i] += count_track[i - 1];
		}

		for (int i = n - 1; i >= 0; i--)
		{
			int index = (arr[i] / place) % 10;

			ans[count_track[index] - 1] = arr[i];
			count_track[index]--;
		}
        
        int i = 0;
		while(i<n)
		{
			arr[i] = ans[i];
			i++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
}

int32_t main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	radixsort(arr, n);
}