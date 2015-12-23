class Solution
{
public:
    vector<int> twoSum (vector<int> &numbers, int target)
    {
        unordered_map<int, int> m;
        vector<int> ret;
        for (int i = 0; i < numbers.size(); ++i)
        {
            if (m.find (numbers[i]) == m.end()) m[target - numbers[i]] = i;
            else
            {
                ret.push_back(m[numbers[i]]+1);
                ret.push_back(i+1);
                break;
            }
        }
        return ret;
    }
};