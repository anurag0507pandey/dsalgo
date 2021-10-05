string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (int j=0;j<strs[0].size();j++){
            char tmp = strs[0][j];
            for (int i =1;i<strs.size();i++){
                if (tmp != strs[i][j]) return ans;
            }
            ans += tmp;
        }
        return ans;
        
    }
