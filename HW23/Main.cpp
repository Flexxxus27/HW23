#include <iostream>


void three_max(int& num1, int& num2, int& num3);

int& arr_negative(int arr[], const int length);
void print_arr(int arr[], const int length);

void arr_zero(int arr1[], int arr2[], const int length1, const int length2);


int main() {
	setlocale(0, "");
	int n;

	//Задание 1.
	std::cout << "Задание 1.\n\n";
	int a = 3, b = 6, c = 1;
	three_max(a, b, c);
	std::cout << a << ' ' << b << ' ' << c << "\n\n";
	
	//Задание 2. 
	std::cout << "Задание 2.\n\n";
	
	const int size1 = 10;
	int arr[size1]{2, 5 , 13, 21, 10, -7, 9, 11, 3, 8};
	std::cout << "Массив:\n";
	print_arr(arr, size1);
	std::cout << arr_negative(arr, size1);

	//Задание 3. 
	std::cout << "Задание 3.\n\n";
	const int size2 = 10, size3 = 8;
	int arr1[size2]{1, 13, 23, 11, 3, 8, 7, 5, 14, 27};
	int arr2[size3]{2, 13, 41, 3, 12, 14, 76, 1 };
	std::cout << "Массивы:\n";
	print_arr(arr1, size2);
	print_arr(arr2, size3);
	arr_zero(arr1, arr2, size2, size3);
	std::cout << "Измененные массивы:\n";
	print_arr(arr1, size2);
	print_arr(arr2, size3);


	return 0;
}

void three_max(int& num1, int& num2, int& num3) {
	int max = num1;
	max = max > num2 ? max : num2;
	max = max > num3 ? max : num3;
	num1 = max;
	num2 = max;
	num3 = max;
}

void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int& arr_negative(int arr[], const int length) {
	int min = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			min = i; 
			break;
		}
		else
			min = 0;
	}
	return arr[min];
}

void arr_zero(int arr1[], int arr2[], const int length1, const int length2) {
	for (int i = 0; i < length2; i++) {
		for (int j = 0; j < length1; j++) {
			if (*(arr1 + j) == *(arr2 + i)) {
				*(arr2 + i) = 0;
			}
		}
	}
}