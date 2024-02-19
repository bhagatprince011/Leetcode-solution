#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    int countZero = 0, countOne = 0;

    while (n>0) {
        if (n&1) {
            countOne++;
        }else {
            countZero++;
        }
        n = n >> 1;
    }
    
    return countOne==1 ? true : false;
}

int main() {
    // Your code here
    int input=0;
    cout<<"Input: ";
    cin>>input;
    cout<<isPowerOfTwo(input)<<endl;

    return 0;
}