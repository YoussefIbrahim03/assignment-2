//
//  main.cpp
//  assignment 2
//
//  Created by Youssef Ibrahim on 10/9/22.
//

#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include "person.h"
#include "customer.h"
#include "mechanic.h"

using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time(nullptr)));
    queue<mechanic> mechanicsqueue;
    mechanic sarah, john, jack;
    sarah.setname("sarah");
    john.setname("john");
    jack.setname("jack");
    mechanicsqueue.queue::push(sarah);
    mechanicsqueue.queue::push(john);
    mechanicsqueue.queue::push(jack);
    appointment a1,a2,a3,atime;
    
    a1.hours=rand()%24+1;
    a1.mins=rand()%60+1;
    a2.hours=rand()%24+1;
    a2.mins=rand()%60+1;
    a3.hours=rand()%24+1;
    a3.mins=rand()%60+1;
    atime.hours=1;
    
    sarah.setarray(atime);
    john.setarray(atime);
    jack.setarray(atime);
    
    customer ahmed, dalal, hamed;
    
    ahmed.construct("ahmed", 001, 39, a1);
    dalal.construct("dalal", 002, 20, a2);
    hamed.construct("hamed", 003, 31, a3);
    
    
    for(int i=0;i<3;i++)
    {
        if((mechanicsqueue.front()).isavailable(a1))
        {
            cout << "mechanic "<< (mechanicsqueue.front()).getname() <<" available\n";
            ahmed.setmechid(i);
            ahmed.printinfo();
            
        }
        else
        {
            cout << "mechanic "<< (mechanicsqueue.front()).getname() <<" not available\n";
            mechanicsqueue.pop();
        }
        cout << endl << endl << endl << endl;
    }
    
    mechanicsqueue.queue::push(sarah);
    mechanicsqueue.queue::push(john);
    mechanicsqueue.queue::push(jack);
    
    for(int i=0;i<3;i++)
    {
        if((mechanicsqueue.front()).isavailable(a2))
        {
            cout << "mechanic "<< (mechanicsqueue.front()).getname() <<" available\n";
            dalal.setmechid(i);
            dalal.printinfo();
        }
        else
        {
            mechanicsqueue.pop();
        }
        cout << endl << endl << endl << endl;
    }
    
    mechanicsqueue.queue::push(sarah);
    mechanicsqueue.queue::push(john);
    mechanicsqueue.queue::push(jack);
    
    for(int i=0;i<3;i++)
    {
        if((mechanicsqueue.front()).isavailable(a3))
        {
            cout << "mechanic "<< (mechanicsqueue.front()).getname() <<" available\n";
            hamed.setmechid(i);
            hamed.printinfo();
        }
        else
        {
            mechanicsqueue.pop();
        }
        cout << endl << endl << endl << endl;
    }
    
    mechanicsqueue.queue::push(sarah);
    mechanicsqueue.queue::push(john);
    mechanicsqueue.queue::push(jack);
    
    
    return 0;
}
