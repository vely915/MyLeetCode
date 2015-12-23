# Remove Duplicates from Sorted Array
## Question:
> Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
>
>Do not allocate extra space for another array, you must do this in place with constant memory.
>
>For example,
>Given input array nums = [1,1,2],
>
>Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length. 
>

----------
####AC Code: 1
>..

>Runtime: 32ms
```cpp
class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.size() == 0) return 0;
		int index = 0;
		for (int i = 1; i < nums.size(); i++) 
		{
			if (nums[index] != nums[i])
			nums[++index] = nums[i];
		}
		return index + 1;
    }
};
```

----------
####AC Code: 2
>use STL algorithm

>Runtime: 32 ms
```cpp
class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        return distance(nums.begin(), unique(nums.begin(), nums.end()));
    }
};
```

----------
####AC Code: 3
>use map that has log(n) complexity

>Runtime: 76 ms
```cpp
class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        map<int, int> mp;
        int ret = 0;
        for (int i = 0; i < n; i++)
        {
            if (!mp[nums[i]]++)
                nums[ret++] = nums[i];
        }
        return ret;
    }
};
```