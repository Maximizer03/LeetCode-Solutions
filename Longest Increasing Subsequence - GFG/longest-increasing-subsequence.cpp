// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       vector<int>v;
       for(int i=0;i<n;i++){
           v.push_back(a[i]);
       }
       vector<int>dp;
       dp.push_back(v[0]);
       for(int i=1;i<n;i++){
           if(v[i]>dp.back()){
               dp.push_back(v[i]);
           }
           else{
               int l=lower_bound(dp.begin(),dp.end(),v[i])-dp.begin();
               dp[l]=v[i];
           }
       }
       return dp.size();
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends