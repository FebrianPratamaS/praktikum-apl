#include <iostream>
using namespace std;

int main() {
    int number[4] = {1,2,3,4};

    int totalByte = sizeof(number);
    int singleByte = sizeof(number[0]);

    cout << totalByte << "\n" 
    << singleByte;
    return 0;
}