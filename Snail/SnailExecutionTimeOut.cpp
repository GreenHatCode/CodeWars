#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>>& snail_map) {
    
    if (snail_map[0].empty())return {};

    std::vector<int> result;
    int d_row = 0; // 1 down, 0 stand, -1 up
    int d_col = 1; // -1 right, 0 stand, 1 left
    int n = snail_map.size();
    int curr = 0;

    // start position
    int row = 0;
    int col = -1;

    while (curr != n * n)
    {
        if ((row+d_row) >= 0 && (row + d_row) < n && (col+d_col) >= 0 && (col+d_col) < n && curr < snail_map[row + d_row][col + d_col])
        {
            result.push_back(snail_map[row + d_row][col + d_col]);
            curr = snail_map[row + d_row][col + d_col];

            // move to next cell
            row += d_row;
            col += d_col;
        }
        else
        {
            // the next cell doesn't exitst
            // so we change the direction
            if (d_row == 0 && d_col == 1)
            {
                // go down
                d_row = 1;
                d_col = 0;
            }
            else if (d_row == 1 && d_col == 0)
            {
                // go right
                d_row = 0;
                d_col = -1;
            }
            else if (d_row == 0 && d_col == -1)
            {
                // go up
                d_row = -1;
                d_col = 0;
            }
            else // else if (d_row == -1 && d_col == 0)
            {
                // go left
                d_row = 0;
                d_col = 1;
            }
        }
    }
    return result;
}