class Solution {
public:
    int binSum(int n)
    {
        int sum = 0; 
        while(n)
        {
            int tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) 
    {
        int slow = n, fast = binSum(n);
        while(slow != fast)
        {
            slow = binSum(slow);
            fast = binSum(binSum(fast));
        }
        return slow == 1;
    }
};