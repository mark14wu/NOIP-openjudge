//
//  main.cpp
//  蓄水池水管
//
//  Created by Mark on 15/9/2.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    double a,b,c,d,volume=0,time=0;
    int count=0;
    cin>>a>>b>>c>>d;
    while (1) {
        switch (count%4) {
            case 0:
                volume += 1/a;
                break;
            case 1:
                volume -= 1/b;
                break;
            case 2:
                volume += 1/c;
                break;
            case 3:
                volume -= 1/d;
                break;
        }
        count++;
        if (volume>0.99)  //这里很关键，如果写1.00会WA
            break;
    }
    switch (count%4){
        case 1:
            time=count-(volume-1)*a;
            break;
        case 3:
            time=count-(volume-1)*c;
            break;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<time;
    return 0;
}
