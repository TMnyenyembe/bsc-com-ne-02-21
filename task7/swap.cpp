#include<iostream>
using namespace std;

// Function to swap the values of two integers using references
void SwapNumbers(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int varA = 25;
    int varB = 100;
    
    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;
    
    SwapNumbers(varA, varB);
    
    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;
    
    return 0;
}
