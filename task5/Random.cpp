#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    // generating a random number
    srand (time(0));
    int daysuntilexpiration = rand()%11;

    if (daysuntilexpiration <= 10){
        cout << "Your subscription will expire soon."<<"Renew now."<<endl;
    }
    else if (daysuntilexpiration <= 5){
        cout << "Your subscription expires in "<<daysuntilexpiration<<"days time." << "Renew now and save 10%" << endl;
   }
   else if (daysuntilexpiration <= 1){
      cout << "Your subscription expires within a day!" << "Renew now and save 20%" <<endl;
   }
   else if (daysuntilexpiration == 0){
    cout << "Your subscription is expired" << endl;
   }
   else { 
    cout << "You have an active subscription" << endl;
   }

   return 0;

    


}