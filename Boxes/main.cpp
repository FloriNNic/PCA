#include <iostream>
#include <map>

using namespace std;

int n, lenght, Max;
map<int,int> box;

int main()
{
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin >> lenght;
        box[lenght]++;
        Max = max(Max,box[lenght]);
    }
    cout<<Max;
    return 0;
}


