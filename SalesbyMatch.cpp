#include <iostream>
#include<unordered_map>
using namespace std;
void frequency(int arr[], int size)
{
    int pair_count=0,count=0;
    unordered_map < int, int > um;
    for (int i = 0; i < size; i++)
    {
        um[arr[i]]++;
    }
    for (auto x : um)
    {
        if(x.second>1)
        if(x.second%2==0)
        count += x.second;

        else{
            x.second=x.second-1;
            count+= x.second;
        }
        
    }
    
    pair_count=count/2;
    cout<<pair_count;
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter n:";
    cin >> n;

    cout << "Enter array elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
// 6 5 2 3 5 2 2 1 1 5 1 3 3 3 5
    frequency(arr, n);
    return 0;
}