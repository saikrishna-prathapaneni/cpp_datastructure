class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i=0
        j=0
        if len(s)==0 or len(t)==0:
            return False
        for k in t:
            if s[i]==k:
                i+=1
            if i==len(s):
                return True
        print(i, len(s), len(t))
        return False
a=Solution()
s="abc"
t = "ahbgdc"

print(a.isSubsequence(s,t))