class Solution {
public:
int reverse(int x) 
    {
        
	long long t = x;
	long long r = 0;
	t= t > 0 ? t : -t;
	for (; t; t/=10)
	{
		r = r * 10 + t % 10;
	}

	bool sign = x > 0 ? true : false;
	if (r > 2147483647 || (sign && r > 2147483648)) 
	{
	return 0;
	}
	else if(x > -10 && x < 10)
		return x;
	{
		if(sign)
			return r;
		else
			return -r;

	}

    }
    bool isPalindrome(int x) 
    {
        int m = reverse(x);
        if(m == x && x > -1)
            return true;
        else
            return false;
        
    }
    
    
};