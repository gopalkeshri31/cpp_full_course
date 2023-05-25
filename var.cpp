// Let's talk about variable using in C++ program
// in this example I am talking about datatype
// DataType    Size	     Range
// int	        4 bytes    	  -231 to 231-1
// float	    4 bytes    	  N/A
// double	    8 bytes    	  N/A
// char	    1 byte	      -128 to 127
// bool	    1 byte	      true / false
// void	    N/A	          N/A    
// wchar_t	    2 or 4bytes	  1 wide character
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int number=5;//this is a integer var
    float f=0.40;// this is a floating number var
    double PI = 3.14159; //this is floating number var
    char yes ='y';//this is a character var
    string s="gopal";//this is a string var
    bool isrigl=true;//this is a boolean var

    const int l_num=31;//this is a const variable

    
    // let print all variables 
    cout<<"this is a int"<<" "<<number<<endl;
    cout<<"this is a float"<<" "<<f<<endl;
    cout<<"this is a double"<<" "<<PI<<endl;
    cout<<"this is a char"<<" "<<yes<<endl;
    cout<<"this is a string"<<" "<<s<<endl;
    cout<<"this is a bool"<<" "<<isrigl<<endl;
    cout<<"this is a cont int"<<" "<<l_num<<endl;
    //special C++11 features
    int age {18}; //since c++11
    cout<<age;//print 18
    return 0;
}

// this is a output blow cpp program
// output
// this is a int 5
// this is a float 0.4
// this is a double 3.14159
// this is a char y
// this is a string gopal
// this is a bool 1
// this is a cont int 31
// 18