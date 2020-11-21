// Character array is the array which is diffrent from the integer array
// it contain characters instead of integers.
// Instialization of char arry is 
// char a[] = {'h','e','l','l','o'};


#include<iostream>
using namespace std;

int main(){
    
    // 1st way of inisilization
    char a[] = {'h','e','l','l','o','\0'}; //always add last element as null because it terminates 
    
    cout<<"First way of defining array"<<a<<"="<<sizeof(a)<<endl;


    // 2nd way is fixed inisilization 
    char s[1000] = {}; //it totally depends on me to fill value in starting or it dhould user input

    cin.getline(s,1000);
    cout<<s<<endl;




    return 0;
}