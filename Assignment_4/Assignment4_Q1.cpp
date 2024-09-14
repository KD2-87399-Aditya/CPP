#include<iostream>
using namespace std;

class Times{
    int hrs;
    int min;
    int sec;
public:
    Times(){
        this->hrs = 00;
        this->min = 00;
        this->sec = 00;
        
    }
    Times(int h, int m, int s){
        this->hrs = h;
        this->min = m;
        this->sec = s;

    }
    int getHour(int hrs){
        return hrs;

    }
    int getMinute(int min){
        return min;

    }
    int getSeconds(int sec){
        return sec;


    }
    void printTime(){
        cout<<"Time: "<<hrs<<","<<min<<","<<sec;

    }
    void setHour(int hrs){
        hrs = hrs;


    }
    void setMinute(int min){
        min = min;

    }
    void setSeconds(int sec){
        sec = sec;

    }
    void inputTime(){
        cout<<endl;
        for(int i = 1; i<7; i++){
            cout<<"---";
        }
        cout<<endl;
        cout<<"Enter hours: "<<endl;
        cin>>hrs;
        cout<<"Enter minutes: "<<endl;
        cin>>min;
        cout<<"Enter seconds: "<<endl;
        cin>>sec;
        for(int i = 1; i<7; i++){
            cout<<"---";
        }
        cout<<endl;
    }
};
int main(){
    //Time t1;
 
    Times **ptr = new Times *[5];
    for(int i = 0; i<5; i++){
        ptr[i] = new Times;
    }
    for(int i = 0; i<5; i++){
        ptr[i]->inputTime();
        ptr[i]->printTime();
    }

}