class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s = s.split()
        if len(pattern) != len(s): 
            return False
        hash_map = {}
        for i in range(len(pattern)):
            if pattern[i] not in hash_map:
                if s[i] in hash_map.values():
                    return False
                hash_map[pattern[i]] = s[i]
            else:
                if hash_map[pattern[i]] != s[i]:
                    return False
        return True

print(Solution().wordPattern("aaaa", "dog cat cat dog")) 
