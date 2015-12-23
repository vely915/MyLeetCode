# Reverse Integer
## Question:
>Reverse digits of an integer.

>Example1: x = 123, return 321
>Example2: x = -123, return -321 
>Have you thought about this?

>Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!
>If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.
>
>Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?
>
>For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

----------


####AC Code: 
>定义一个for循环，循环终止的条件是x为0，每次循环后除以10去最右边的数
>在循环里对x取mod(10)获得最左边的数字
>
>Why need the **INT_MAX** and **INT_MIN** be defined like that?
>Please take a look:
>http://stackoverflow.com/questions/14695118/2147483648-0-returns-true-in-c

>Runtime: 8ms
```cpp
#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)
class Solution
{
public:
    int reverse (int x)
    {
        int result = 0;
        for( ; x; x/=10)
        {
            if (result > INT_MAX/10 || result < INT_MIN/10)
                return 0;
            result = result*10 + x%10;
        }
        return result;
    }
};
```

