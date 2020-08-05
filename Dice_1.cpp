#include <iostream>
#include <cstdlib> // srand is defined here
#include  <ctime>

using namespace std;

int main(){

   srand(time(0));
   int die_1 =1 + rand()%6;
   int die_2 = 1 +rand()%6;

cout<<die_1<<endl;
cout<<die_2<<endl;


  return 0;
}

