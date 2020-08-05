#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
int x,i,b,step,rows; //declaring the type of variables 


cout<<"This program calulates and displays a Logarithm Table"<<endl;
cout<<"Enter the number of rows you want calculated and displayed: "<<endl;
cin>> rows;//asking the user input the number of rows 

cout << "x           log(x)     log2(x)    ln(x)" << endl;
cout.width(10);
cout.precision(6);

x=1;


for (i = 0;i<rows;i++)
{

    b = log10(x); //calculting the power of 10 for each step of the row the user inputs
    step = pow(10,b); //calculting the value of each step

    cout << setw(10) << x
      << setw(10) << fixed << log10(x)
      << setw(10) << fixed << log2(x)
     << setw(10) << fixed << log(x) << endl;
    x=x+step;
}
return 0;
}