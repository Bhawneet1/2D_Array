#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int find_max(vector<vector<int>> arr){
  int rowcount=arr.size();
  int colcount=arr[0].size();
  int max=INT_MIN;
  for(int i=0;i<rowcount;i++)
  {
    for(int j=0;j<colcount;j++)
    {
      if(arr[i][j]>max)
      {
        max=arr[i][j];
      }
    }
  }
  return max;
}
int main()
{
  vector<vector<int>> arr(3,vector<int>(3,0));
  int rowcount=arr.size();
  int colcount=arr[0].size();
  for(int i=0;i<rowcount;i++)
  {
    for(int j=0;j<colcount;j++)
    {
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<rowcount;i++)
  {
    for(int j=0;j<colcount;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  int ans=find_max(arr);
  cout<<"Max = "<<ans<<endl;
}