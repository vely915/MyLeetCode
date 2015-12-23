# Two Sum
## Question:
> Given an array of integers, find two numbers such that they add up to a specific target number.
> 
> The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
> 
> You may assume that each input would have exactly one solution.
> 
> Input: numbers={2, 7, 11, 15}, target=9
> 
> Output: index1=1, index2=2


----------


####AC Code: 1
>保存一个副本，对副本排序，然后左右夹逼，最后找到副本所对应的原数组下标，排序 O(nlogn)，左右夹逼 O(n)，找下标O(n)，最终时间复杂度为O(nlogn)。

>Runtime: 12ms
```cpp
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
```


----------


####AC Code: 2
>hash。用一个哈希表，存储每个数对应的下标，复杂度 O(n)

>Runtime: 16ms
```cpp
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
```


----------


####AC Code: 3
>暴力查找，复杂度 O(n2)

>Runtime: 568 ms
```cpp
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
        			index.push_back(i+1);
        			index.push_back(j+1);
        			return index;
        		}
        	}
        }
    }
};
```


