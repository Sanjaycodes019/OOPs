//nested try-catch block

#include <iostream>
using namespace std;

int main(){
    try {
        try{
            throw "inner exception!";
        } catch ( const char* msg){
            cout <<"caught inner catch: "<<msg<<endl;
            throw;//rethrow exception
        }
    }
    catch(...){
        cout<<"caught in outer catch!" <<endl;
    }
    return 0;
}
