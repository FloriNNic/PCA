//
//  main.cpp
//  Bus
//
//  Created by Florin Nica on 17.01.2018.
//  Copyright © 2018 Florin Nica. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    
    int a,b,f,k;
    int distance_to_station,current_gas;
    cin >> a >> b >> f >> k;
    int nrmin = 0;
    
    current_gas = b;
    distance_to_station = f;
    
    for (int i=1; i<k; i++){
        if (current_gas >= a+(a-distance_to_station)){
            current_gas -= a;
        }
        else if (current_gas >= distance_to_station){
            nrmin++;
            current_gas = b-(a-distance_to_station);
        }
        else{
            cout<<-1;
            return 0;
        }
        distance_to_station = a-distance_to_station;
    }
    if(current_gas >= a){
        distance_to_station = distance_to_station;//nothing happens
    }
    else if (current_gas >= distance_to_station && b >= a-distance_to_station){
        nrmin++;
    }
    else{
        nrmin = -1;
    }
    cout << nrmin;

    
    return 0;
}
//0---2------6
//24 --- 2 refuels
