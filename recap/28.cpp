//multiple catch block

#include <iostream>
using namespace std;

int main(){
    try{
        int x;
        cout<<"Enter a number: ";
        cin>>x;
        if (x<0) throw x; //throws an integer
        else if (x==0) throw "Zero is not allowed"; //throws a string
        else 
        cout<<"Square: "<< x*x<<endl;
    }
    catch (int e) {
        cout<<"caught an integer: "<<e<<endl;
    }
    catch(const char* msg){
        cout<<"caught a string exception: "<< msg << endl;
    }

    return 0;
}