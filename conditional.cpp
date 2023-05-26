//let Talk about conditional statement in C++ 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"enter a value of a :(bitween 10 or 20 or 30)"<<endl;
    cin>>a;
    //let Talk about if  statement in C++
    if (a == 10) {
    cout << "a is 10" << endl;
}
//let Talk about if else statement in C++
    else if (a == 20) {
    cout << "a is 20" << endl;
}
//let Talk about else if  statement in C++
else if (a == 30) {
    cout << "a is 30" << endl;
    }
    //let Talk about Ternary Operator  in C++
int x = 3, y = 5, max;
max = (x > y) ? x : y;

// Outputs: 5
std::cout << "max is :"<<max << std::endl;
//let talk about switch statement in c++
int num = 2;
switch (num) {
    case 0:
        std::cout << "Zero";
        break;
    case 1:
        std::cout << "One";
        break;
    case 2:
        std::cout << "Two";
        break;
    case 3:
        std::cout << "Three";
        break;
    default:
        std::cout << "What?";
        break;
}


    return 0;
}
