/* Given an integer array nums, find the contiguous subarray */
/* which has the largest sum and return its sum */

/* A subarray is a contiguous part of an array. */

/* ### QUESTIONS ### */
/* What does a contiguous part mean? */
/* Subset of an array that are in the same order as its
superset */

#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Solution
{
public:
    bool exist(vector<vector<char>> &board, string word)
    {
        for (int i = 0; i < board.size(); ++i)
        {
            for (int j = 0; j < board[0].size(); ++j)
            {
                if (dfs(board, word, i, j))
                {
                    return true;
                }
            }
        }
        return false;
    }

    // return true if word exists in the matrix and word starts at position board[i][j].
    bool dfs(vector<vector<char>> board, string word, int i, int j)
    {
        if (!word.size())
        {
            return true;
        }
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || word[0] != board[i][j])
        {
            return false;
        }
        char c = board[i][j];
        string s = word.substr(1);
        board[i][j] = '*';
        bool ret = dfs(board, s, i - 1, j) || dfs(board, s, i + 1, j) || dfs(board, s, i, j - 1) || dfs(board, s, i, j + 1);
        board[i][j] = c;
        return ret;
    }
};

int main()
{
    Solution sln = new Solution;
    sln.exist();
}