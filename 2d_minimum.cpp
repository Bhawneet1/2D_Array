#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int find_min(vector<vector<int>> arr)
{
  int min=INT_MAX;
  int rowcount=arr.size();
  int colcount=arr[0].size();
  for(int i=0;i<rowcount;i++)
  {
    for(int j=0;j<colcount;j++)
    {
       if(arr[i][j]<min)
       {
        min=arr[i][j];
       }
    }
  }
  return min;
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
  int ans=find_min(arr);
  cout<<"Min = "<<ans<<endl;
}