#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int>v(size);
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
    }

    const int N = 1e5 + 10;
    vector<int>freq(N,0);
    for(int i=0;i<size;i++)
    {
        freq[v[i]]++;
    }    

    cout<<" Enter the querues : \n";
    int q; cin>>q;
    while(q--)
    {
        int qrelement;
        cin>>qrelement;
        cout<<freq[qrelement];

    }
    return 0;
}