#include<iostream>
using namespace std;

class volumeCalculation{
    double len;
    double wid;
    double high;
public:
    volumeCalculation(){
        this->len = 1;
        this->wid = 3;
        this->high = 5;
    }
    volumeCalculation(double len){
        this->len = len;
        this->wid = len;
        this->high = len;
        cout<<"volume of cube : "<<len*len*len<<endl;
    }
    volumeCalculation(double len, double wid, double high){
        this->len = len;
        this->wid = wid;
        this->high = high;
    }
    void inputVolume(){
        cout<<"Enter length: "<<endl;
        cin>>len;
        cout<<"Enter width: "<<endl;
        cin>>wid;
        cout<<"Enter high: "<<endl;
        cin>>high;
    }
    void volumeDisplay(){
        
        cout<<"Volume: "<<this->len*this->wid*this->high<<endl;
    }
};
int menu(){
    int choice;
    cout<<"Enter the choice : "<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Default Volume:"<<endl;
    cout<<"2. Cube: "<<endl;
    cout<<"3. Volume of rectangle: "<<endl;
    cin>>choice;
    return choice;
}
int main(){
    int choice;
    volumeCalculation vc;
    while((choice = menu()) != 0)
    {
        switch(choice)
        {
            case 1:
            {
                
                vc.volumeDisplay();
                break;
            }
            case 2:
            {
                volumeCalculation vc(int n);
                int n;
                cout<<"Enter the value : "<<endl;
                cin>>n;
                cout<<"Cube : "<<n*n*n<<endl;

                break;

            }
            case 3:
            {
                volumeCalculation vc3;
                vc3.inputVolume();
                vc3.volumeDisplay();
                break;
            }
            default:
                cout<<"Invalid Input !!!"<<endl;
                break;
        }
    }
    
    return 0;
}