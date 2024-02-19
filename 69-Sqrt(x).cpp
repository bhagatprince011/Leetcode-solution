#include <iostream>

using namespace std;

int mySqrt(int x) {
    int temp = 1;
    int sq = 1;
    while (sq <= x) {
        
        temp += 1;
        sq = temp*temp;
    }
    if(sq==x) return temp;
    return temp-1;

}

int main() {
    cout<<"\n";
    // Your code here

    int input=0;
    cout<<"Input : ";
    cin>>input;
    cout<<"Square root of "<<input<<" is : "<<mySqrt(input)<<endl;

    // Your code end here
    cout<<"\nCheers 🍻";
    return 0;
}