//
//  mechanic.h
//  assignment 2
//
//  Created by Youssef Ibrahim on 10/9/22.
//

#ifndef mechanic_h
#define mechanic_h
#include <stdio.h>
#include "person.h"
#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
#include <iostream>

using namespace std;
class mechanic: public person
{
private:
    int counter=0;
    appointment *arr = new appointment[24];
public:
    void setcounter()
    {
        counter=counter+1;
    };
    void setarray(appointment time)
    {
        for(int i=1;i<=24;i++)
        {
            arr[i]=time;
            time.hours++;
        }
    };
    int getcounter()
    {
        return counter;
    };
    appointment gettime()
    {
        return arr[24];
    };
    bool isavailable(appointment time)
    {
        for(int i=0;i<24;i++)
        {
            if(arr[i].hours==time.hours)
            {
                arr[i].hours=200;
                return true;
            }
        }
        return false;
    };
    virtual void printinfo()
    {
        cout << getname();
    };
};

#endif /* mechanic_h */
