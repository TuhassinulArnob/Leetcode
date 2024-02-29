class Solution:
    def wordPattern(self, s: str, t: str) -> bool:
        if len(s) != len(t): 
            return False
        hash_map = {}
        for i in range(len(s)):
            if  s[i] not in hash_map:
                if  t[i] in hash_map.values():
                    return False
                hash_map[s[i]]=t[i]               
            else:
                if hash_map[s[i]]!=t[i]:
                    return False 
        return True

s = "egg"
t = "add"
print(Solution().wordPattern(s, t)) 
