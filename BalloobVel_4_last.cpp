#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float distFinal,finalSpeed,height;
    cout<<"How far is your friend(feet)";
    cin>>distFinal;//This is the walking distance(dn+!)
    cout<<"How fast are they walking(feet/sec)";
    cin>>finalSpeed;//This is the speed(vn+1)
    cout<<"How high are you before dropping your balloon(feet)";
    cin>>height;
    float cAir,time1,time2=0;
    cAir=0.0012;

    time1 = distFinal/finalSpeed;

    float distBalloon=0,speedofBalloon;
    while (distBalloon<height)
    {
       distBalloon= distBalloon+(speedofBalloon/1000);
       speedofBalloon= speedofBalloon+0.032 -cAir * speedofBalloon;
       time2=time2+0.001;
    }

    cout<<fixed<<setprecision(2);
    cout << "It will take "<<time1<<" seconds for them to reach the balloon point " << endl;
    cout << "It will take "<<time2<<" seconds for your balloon to travel to the ground" << endl;
    if (time1==time2)
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
