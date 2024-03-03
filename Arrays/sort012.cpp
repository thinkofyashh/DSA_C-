#better approach
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int count0=0;
   int count1=0;
   int count2=0;
   for(int i=0;i<n;i++){
      if(arr[i]==0) count0++;
      else if(arr[i]==1) count1++;
      else count2++;
   }
   for(int i=0;i<count0;i++){
      arr[i]=0;
   }
   for(int i=count0;i<count1+count0;i++){
      arr[i]=1;
   }
   for(int i=count1+count0;i<n;i++){
      arr[i]=2;
   }
}
## optimal appraoch
 void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }        
    }
