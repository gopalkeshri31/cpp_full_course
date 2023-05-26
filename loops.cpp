// let talk about loops in c++ 


#include<bits/stdc++.h>
using namespace std;
int main()
{
// let talk about while loop in c++ 
    int i = 0;
    while (i < 6) {
    cout << i++;
    }
// let talk about do-while loop in c++
    do{
        cout<<i++;
    }while (i<=5);
// let talk about for loop in c++
    for ( i = 0; i < 5; i++)
    {
        cout<<i<<endl;
    }
// let talk about Continue statements in c++ 

for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;
    }
    cout << i;
} // Outputs: 13579


// let talk about Break statements in c++ 
int password, times = 0;
while (password != 1234) {
    if (times++ >= 3) {
        cout << "Locked!\n";
        break;
    }
    cout << "Password: ";
    cin >> password; // input
}

    return 0;
}