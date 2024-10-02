#include<iostream>
using namespace std;
int main()
{
    int c=0;
    while(1)
    {
        int x;
        cin>>x;
        int sum=0;
        int temp=x;
        int r;
        while(x!=0)
        {
           r=x%10;
           sum=sum*10+r;
           x/=10;
        }

        if(sum==temp)
        {
            cout<<"P\n";
            break;
        }
        else{
            cout<<"NP\n";
            c++;
        }
        if(c==5)
          break;
         
    }

    return 0;
}

//ludoo if toss is six then win
//   if(x==6)
//         {
//             cout<<"WIN\n";
//         }
//         else{
//             cout<<"LOSE\n";
//         }
//     }

//if  phone is 60 t0 80 % charge 

//  int x;
//         cin>>x;
//         if(60<=x and x<=80)
//         {
//             cout<<"Optimum\n";
//         }

// if y is catched x or not
//  int x,y;
//        cin>>x>>y;
//        if(y>x)
//        {
//         cout<<"YES\n";
//        }
//        else{
//         cout<<"NO\n";
//        }


//write a program of infinite input when input -1 then stop taking input and collect entered element addition

// int n,sum=0;
//     while(1)
//     {
//         cin>>n;
//         if(n==-1)
//         break;
//         sum=sum+n;
//     }
//     cout<<sum;
    