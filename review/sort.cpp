#include<iostream>
using namespace std;

static int arr[] = {100, 10, 5, 20, 3, 0, 1};
static int arr2[] = { 1,2,3,4,5,6,7 };
static int arr1[7];
void bubble(int *a, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (a[j] > a[j+1]) {
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

void select(int *a, int size) {
	for (int i = 0; i < size - 1; i++) {
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}

void insert(int *a, int size) {
	int j;
	for (int i = 0; i < size; i++) {
		int tmp = a[i];
		for (j = i; j > 0 && tmp < a[j - 1]; j--) {
			a[j] = a[j - 1];
		}
		a[j] = tmp;
	}
}

void quick(int *a, int size, int left, int right) {
	int i = left;
	int j = right;
	int pivot = a[(left + right) / 2];
	while (i <= j) {
		while (a[i] < pivot) {
			i++;
		}
		while (a[j] > pivot) {
			j--;
		}
		if (i <= j) {
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	if (left < j) {
		quick(a, size, left, j);
	}
	if (right > i) {
		quick(a, size, i, right);
	}
}

void merge(int *a, int *aa, int size, int left, int middle, int right) {
	int i = left;
	int j = middle + 1;
	int k = 0;
	while (i <= middle && j <= right) {
		if (a[i] <= a[j]) {
			aa[k] = a[i];
			i++;
			k++;
		}
		else {
			aa[k] = a[j];
			j++;
			k++;
		}
	}
	while (i <= middle) {
		aa[k] = a[i];
		k++;
		i++;
	}
	while (j <= right) {
		aa[k] = a[j];
		k++;
		j++;
	}
	for (int x = 0; x < k; x++) {
		a[left] = aa[x];
		left++;
	}
	//for (int i = 0; i < 7; i++) {
	//	cout << a[i] << " ";
	//}
	//cout << endl;
}

void separate(int *a, int *aa, int size, int left, int right) {
	if (left < right) {
		int middle = (left + right) / 2;
		separate(a, aa, size, left, middle);
		separate(a, aa, size, middle + 1, right);
		merge(a, aa, size, left, middle, right);
	}
}

int binarySearch(int *a, int target, int size) {
	int i = 0;
	int j = size - 1;
	

	while (i <= j) {
		int middle = (i + j) / 2;
		if (a[middle] == target) return middle;
		else if (a[middle] > target) j = middle - 1;
		else i = middle + 1;
	}

	return -1;//not found
}

int main() {

	//bubble(arr, 6);
	//select(arr, 6);
	//insert(arr, 7);
	//quick(arr, 7, 0, 6);
	
	//separate(arr, arr1, 7, 0, 6);
	//for (int i = 0; i < 7; i++) {
	//	cout << arr1[i] << " ";
	//}
	//cout << endl;
	cout << binarySearch(arr2, 0, 7) << endl;
	system("pause");
	return 0;
}