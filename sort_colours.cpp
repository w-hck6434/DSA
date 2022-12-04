class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int a[3]={0}, i,j;
        for(i=0; i<nums.size(); i++)
            a[nums[i]]++;
        for(j=0,i=0, j=0; i<a[0]; j++,i++)
            nums[j]=0;
        for(i=0; i<a[1]; j++,i++)
            nums[j]=1;
        for(i=0; i<a[2]; j++,i++)
            nums[j]=2;
        for(i=0; i<nums.size(); i++)
            cout<<nums[i];
    }
};