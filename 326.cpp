// Power of 3

#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
     int n;

    cout<<"Enter an Integer : ";
    cin>>n;

}
class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i =0 ; i <= 19; i++){
            
            int ans = pow(3,i);
            if ( ans==n ){
                return true;
            }
        }
        return false;
    }
};