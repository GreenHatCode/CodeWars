#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>>& snail_map) {
    
    if (snail_map[0].empty())return {};

    std::vector<int> result;
    int n = snail_map.size();
    int k = 0;

    while (result.size() != n * n)
    {
        k++;
        for (int col = k - 1; col < n - k + 1; col++)
        {
            result.push_back(snail_map[k - 1][col]);
        }

        for (int row = k; row < n - k + 1; row++)
        {
            result.push_back(snail_map[row][n - k]);
        }

        for (int col = n - k - 1; col >= k - 1; col--)
        {
            result.push_back(snail_map[n - k][col]);
        }

        for (int row = n - k - 1; row >= k; row--)
        {
            result.push_back(snail_map[row][k - 1]);
        }
    }

    return result;
}