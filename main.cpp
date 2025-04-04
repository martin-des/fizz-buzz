#include <iostream>
#include <string>
using namespace std;

void fizzbuzz(int n){
    for(int i=1; i<n ; ++i){
        if(i%3==0 &&i%5==0){
            cout<<"Fizzbuss"<<endl;
        }else if (i%3==0)
        {
            cout<<"fizz"<<endl;
        }else if(i%5==0){
            cout<<"buss"<<endl;
        }else{
            cout<<i<<endl;
        }
        
    }
}

int main(){
    int n;
    cout<<"Enter a nummer"<<endl;
    cin>>n;
    fizzbuzz(n);
    return 0;
}
