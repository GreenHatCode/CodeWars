#include<vector>
using namespace std;

/*link: https://www.codewars.com/kata/576b93db1129fcf2200001e6/cpp */

int sum(vector<int> numbers)
{
	// special cases
	if (numbers.empty() || numbers.size() == 1)return 0;

	int sum = 0;
	int max = numbers[0];
	int min = numbers[0];
	// search for max and min elements
	for (std::vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		if (max < *iter)max = *iter;
		if (min > *iter)min = *iter;
		sum += *iter;
	}

	return sum - max - min;
}