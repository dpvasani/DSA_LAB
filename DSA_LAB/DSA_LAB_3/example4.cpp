#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class LifeGrid
{
    // Access specifier
public:
    vector<vector<int>> v;
    vector<pair<int, int>> liveCells;
    int nrows, ncols;
    LifeGrid(int nrows, int ncols)
    {
        this->nrows = nrows;
        this->ncols = ncols;
    }

    // Member Functions()
    int numRows()
    {
        int ans;
        ans = v.size();
        return ans;
    }
    int numCols()
    {
        int ans;
        ans = v[0].size();
        return ans;
    }

    void configure(vector<pair<int, int>> v)
    {
        for (int i = 0; i < v.size(); i++)
        {

            liveCells.push_back(v[i]);
        }
    }

    void clearCell(int row, int col)
    {
        for (int i = 0; i < liveCells.size(); i++)
        {
            if (liveCells[i].first == row && liveCells[i].second == col)
            {
                auto it = liveCells.begin() + i;
                liveCells.erase(it);
            }
        }
    }

    void setCell(int row, int col)
    {
        liveCells.push_back({row, col});
    }

    bool isLiveCell(int row, int col)
    {
        int flag = 0;
        for (int i = 0; i < liveCells.size(); i++)
        {
            if (liveCells[i].first == row && liveCells[i].second == col)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{


    LifeGrid a(5,5);
    a.setCell(2,3);
    a.setCell(4,4);
    a.setCell(1,1);
    a.setCell(1,4);
    cout<<endl;
    a.clearCell(1,4);


    return 0;
}