//let talk about arrays in c++ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks[3]; // Definition
    marks[0] = 92;
    marks[1] = 97;
    marks[2] = 98;
    cout << marks[0]<<endl;
    cout << marks[1]<<endl;
    cout << marks[2]<<endl; // Outputs: 98
    //array manipulation
    marks[1]=100;//index 1 data is overwrited
    cout << marks[1]<<endl; // Outputs: 100
    cin>>marks[2];
    cout << marks[2]; // Output is you are enter value

    cout<<endl;
    //multidimensional arrays
    int x[2][6] = {
    {1,2,3,4,5,6}, {6,5,4,3,2,1}
    };
    for (int i = 0; i < 2; ++i) {
         for (int j = 0; j < 6; ++j) {
        std::cout << x[i][j] << " ";
        }
    }
// Outputs: 1 2 3 4 5 6 6 5 4 3 2 1 

    return 0;
}