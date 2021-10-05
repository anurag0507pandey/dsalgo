class Solution {
public String longestCommonPrefix(String[] strs) {

    String lcp="";
    if(strs==null || strs.length==0)
    {
        return lcp;
    }
    
    int index=0;
    
    char[] chars = strs[0].toCharArray();
    
    for(char c: chars)
    {
        for(int i=1;i<strs.length;i++)
        {
            if(index >= strs[i].length() || c != strs[i].charAt(index))
            {
                return lcp;
            }
        }
        
        lcp += c;
        index++;
    }
    
    return lcp;
    
}
}
