#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void diag_sum(vector<vector<int>> arr)
{
  int rowcount=arr.size();
  int colcount=arr[0].size();
  int sum=0;
  for(int i=0;i<rowcount;i++)
  {
    
    for(int j=0;j<colcount;j++)
    {
      if(i==j){
        sum+=arr[i][j];
      }
      
    }
    
  }
  cout<<sum<<endl;
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
  diag_sum(arr);
}