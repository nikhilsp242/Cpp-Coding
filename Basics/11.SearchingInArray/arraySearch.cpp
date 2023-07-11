#include<iostream>
#include<ctime>
#include <iomanip> //to get more precise time
#include<conio.h>
using namespace std;

int linearSearch(int arr[], int n, int k) {  //O(n)
	for (int i = 0; i < n; i++) {
		if (arr[i] == k)
			return i;
	}
	return -1;
}

//selection sort
void sortArray(int arr[],int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n ; j++) {
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
}

int binarySearch(int arr[], int n, int k) {   // O(log(n))
	int s = 0;
	int e = n;
	while (s <= e) {
		int mid = (s + e) / 2;

		if (k == arr[mid])
			return mid;
		else if (k < arr[mid])
			e = mid - 1;
		else
			s = mid + 1;
	}
	return -1;
}

int main() {
	int n;
	cout << "Enter the size of array : ";
	cin >> n;
	//int arr[n];
	int* arr = new int[n];  // Dynamically allocate memory for the array // from chatgpt
	//taking input from user
	for (int i = 0; i < n; i++) {
		 arr[i] = rand() % 100;
	}
	//printing the array
	cout << endl << "Array : ";
	for (int i = 0; i < n; i++) {
		cout << "|" << arr[i];
	}
	cout << "|" << endl;
	int k;
	cout << endl << "Which element do you want to search : ";
	cin >> k;

	cout << endl << "1.Linear Search" << endl;
	clock_t s1 = clock();
	int ind = linearSearch(arr, n, k);
	clock_t e1 = clock();
	if (ind == -1)
		cout << "Element not found :(" << endl;
	else
		cout << "Element found at index " << ind << endl;
	double rt1 = double(e1 - s1) / CLOCKS_PER_SEC;
	cout << fixed << setprecision(6);
	cout << "Search Time : " << rt1 << " seconds" << endl;
	
	clock_t s3 = clock();
	sortArray(arr, n);
	clock_t e3 = clock();
	

	cout << endl << "2.Binary Search" << endl;
	cout << "Sorted array : ";
	for (int i = 0; i < n; i++) {
		cout << "|" << arr[i];
	}
	cout << "|" << endl;
	double rt3 = double(e3 - s3) / CLOCKS_PER_SEC;

	clock_t s2 = clock();
	int index = binarySearch(arr, n, k);
	clock_t e2 = clock();
	if (index == -1)
		cout << "Element not found :(" << endl;
	else
		cout << "Element found at index " << index << endl;
	double rt2 = double(e2 - s2) / CLOCKS_PER_SEC;
	cout << fixed << setprecision(6);
	cout << "Search Time : " << rt2 << " seconds" << endl;
	cout << "Sort Time : " << rt3 << " seconds" << endl;

	cout << endl << "Press any key to exit" ;
    _getch();

	delete[] arr;

	return 0;
}