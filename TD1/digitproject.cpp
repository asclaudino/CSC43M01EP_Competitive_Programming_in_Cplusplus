#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n ==1000)
        cout<< "1";
    else{
        while(n/10 != 0){
            int x = n%10;
            if(x == 0) x = 1;
            int y = (n/10)%10;
            if(y == 0 ) y = 1;
            int z = (n/100)%10;
            if(z == 0 ) z = 1;
            n = x*y*z;
            }
        
        cout<<n;
    }

}