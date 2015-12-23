``` c++
class Solution
{
public:
    string convert (string s, int nRows)
    {
        if(nRows==1) return s;
        string strs[nRows];
        int row = 0;
        for (string::iterator it = s.begin(); it != s.end();)
        {
            while (row < nRows && it != s.end()) strs[row++] += *it++;
            row--;
            while (row > 0     && it != s.end()) strs[--row] += *it++;
            row++;
        }
        string result = "";
        for (int i = 0; i < nRows; ++i) result += strs[i];
        return result;
    }
};