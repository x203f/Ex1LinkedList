#include <iostream>

using std::cin;
using std::cout;

#define SIZE 10

/*
This function will reverse all the elements in nums.
nums: an array to reverse
size: size of the array
*/
void reverse(int* nums, unsigned int size) {
	int start = 0;

	// if empty then dont do anything
	if (size == 0 || nums == nullptr) return;

	int end = size - 1;

	while (end > start) {
		// swap between end and start
		int temp = nums[start];

		nums[start++] = nums[end];

		nums[end--] = temp;

	}
}
/*
This function will ask for 10 numbers and return the reversed array of those 10 numbers.
*/
int* reverse10() {

	int* arr = new int[SIZE];

	for (int i = 0; i < SIZE; i++) {

		// input
		cout << "Enter a number" << i << std::endl;

		cin >> arr[i];
	}
	reverse(arr, SIZE);
	return arr;
}
