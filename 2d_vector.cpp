#include<iostream>
#include<vector>
using namespace std;
// vector can pass-by-value and reference both
int main()
{
  vector<vector<int>> arr(4,vector<int>(3,0));
  //4 rows 3 columns initialized with 0
  //4 rows and 3 vectors 
  int rowsize = arr.size();
  int colsize = arr[0].size();
  for(int i=0;i<rowsize;i++)
  {
    for(int j=0;j<colsize;j++)
    {
      cin>>arr[i][j];
    }

  }
  for(int i=0;i<rowsize;i++)
  {
    for(int j=0;j<colsize;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}