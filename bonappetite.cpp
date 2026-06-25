#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k ;
    vector<int> item;
    for(int i = 0 ; i < n ; i++)
    {
        int bills;
        cin >> bills;
        item.push_back(bills);
    }

    int total = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
         total += item[i];
    }

    double b;
    cin >> b ;

    double anna_bill = (total - item[k]) / 2 ;

    if (b == anna_bill)
    {
        cout << "Bon Appetite" << endl;
    }
    else
    {
        cout << b - anna_bill << endl;
    }

    return 0;
}