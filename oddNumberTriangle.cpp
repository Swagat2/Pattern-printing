// 1 
// 1 3
// 1 3 5
// 1 3 5 7


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of side square  :";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
    
    ///////different way 
    for (int i = 1; i <= n; i++)
    {
        int a =1;
        for (int j = 1; j <= i; j++)
        {
            cout<<a<<" ";
            a=a+2;
        }
        cout<<endl;
    }
}
    


