#include <iostream>
#include <cstdlib> //importing libraries //rand is defined here
#include <ctime> // need to use s that we can use the computer system's time
using namespace std;

int main (){

    srand(time(NULL)); //Seeds random number generator
    int throw1, throw2, total, x; // declaring variables
    x = 1; //initializing x
    do{
        throw1 = (rand() %6 +1); //generating random values for dice 1 roll
        throw2 = (rand() %6 +1);// generating random values for dice 2 roll
        total = throw1 +throw2; //computing the total value| need this to determine of user won,lost or need to roll again
        cout << "Die 1: "<< throw1<< "          "<<"Die 2: "<<throw2<<"         "<<"Total: "<<total<<endl; //Outputting  and formatting
        if (total == 4 || total == 6|| total == 12|| total == 8|| total == 10){ //setting up conditionals to test if  re-rolling is required
           cout<<"Roll again..."<<endl; //outputting
         }
         else if (total ==7 || total == 9 || total ==11){ //set up condition if you win and then break out
            cout<<"You win!!"<<endl;
            break;
         }
         else if (total ==2 || total ==3 || total == 5){//set up condition if you lose and then break out of condition
         cout<<"You lost!"<<endl;
         break;
         }
         else{
            cout<<"ERROR"<<endl;
         }
         total = 0; //re assigning variables if need to roll again
         throw1 =0;
         throw2 = 0;
       } while(x>0);
    return 0;
}
