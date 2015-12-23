class Solution
{
public:
    vector<int> twoSum (vector<int> &numbers, int target)
    {
        int count = numbers.size();
        int left = 0, right = count-1;
        vector<int> index;
        vector<int> sorted(numbers);
        std::sort(sorted.begin(),sorted.end());
        while(left < right)
        {
	        if(sorted[left] + sorted[right] == target)
	        {
		        for ( int i = 0; i < count; i++) 
		        {
		        	if (numbers[i] == sorted[left])
                        index.push_back(i + 1);
                    else if (numbers[i] == sorted[right])
                        index.push_back(i + 1);
                    if (index.size() == 2)
                        return index;
		        } 
	        }
			else if (sorted[left] + sorted[right] > target) 
			{
                right--;
            } 
            else 
            {
                left++;
            }
        }
    }
};