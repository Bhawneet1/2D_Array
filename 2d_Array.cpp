#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
  //single box is cell
  //row
  //col
  //(0,0) (0,1) (0,2)
  //(1,0) (1,1) (1,2)
  //(2,0) (2,1) (2,2)
  //In memory it is 1D array

  //row-major
  //c*i+j(total no. of columns=c)

  //declaration
  int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
  cout<<arr[0][0]<<endl;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  int arr1[2][3]={1,2,3,4,5,6};
  //automatically arrange in the order given
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }

  int arr2[3][2]={10,20};
  //all other 0 if not mentioned
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<2;j++)
    {
      cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
  }
  


  //print column-wise
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }


}