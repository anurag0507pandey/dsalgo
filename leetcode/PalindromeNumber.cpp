class Solution {
public:
    bool isPalindrome(int x) {
        string temp = to_string(x);
        string rev = temp;
        reverse(temp.begin(), temp.end());
        return (rev == temp);
    }
};
