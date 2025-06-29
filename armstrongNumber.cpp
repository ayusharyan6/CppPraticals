#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum = 0;
    while(n>0){
        int lastD = n%10;
        sum += lastD * lastD * lastD;
        n = n/10;
    }
    cout<<sum<<endl;
    if(sum == n){
        cout<<"Armstrong number."<<endl;
    }else{
        cout<<"Not an Armstrong number.";
    }
    return 0;
}