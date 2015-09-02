//
//  main.cpp
//  计算星期几
//
//  Created by Mark on 15/9/2.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#include <iostream>
int modpower(int a,int b){
    if (b==0)
        return 1;
    return a%7*modpower(a,b-1)%7;
}
int main(int argc, const char * argv[]) {
    using namespace std;
    int a,b;
    cin>>a>>b;
    switch (modpower(a,b)){
case 1:
    cout<<"Monday";
    break;
case 2:
    cout<<"Tuesday";
    break;
case 3:
    cout<<"Wednesday";
    break;
case 4:
    cout<<"Thursday";
    break;
case 5:
    cout<<"Friday";
    break;
case 6:
    cout<<"Saturday";
    break;
case 0:
    cout<<"Sunday";
    break;
    }
    return 0;
}
