#include<iostream>
#include<vector>
 using namespace std;
 int main()
 {
    vector<int>ThisVec(4);
    // cout<<ThisVec.size(); size of vector 
    ThisVec.resize(10);//re size the   

    cout<<ThisVec.capacity();//capaticy of vec
    


    return 0;
 }