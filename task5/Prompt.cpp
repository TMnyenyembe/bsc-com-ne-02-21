#include <iostream>
#include <limits>
using namespace std;

int main() {
    int value;
  
    // prompt the user enter values between 5 and 10.
    

    while (true )
    {
        cout << " Enter integer between 5 and 10." << endl;
        cin>> value;
       
     // checking if the input is within the range
     if ( cin.fail() ||value < 5 || value > 10 ){
      cout << " invalide number." << "Try again." << endl; 
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
     }else {
      break;
     }
   }    
    cout <<"Your input has been accepted." << endl;
    
    
    return 0;
    

}