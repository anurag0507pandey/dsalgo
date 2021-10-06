class Solution {
public:
    int strStr(string ha, string ne) 
    {
        int a = ha.size(), b = ne.size();
        if(a < b) return -1;
        if(!b) return 0;
        for(int i = 0; i < a-b+1; ++i)
        {
            if(ha[i] != ne[0]) continue;
            for(int x = 0; x < b; ++x)
            {
                if(ha[x+i] != ne[x]) break;
                if(x == b-1 && ha[x+i] == ne[x]) return i;
            }
        }
        return -1;
    }
};
