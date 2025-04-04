#include <iostream>
using namespace std;

int power(int n){

    //base case
    if (n==0){
        return 1;
    };

    //reccursive relation
    int smallerOutput = power(n-1);
    int output = 2 * smallerOutput;
    return output; 
}


int main (){
    int n ;
    cin >> n;

    int ans = power(n);
    cout << ans << endl;
    return 0;
}