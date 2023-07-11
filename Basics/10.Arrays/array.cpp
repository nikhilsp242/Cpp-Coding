#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int n;
	cout << "Enter the size of array : ";
	cin >> n;
	int* arr = new int[n];  // Dynamically allocate memory for the array 
	//taking input from user
	for (int i = 0; i < n; i++) {
		cout << "Enter element " << i+1 << " : ";
		cin >> arr[i];
	}
	//printing the array
	cout << endl << "Array : ";
	for (int i = 0; i < n; i++) {
		cout << "|" << i;
	}
	cout << "|" << endl;
	int maxValue = arr[0], minValue = arr[0];
	for (int i = 0; i < n; i++) {
		maxValue = max(maxValue, arr[i]);
		minValue = min(minValue, arr[i]);
	}
	cout << "Max value : " << maxValue << endl;
	cout << "Min value : " << minValue << endl;
	delete[] arr;  // Deallocate the memory allocated for the array

	cout << endl << "Enter any key to exit" ;
    _getch();
	
	return 0;
}
