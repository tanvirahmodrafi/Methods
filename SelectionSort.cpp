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

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] >= arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
			
		}
	}
	cout<<"The sortedn array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}