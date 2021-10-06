public class Solution {
    public bool IsValid(string s) {

        Stack<char> validCharsStack = new Stack<char>();
        
        char[][] parPairs = new char[3][] {
            new char[2] { '(', ')' },
            new char[2] { '{', '}' },
            new char[2] { '[', ']' }
        };
        
        foreach(var ch in s)
        {
            bool isPush = false;
            
            foreach(var parPair in parPairs)
            {
                if(ch == parPair[0])
                {
                    isPush = true;
                    break;
                }
            }
            
            if(isPush)
                validCharsStack.Push(ch);
            else
            {
                if(validCharsStack.Count > 0)
                {
                    var poppedChar = validCharsStack.Pop();
                    
                    bool isMatchingChar = false;
            
                    foreach(var parPair in parPairs)
                    {
                        if(poppedChar == parPair[0] && ch == parPair[1])
                        {
                            isMatchingChar = true;
                            break;
                        }
                    }
                    
                    if(!isMatchingChar)
                        return false;
                }
                else
                    return false;
            }
        }
        
        if(validCharsStack.Count > 0)
            return false;
        
        return true;            
    }
}
