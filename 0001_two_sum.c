/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// question no -1 leetcode
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    for(int i=0;i<numsSize;i++){
        for(int j=i+1; j<numsSize;j++){
            if(nums[i]+nums[j]== target){
             int *result =(int*)malloc(2*sizeof(int));
              *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return result;


            }
            
        }
        
    }
     *returnSize = 0;
    return NULL;
}
