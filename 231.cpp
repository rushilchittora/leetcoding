// Power of 2 

#include<iostream>
#include<math.h>

using namespace std;

int main (){
    
    int n;

    cout<<"Enter an Integer : ";
    cin>>n;

    for(int i = 0 ; i <= 30 ; i++){
        int ans = pow(2,i);

        if (n==ans){cout<<"True";}

    }
    cout<<"False";
}