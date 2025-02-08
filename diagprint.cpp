#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
  //row-wise printing
  int mat[3][3]={1,2,3,4,5,6,7,8,9};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }

  //col-wise printing
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<mat[j][i]<<" ";
    }
    cout<<endl;
  }

  //diag-wise (primary)
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(i==j)
      {
        cout<<mat[i][j]<<" ";
      }
    }
    cout<<endl;
  }

  //m-2
  for(int i=0;i<3;i++)
  {
    cout<<mat[i][i]<<" ";
  }cout<<endl;

  //secondary-diag
  for(int i=0;i<3;i++)
  {
    cout<<mat[i][2-i] <<" ";
  }

  
}