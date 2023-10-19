#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool prime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime = false;
        }
    }
    if(prime==0){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }

    return 0;
}