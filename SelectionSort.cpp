#include <iostream>
#include <cmath>

using namespace std;

int n,temp;

int main()
{
	cout << "Enter the size of the array"<<'\n';
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the array"<<'\n';
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n - 1; i++)//{1,4,5,8} just taking 1 to 5;
	{
		for (int j = i + 1; j < n; j++)//{1,4,5,8} compareing with 4 to 8
		{
			if (arr[i] >= arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];//swaping with the bigger values
				arr[i] = temp;
			}
			
		}
	}
	cout<<"The sorted array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}