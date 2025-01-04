// Compliment of Base 10 Integer 

#include<iostream>
#include<math.h>

using namespace std;

int main (){
    int n ;
    
    cout<<"Enter an integer : " ;
    cin>>n;

    int m = n;
    int mask=0;

    if (n==0){return 0;}

    while(m!=0){
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    int ans = (~n) & mask;
    cout<<ans;

}



    