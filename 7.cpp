//Reverse Integer
#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int x , n , rev =0 , dig;
    cout<<"Enter the value of X : ";
    cin>> x ;
    int i =0 ;

    if (x >= 0){
        n =x ;
        while(n != 0){
            dig= n %10;
            if ((rev > INT_MAX/10)||(rev < INT_MIN/10)){return 0;}
            rev = dig + (10 * rev) ;
            n = n / 10 ;

        }
    }
    cout<<"The reverse of "<< x <<" is : "<<rev<<endl;
}