#include <vector>

/* source link: https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c */

int maxSequence(const std::vector<int>& arr) {
	if (arr.empty())return 0;

	int sum = 0;
	int maxSum = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum = std::max(sum + arr[i], arr[i]);
		maxSum = std::max(sum, maxSum);
	}

	return maxSum;
}