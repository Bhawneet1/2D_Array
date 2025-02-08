#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
  int arr[3][3];
  int rowcount=3;
  int colcount=3;
  cout<<"Input  array(row-wise): "<<endl;
  for(int row=0;row<rowcount;row++)
  {
    for(int col=0;col<colcount;col++)
    {
      cin>>arr[row][col];
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

  int nums[3][3];
  cout<<"Input array(col-wise): "<<endl;
  for(int i=0;i<rowcount;i++)
  {
    for(int j=0;j<colcount;j++)
    {
      cin>>nums[j][i];
    }
  }

  for(int i=0;i<rowcount;i++)
  {
    for(int j=0;j<colcount;j++)
    {
      cout<<nums[i][j]<<" ";
    }
    cout<<endl;
  }

}