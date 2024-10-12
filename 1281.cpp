#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int sum=0,p=1;
    while(n!=0){

        int dig = n%10 ;
        p=p*dig;
        sum=sum+dig;
        n=n/10;
    }
    int an=p-sum;
    cout<<an;
}
