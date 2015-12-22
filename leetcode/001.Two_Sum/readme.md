class Solution
{
public:
    vector<int> twoSum (vector<int> &numbers, int target)
    {
        map<int, int> m;
        for (int i = 0; i < numbers.size(); ++i)
        {
            if (m.find (numbers[i]) == m.end()) m[target - numbers[i]] = i + 1;
            else
            {
                vector<int> ret (2);
                ret[0] = m[numbers[i]];
                ret[1] = i + 1;
                return ret;
            }
        }
    }
};