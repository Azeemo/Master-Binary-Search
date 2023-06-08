 
// lc : https://leetcode.com/problems/longest-mountain-in-array/
// in this we are given a set of mountain array
// we need to find the longest mountain 

// mountain height : all low elemeents + peak + all upper elements
// -> height = peak + 2*valley


 int longestMountain(vector<int>& arr) {
        int n  = arr.size();
       // we can never be finding the mountain peak on index 0 and n-1 
        int ans = 0 ;

        // range in which we can find a  peak index
        for(int i=1;i<=n-2;)
        {
           // conditoin for finding the peak index
         if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
           {
 
            int j=i;
            int k =i;
            int count =1;
            // including the mountian index;

                     // going from peak to backward valley
            while((j>0)&&(arr[j]>arr[j-1])){
                j--;
                count++;
            }
                   
            // going from peak to forward valley 
            // here we are incrementing i also
            // as now they can never be peak index
            while((k<n-1)&&(arr[k]>arr[k+1])){
                count++;
                k++;
                i++;
            }
                 ans = max(count,ans);
           }
           // not a  peak index
           else{
               i++;
           }
          
        }
      return ans;
    }