//
//  main.cpp
//  HelloWorld
//
//  Created by Florin Nica on 17.12.2017.
//  Copyright © 2017 Florin Nica. All rights reserved.
//

#include <iostream>
using namespace std;

struct point{
    int x;
    int y;
};

int main(int argc, const char * argv[]) {
    
    int n, nrs=0, nrd=0;
    cin>>n;
    point point;
    for (int i=1; i<=n; ++i)
    {
        cin>>point.x>>point.y;
        if(point.x<0)
            nrs++;
        else nrd++;
    }
    if (nrs==1 ||nrs==0||nrd==0 || nrd==1)
    {
        cout << "Yes" << endl;
    }
    else cout<< "No" << endl;
    return 0;
}
