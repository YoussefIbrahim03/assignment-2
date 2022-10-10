//
//  person.h
//  assignment 2
//
//  Created by Youssef Ibrahim on 10/9/22.
//

#ifndef person_h
#define person_h
#include <stdio.h>
#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
#include <iostream>

using namespace std;

struct appointment
{
    int hours, mins;
};

class person
{
protected:
    string name;
    int id1,age;
    
public:
    
    void construct(string x, int ID, int AGE)
    {
        name=x;
        id1=ID;
        age=AGE;
    };
    void setname(string x)
    {
        name=x;
    };
    void setid (int ID)
    {
        id1=ID;
    };
    void setage(int AGE)
    {
        age=AGE;
    };
    string getname()
    {
        return name;
    };
    int getid ()
    {
        return id1;
    };
    int getage()
    {
        return age;
    };
    virtual void printinfo()=0;

};


#endif /* person_h */
