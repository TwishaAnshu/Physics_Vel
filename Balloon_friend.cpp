#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    const double c_Air = 0.0012;
    double distanceFromBuilding;
    double walk_Speed
    double verDistance = 0;
    double distanceTravelled = 0;
    double velBalloon = 0
    double time1, time2;
    cout<<"How far away is your friend: " <<endl;
    cin>>distanceFromBuilding;

    cout<<"How fast is he walking: "<<endl;
    cin>>walk_Speed;

    cout<<"How high are you from the head of your friend: "<<endl;
    cin>> vertDistance;

    cout<<fixed<<setptecision(2);
    time1 = distanceFromBuilding/walk_Speed
    time2=0;
    while(distanceTravelled<verDistance){
        distanceTravelled = distanceTravelled + velballoon/1000.0;
        velBalloon +0.032 - (c_Air + velBalloon);
        time2 = time2+0.001;
    
    }
    cout<<"It will take " <<time1<<" seconds for them to reach the balloon point"<<endl;
    cout<<"It will take "<<time2<<" for your balloon to travel to the ground"<<endl;
    if(fabs(time1-time2)<=0.01){
        cout<<"Bingo, you hit your friend successfully"<<endl;

    }
    else if (time2>time1){
        cout<<"It is too late to drop your balloon"<<endl;

    }
    return 0;
}