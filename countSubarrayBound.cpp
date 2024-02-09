class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int minkPosition=-1;
        int maxkPosition=-1;
        int culpritIdx=-1;

        for(i=0;i<nums.size();i++){
            if(nums[i]<minK||nums[i]>maxK){
                    culprit=i;
            }  

            if(nums[i]==minK){
            minkPosition=i;
            } 

            if(nums[i]==maxk){
            maxkPosition=i;
            } 

            long long smaller=min(minkPosition,maxkPosition);

            long long temp=smaller-culprit;

            ans+=(temp<=0)?0:temp;
        }

        return ans;
        
           
           
           
            }

};