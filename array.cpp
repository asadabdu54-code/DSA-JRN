#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int array[N];
    for(int i = 0;i < N ; i++)
    {
        cin>> array[i];
    }
    for(int i = 0;i < N ; i++)
    {
        cout<< array[i];
    }

    cout<<endl;

    for(int i = N-1;i >= 0 ; i--)
    {
        cout<< array[i];
    }

    return 0;
}