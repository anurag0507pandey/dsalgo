class Solution:
    def isValid(self, s: str) -> bool:
        mp = {"(": ")", "[": "]", "{": "}"}
        stack = []
        for ch in s: 
            if ch in mp: stack.append(ch) 
            elif not stack or mp[stack.pop()] != ch: return False 
        return not stack
