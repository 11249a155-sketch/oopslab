#include<iostream>
using namespace std;
class Time
{
    private:
    int hours,minutes;
    public:
    Time():hours(0),minutes(0)
 void getTime();

{
    cout<<"enter the hours:";
    cin>>hours;
    cout<<"enter the minutes:"
    cin>>minutes;
}
void addTime(const Time&t1,const Time&t2); 
    minutes=t1.minutes+t2.minutes;
    hours=t1.hours+t2.hours+(minutes/60)
    minutes=minutes%60;
}
void displayTime()const
{
    cout<<"Time:"<<hours<<"hours and "<< minutes <<"minutes"<<endl;
}
};
int main()
 {
    time t1,t2,t3;
    cout<<"enter time 1:"endl;
    t1.getTime();
    cout<<"enter time 2:"endl:
    t2.getTime();
    t3.addTime(t1,t2);
    cout<<"Time 1:";
    t1.displayTime();
    cout<<"Time 2:";
    t2.displayTime();
    cout<<"added Time:";
    t3.display();
    return 0;
}