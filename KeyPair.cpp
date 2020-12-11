//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    map<int,int> mp ;
	    for(int i = 0 ; i < n ; i++){
	        mp[arr[i]]++;
	    }
	    for(int j = 0 ; j < n ; j++){
	            mp[arr[j]]--;
	            if(mp[x - arr[j]] > 0){
	                return true;
	                
	            }
	            mp[arr[j]]++;
	}
	return false;
	}
};
