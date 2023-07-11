#include<iostream>
#include<ctime>
#include <iomanip> //to get more precise time
#include<conio.h>

using namespace std;

void selectionSort(int arr[], int n) {           //O(n^2)
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
}

void bubbleSort(int arr[], int n) {
	int count = 1;
	while (count < n) {
		for (int i = 0; i < n - count; i++) {
			if (arr[i] > arr[i + 1])
				swap(arr[i], arr[i + 1]);
		}
		count++;
	}
}

void insertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int current = a[i];
		int j = i - 1;
		while (a[j] > current && j >= 0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = current;
	}
}

int main() {
	int n;
	cout << "Enter the size of array : ";
	cin >> n;
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
	
	cout << endl << "Press any key to continue" << endl;
    _getch();

	cout << endl << "-->Selection Sort" << endl;
	clock_t s1 = clock();
	selectionSort(arr, n);
	cout << "Sorted array : ";
	for (int i = 0; i < n; i++) {
		cout << "|" << arr[i];
	}
	cout << "|" << endl;
	clock_t e1 = clock();
	double rt1 = double(e1 - s1) / CLOCKS_PER_SEC;
	cout << fixed << setprecision(6);
	cout << "Elapsed time : " << rt1 << " seconds" << endl;

	cout << endl << "Press any key to continue" << endl;
    _getch();
	

	cout << endl << "-->Bubble Sort" << endl;
	clock_t s2 = clock();
	bubbleSort(arr, n);
	cout << "Sorted array : ";
	for (int i = 0; i < n; i++) {
		cout << "|" << arr[i];
	}
	cout << "|" << endl;
	clock_t e2 = clock();
	double rt2 = double(e2 - s2) / CLOCKS_PER_SEC;
	cout << fixed << setprecision(6);
	cout << "Elapsed time : " << rt2 << " seconds" << endl;

	cout << endl << "Press any key to continue" << endl;
    _getch();

	cout << endl << "-->Insertion Sort" << endl;
	clock_t s3 = clock();
	insertionSort(arr, n);
	cout << "Sorted array : ";
	for (int i = 0; i < n; i++) {
		cout << "|" << arr[i];
	}
	cout << "|" << endl;
	clock_t e3 = clock();
	double rt3 = double(e3 - s3) / CLOCKS_PER_SEC;
	cout << fixed << setprecision(6);
	cout << "Elapsed time : " << rt3 << " seconds" << endl;

	cout << endl << "Press any key to exit" ;
    _getch();

	delete[] arr;

	return 0;
}