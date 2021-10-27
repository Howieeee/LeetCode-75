class Solution {
public:
    
    void swap(vector<int>& nums, int &left, int &right){
        
        int t = nums[left];
        nums[left] = nums[right];
        nums[right] = t;
        
    }
    
    
    void sortColors(vector<int>& nums) {
        int left =0 ,right = nums.size()-1;
        
        for(int i=0;i<= right ;i++){
            
            if(nums[i] == 0){//0    當前跟left換   left+=1
                swap(nums,left,i);
                left+=1;
            }else if(nums[i] == 1){ //1  不動
                
            }else{ // =2
                swap(nums,right,i);
                right -=1;
                i-=1;
            }
            
            
        }
    }
};
