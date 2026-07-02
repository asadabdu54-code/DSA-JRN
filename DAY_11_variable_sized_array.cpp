#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n,q;
   cin>> n>>q;
   vector<vector<int>> arr;

   for(int i = 0 ;i < n ; i++)
   {
    int k;
    cin>>k;
     vector<int> arr1;
     for(int j = 0 ; j < k ; j++)
     {
        int x;
        cin>>x;
        arr1.push_back(x);
     }
     arr.push_back(arr1);
   }

   for(int i = 0 ; i < q ; i++)
   {
    int a,b;
    cin>>a>>b;
    cout<<arr[a][b]<<endl;
   }


    return 0;
}