#include <vector>
#include <algorithm>

/* source link: https://www.codewars.com/kata/59f11118a5e129e591000134 */

int repeats(std::vector<int>v) {

    std::sort(v.begin(), v.end());
	int sum = 0;
	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		if ((iter + 1) == v.end() || *iter != *(iter + 1))
		{
			sum += *iter;
		}
		else iter++;
	}

	return sum;
}