class Solution:
    def isPalindrome(self, x: int) -> bool:
        rev_num=0
        org_num=x
        while(x>0):
            lastdigit = x%10
            rev_num = (rev_num*10)+ lastdigit
            x//=10
        if(rev_num==org_num):
            return True
        else:
            return False