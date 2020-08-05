#include <iostream> 
#include <iomanip>// importing relavent libraries
#include <cmath>

using namespace std;

int main()
{
    float distFinal,finalSpeed,height;
    cout<<"How far is your friend(feet)";
    cin>>distFinal;//walking distance(dn+1)
    cout<<"How fast are they walking(feet/sec)";
    cin>>finalSpeed;//speed(vn+1)
    cout<<"How high are you before dropping your balloon(feet)";
    cin>>height;
    float cAir,time1,time2=0; //declaring variable
    cAir=0.0012; //initializing

    time1 = distFinal/finalSpeed; //from using speed = dist/timr = basic physics formula

    float distBalloon=0,speedofBalloon; //declaring and initializing
    while (distBalloon<height) // while loop runs based on the condition
    {
       distBalloon= distBalloon+(speedofBalloon/1000);   //mathematical calculations
       speedofBalloon= speedofBalloon+0.032 -cAir * speedofBalloon;
       time2=time2+0.001;
    }

    cout<<fixed<<setprecision(2);
    cout << "It will take "<<time1<<" seconds for them to reach the balloon point " << endl;
    cout << "It will take "<<time2<<" seconds for your balloon to travel to the ground" << endl;
    if (abs(time2-time1)<0.01) //series of conditionals to test when and if the balloon hits
    {
        cout<<"Bingo, you hit your friend successfully"<<endl;
    }
    else if (time1>time2)
    {
        cout<<"If you wait "<<time1-time2<<" seconds,you will hit them"<<endl;
    }
    else
    {
        cout<<"It's too late to drop the balloon"<<endl;
    }

    return 0;
}
