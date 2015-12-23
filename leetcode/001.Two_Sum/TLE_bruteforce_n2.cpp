class Solution
{
public:
    vector<int> twoSum (vector<int> &numbers, int target)
    {
        int count = numbers.size();
        vector<int> index;
        for ( int i = 0; i < count; i++) 
        {
        	for ( int j = i+1; j < count; j++) 
        	{
        		if (numbers[i] + numbers[j] == target) 
        		{
        			index.push_back(j+1);
        			index.push_back(i+1);
        			return index;
        		}
        	}
        }
    }
};