``` c++
class Solution
{
public:
    string addBinary (string a, string b)
    {
        string result = "";
        int c = 0, ia = a.length() - 1, ib = b.length() - 1;
        while (ia >= 0 || ib >= 0 || c)
        {
            c += ia >= 0 ? a[ia--] - '0' : 0;
            c += ib >= 0 ? b[ib--] - '0' : 0;
            result = char (c % 2 + '0') + result;
            c /= 2;
        }
        return result;
    }
};