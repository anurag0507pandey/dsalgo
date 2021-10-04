class Solution {
public:
void swap(inta,intb)
{
int tmp=*a;
*a=*b;
*b=tmp;
}
int removeElement(vector& nums, int val) {

    int l=0;
    int n=nums.size();
    int count=0;
    if(n==0)return 0;
    
    while(nums[n-l-1]==val){l++;if(l>=n)break;}
    if(n==1&&l==1)return 0;
    for(int i=0;i<n;i++)if(nums[i]==val)count++;
    for(int i=0;i<n-count;i++)
    {
        if(nums[i]==val)
        {
            while(nums[n-l-1]==val)l++;
            swap(&nums[i],&nums[n-l-1]);
            l++;
        }
    }
    return n-count;
    
}
};
