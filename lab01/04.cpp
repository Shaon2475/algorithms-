#include <iostream>
using namespace std;


void Sum(int arr[], int n)
{
	int even = 0;
	int odd = 0;
	for (int i = 0; i < n; i++) {

		if (arr[i] % 2 == 0) {
            cout<<"Even number : "<<arr[i]<<endl;
			even += arr[i]; }
		else{
		cout<<"Odd number : "<<arr[i]<<endl;
			odd += arr[i]; }
	}

	cout << "Even index positions sum " << even;
	cout << "\nOdd index positions sum " << odd;
}


int main()
{
	int arr[] = { 23, 62, 34, 94, 15, 63 };
	int n =6;


	Sum(arr, n);

	return 0;
}
