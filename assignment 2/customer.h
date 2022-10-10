//
//  customer.h
//  assignment 2
//
//  Created by Youssef Ibrahim on 10/9/22.
//

#ifndef customer_h
#define customer_h
#include <stdio.h>
#include "person.h"
#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
#include <iostream>

using namespace std;
class customer: public person
{
private:
    int mechanicid;
    appointment appointmentc;
public:
    void construct(string x, int ID, int AGE, appointment appointmentnum)
    {
        name=x;
        id1=ID;
        age=AGE;
        appointmentc=appointmentnum;
        
    };
    void setmechid(int mechid)
    {
        mechanicid=mechid;
    };
    void setappoint(int hours, int mins)
    {
        appointmentc.hours=hours;
        appointmentc.mins=mins;
    };
    int getmechid()
    {
        return mechanicid;
    };
    appointment getappoint()
    {
        return appointmentc;
    };
    void printinfo()
    {
        cout << "name is " << getname() << endl << "id is " << getid() << endl << "age is " << getage() << endl << "mechanic id is " << getmechid() << endl << "appointment time is " << this->appointmentc.hours << endl;
    };
   bool operator > (const customer& b)
    {
        if((this->appointmentc.hours)>b.appointmentc.hours && (this->appointmentc.mins)>b.appointmentc.mins)
            return true;
        else
            return false;
    };
    bool operator < (const customer& b)
    {
        if((this->appointmentc.hours)>b.appointmentc.hours && (this->appointmentc.mins)>b.appointmentc.mins)
            return true;
        else
            return false;
    };
    bool operator == (const customer& b)
    {
        if((this->appointmentc.hours)>b.appointmentc.hours && (this->appointmentc.mins)>b.appointmentc.mins)
            return true;
        else
            return false;
    };

};


#endif /* customer_h */
