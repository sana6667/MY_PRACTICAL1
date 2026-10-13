#pragma once


namespace search {
	int binary_search(int* arr, int size, int nums) {
		int low = 0;
		int hight = size - 1;

		while (low <= hight) {
			int mid = (low + hight) / 2;
			int index = arr[mid];

			if (index == nums) {
				return mid;
			}

			else if (index > nums) {
				hight = mid - 1;
			}

			else if (index < nums) {
				low = mid + 1;
			}
		}

		return -1;
	}


	void fill_array(int* arr, int size) {
		for (int i = 0; i < size; i++) {
			arr[i] = i + 1;
		}
	}
}