#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> &arr)
{
  int rowcount=arr.size();
  int colcount=arr[0].size();
 
  for(int i=0;i<rowcount;i++)
  {
    
    // for(int j=0;j<colcount;j++)//agar j=0 sae karengai to 2 baar swap ho jaega kyoki pai repeat therfore we get same array
    //to j initialize with i+1
      for(int j=i+1;j<colcount;j++)
      {
        swap(arr[i][j],arr[j][i]);  
      }
      
    }
    
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
  transpose(arr);
  for(int i=0;i<rowcount;i++)
  {
    for(int j=0;j<colcount;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}