class Solution {
    public int strStr(String haystack, String needle) {
        char[] chars = haystack.toCharArray();
        char[] needleChars = needle.toCharArray();
        
        if(chars.length == 0 && needleChars.length == 0)
            return 0;
        if(chars.length < needleChars.length)
            return -1;
        
        int i=0;
        while(i<chars.length){
            int start = i;
            int j = 0;
            // start comparing needlechars with chars[i]
			// until we find the mismatch.
            while(j<needleChars.length && start<chars.length){
                if(chars[start] != needleChars[j]){
                    break;
                }
                j++;
                start++;
            }
            
			// if all of the characters match then we found the solution.
			// j will be always less than needleChars.length
			// if no match is found.
            if(j == needleChars.length){
                return i;
            }
            i++;
        }
        
		// we parsed the whole string and no match found.
        return -1;
    }
}
