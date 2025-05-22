#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

vector<vector<int>> di = {
    {-1, 0},
    {0, 1},
    {1, 0},
    {0, -1},
};

vector<pair<int, int>> delete_block(vector<vector<char>> grid, int h)
{
    vector<pair<int, int>> result = {};

    rep(y, 0, h)
    {
        rep(x, 0, 5)
        {
            if (grid[y][x] == '.')
                continue;

            vector<pair<int, int>> positions = {};
            positions.push_back(make_pair(y, x));
            bool flag = true;
            rep(k, 0, di.size())
            {
                int dy = y + di[k][0];
                int dx = x + di[k][1];

                if (dy < 0 || dy > h - 1)
                {
                    continue;
                }
                if (dx < 0 || dx > 4)
                {
                    continue;
                }
                if (grid[y][x] != grid[dy][dx])
                {
                    positions.clear();
                    break;
                }
                positions.push_back(make_pair(dy, dx));
            }

            rep(i, 0, positions.size()) result.push_back(make_pair(positions[i].first, positions[i].second));
        }
    }

    return result;
}

vector<vector<char>> drop_block(vector<vector<char>> grid, int h)
{
    rep(x, 0, 5)
    {
        vector<int> positions = {};
        rep(y, 0, h) if (grid[y][x] != '.')
        {
            positions.push_back(y);
        }

        rep(k, 0, positions.size())
        {

            int reverse = positions[positions.size() - (1 + k)];
            int origin = grid[reverse][x];
            while (true)
            {
                reverse += 1;
                if (reverse > h - 1)
                    break;
                if (grid[reverse][x] != '.')
                    break;

                grid[reverse - 1][x] = '.';
                grid[reverse][x] = origin;
            }
        }
    }

    return grid;
}

int main()
{
    int h;
    cin >> h;
    vector<vector<char>> grid(h, vector<char>(5));
    rep(i, 0, h) rep(j, 0, 5) cin >> grid[i][j];

    while (true)
    {
        vector<pair<int, int>> result = delete_block(grid, h);
        if (result.size() == 0)
            break;

        rep(i, 0, result.size()) grid[result[i].first][result[i].second] = '.';

        grid = drop_block(grid, h);
    }

    rep(i, 0, h)
    {
        rep(j, 0, 5)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
}