#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    // cout<<"Enter n";
    cin>>n;
    // cout<<n;

    int x,y,z;

    for ( int i = 0; i < n; i++)
    {
        cin>>x;
        cin>>y;
        cin>>z;

        if(abs(x-z)==abs(y-z))
        {
            cout<<"Mouse C"<<endl;
        }
        else if(abs(x-z)>abs(y-z))
        {
            cout<<"Cat B"<<endl;
        }
        else{
            cout<<"Cat A"<<endl;
        }
        

        

    }
    

}