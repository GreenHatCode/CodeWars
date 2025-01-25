#include <iostream>
#include <queue>
#include <set>

/*source link: https://www.codewars.com/kata/549ee8b47111a81214000941/cpp */


bool valid(int x, int y)
{
    return x >= 1 && y >= 1 && x <= 8 && y <= 8;
}

int convert(char x)
{
    switch (x)
    {
    case 'a':
    case '1':
        return 1;
        break;
    case 'b':
    case '2':
        return 2;
        break;
    case 'c':
    case '3':
        return 3;
        break;
    case 'd':
    case '4':
        return 4;
        break;
    case 'e':
    case '5':
        return 5;
        break;
    case 'f':
    case '6':
        return 6;
        break;
    case 'g':
    case '7':
        return 7;
        break;
    case 'h':
    case '8':
        return 8;
        break;
    default:
        return -1;
        break;
    }
}

int knight(std::string start, std::string finish) {
    
    int startX = convert(start[0]);
    int startY = convert(start[1]);
    int finishX = convert(finish[0]);
    int finishY = convert(finish[1]);

    std::queue<std::pair<std::pair<int, int>, int>> Q;
    std::set<std::pair<int, int>> visited;

    Q.push(std::make_pair(std::make_pair(startX, startY), 0));
    while (!Q.empty())
    {
        std::pair<std::pair<int, int>, int> square = Q.front();
        Q.pop();

        int currX = square.first.first;
        int currY = square.first.second;

        // checkint if the current point is finish
        if (currX == finishX && currY == finishY)
        {
            return square.second;
        }

        // calculating the new points
        if (visited.find(square.first) == visited.end())
        {
            visited.insert(square.first);

            int new_coords_x = square.first.first;
            int new_coords_y = square.first.second;

            if (valid(new_coords_x + 1, new_coords_y + 2))
            {
                Q.push(std::make_pair(std::make_pair(new_coords_x + 1, new_coords_y + 2), square.second + 1));
            }
            if (valid(new_coords_x + 2, new_coords_y + 1))
            {
                Q.push(std::make_pair(std::make_pair(new_coords_x + 2, new_coords_y + 1), square.second + 1));
            }
            if (valid(new_coords_x + 2, new_coords_y - 1))
            {
                Q.push(std::make_pair(std::make_pair(new_coords_x + 2, new_coords_y - 1), square.second + 1));
            }
            if (valid(new_coords_x + 1, new_coords_y - 2))
            {
                Q.push(std::make_pair(std::make_pair(new_coords_x + 1, new_coords_y - 2), square.second + 1));
            }
            if (valid(new_coords_x - 1, new_coords_y - 2))
            {
                Q.push(std::make_pair(std::make_pair(new_coords_x - 1, new_coords_y - 2), square.second + 1));
            }
            if (valid(new_coords_x - 2, new_coords_y - 1))
            {
                Q.push(std::make_pair(std::make_pair(new_coords_x - 2, new_coords_y - 1), square.second + 1));
            }
            if (valid(new_coords_x - 2, new_coords_y + 1))
            {
                Q.push(std::make_pair(std::make_pair(new_coords_x - 2, new_coords_y + 1), square.second + 1));
            }
            if (valid(new_coords_x - 1, new_coords_y + 2))
            {
                Q.push(std::make_pair(std::make_pair(new_coords_x - 1, new_coords_y + 2), square.second + 1));
            }
        }

    }

    return 0;
}