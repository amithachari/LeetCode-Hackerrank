class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        temp = x
        rev = 0
        if (x<0): return 0
        while(x):
            rev = rev*10 + (x%10)
            x/=10
        return rev==temp
