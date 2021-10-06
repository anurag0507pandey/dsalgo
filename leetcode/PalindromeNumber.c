bool isPalindrome(int x)
{
    char x_str[12];
    sprintf(x_str, "%d", x);
    uint8_t len = strlen(x_str);
    for(uint8_t y = 0; y < len; y++)
    {
        if (x_str[y] != x_str[len - 1 - y])
        {
            return 0;
        }
    }
    return 1;
}
