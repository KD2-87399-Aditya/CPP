// #ifndef Date_h
// #define Date_h
// #ifndef Person_h
// #define Person_h
#include<iostream>
using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;

    public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;   
    }
    void acceptDate()
    {
        cout<<"Enter day: "<<endl;
        cin>>day;
        cout<<"Enter month: "<<endl;
        cin>>month;
        cout<<"Enter year: "<<endl;
        cin>>year;
    }
    void setDay(int day)
    {
        this->day = day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    int getDay()
    {
        return day;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }
    void displayDate()
    {
    cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
    }


};

class Person :Date{
    
    string name;
    string address;
    Date dob;
    
    public:
    Person()
    {
        name = " ";
        address = " ";
        
    }
    Person(string name, string address, int day, int month, int year): dob(day, month, year)
    {
        this->name = name;
        this->address = address;
        this->dob.setDay(day);
        this->dob.setMonth(month);
        this->dob.setYear(year);

    } 
    void acceptPerson()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter Address: "<<endl;
        cin>>address;
        cout<<"Enter date: "<<endl;
        dob.acceptDate();
    }
    void setname(string name)
    {
        this->name = name;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    
    string getName()
    {
        return name;
    }
    string getAddress()
    {
        return address;
    }
    
    void DisplayPerson()
    {cout << "Enter the name - ";
        cin >> name;
        cout << "Enter the address - ";
        cin >> address;
        cout << "Enter the Date of joining - " << endl;
        dob.displayDate();
    }
};


int main()
{
    Person p1;
    p1.acceptPerson();
    Person p2("Khushi", "Smriti Nagar", 21, 07, 2001);
    p1.DisplayPerson();
    p2.DisplayPerson();

    return 0;
}

