#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of side square  :";
    cin>>n;
    int m;
    cout<<"Number of side square  :";
    cin>>m;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
      {
        cout<<"* ";
      }
      cout<<endl;
    }
    
}