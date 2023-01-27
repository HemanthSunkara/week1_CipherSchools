#include<iostream> 
using namespace std;

// this is the iterative type of function
// int power(int base, int pow){
//     int num = 1;

//     for(int i = 0; i < pow; i++){
//         num*=base;  //num = num*base; 
//     }

//     return num;
// }

int power(int base, int pow){
    // 1. base case - It is a termination condition for a recursive function
    // 2. assumption.
    //3. calculation.

    if(pow == 0) return 1;

    int resVal = power(base, pow-1);
    
    return resVal*base;
}

int main(){

   cout<<power(2,3);
    return 0;
}
