static bool cmp(vector<int> &a, vector<int> &b){
        return (a[0]<=b[0]);
}
vector<vector<int>> merge(vector<vector<int>>& nums) {
	vector<vector<int>> ans;
  if(nums.size()<=1){
  	return nums;
  }
  int n=nums.size();
  sort(nums.begin(),nums.end());
  ans.push_back(nums[0]);
  
	for(int i=1;i<n;i++){
  	if(ans.back()[1]<nums[i][0]){
	    ans.push_back(nums[i]);
    }
    else{
    	ans.back()[1]=max(ans.back()[1],nums[i][1]);
		}
 	}
  return ans;      
}
