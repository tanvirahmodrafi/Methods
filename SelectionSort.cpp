#include <bits/stdc++.h>

using namespace std;

int n, temp;

int main()
{
	cout << "Enter the size of the array" << '\n';
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the array" << '\n';
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
	cout << "The sorted array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}

//      4, 6, 1, 3, 7

//      1, 6, 4, 3, 7

//      1, 3, 4, 6, 7