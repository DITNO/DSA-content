int search(vector<int> &nums, int target) {
    // Write your code here.
    int start = 0;
    int end = nums.size() - 1;
    while(start<=end){
    int mid = (start+end)/2;
    if(target == nums[mid]){
        return mid;
    }
    else if(target>nums[mid]){
        start = mid +1;
    }
    else if(target < nums[mid]) {
          end = mid - 1;
        }
    else{
        return -1;
    }
    }
    return -1;
}
