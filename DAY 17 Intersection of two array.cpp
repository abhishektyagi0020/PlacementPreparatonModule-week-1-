/* INTERSECTION OF TWO ARRAY.CPP */


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size() && j <nums2.size())
        { 
            if(nums1[i]==nums2[j])
        {   
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
            else if(nums1[i]>nums2[j])
        {
            j++;
        }
            else
            i++;
        }
            return ans;
        }
};


// Best Time to Buy and Sell Stock.CPP
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int  lsf=INT_MAX;
        int ans=0;
        int p=0;
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i] <lsf)
        {
                lsf=prices[i];
            }
            p=prices[i]-lsf;
            if(ans <p)
            {
            ans=p;
            }
}
    
 //     /  for(int i=1;  i<prices.size(); i++)
       // ans=max(ans,prices[i]-exchange(temp,min(temp,prices[i])));
        return ans;
    }
};
