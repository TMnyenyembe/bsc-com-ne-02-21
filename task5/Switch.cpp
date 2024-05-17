#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    // generating one random number between 0 and 11.
    srand(time(0));
    int daysuntilexpiration = rand()%11;
    switch(daysuntilexpiration){
        case 0: "Your subscription will expire soon";
             break;
        case 1: "Your subscription expires in 2 days time";
             break;
        case 2: "Your subscription expires within a day";
             break;
        case 3: "Your subscription expired";
             break;
        case 4: cout<<"Your subscription will expire in " << daysuntilexpiration<< "days/day"<< endl;
             break;
        case 5: cout<< "your subscription will expire in "<< daysuntilexpiration<<"days/day"<< endl;
             break;
        case 6: cout<<"Your subscription will expire in "<< daysuntilexpiration<< "days/day"<< endl;
             break;
        case 7: cout<< "Your subscription will expire in "<< daysuntilexpiration<< "days/day"<< endl;
             break;
        case 8: cout<< "your subscription will expire in "<< daysuntilexpiration<< "days/day"<< endl;
             break;
        case 9: cout<< "Your subscription will expire in" << daysuntilexpiration<< "days/day"<< endl;
             break;
        case 10: cout << "your subscription will expire in" << daysuntilexpiration<<" days/day"<< endl;
             break;
             
        default: cout << "You have an active subscription";
        
    } 
}