#include "processmenuchoice.h"
#include<iostream>
using namespace std;
ProcessMenuChoice::ProcessMenuChoice()
{
    cout<<"ProcessMenuChoice constructor called"<<endl;
}

ProcessMenuChoice::~ProcessMenuChoice()
{
    cout<<" process menu choice destructor called"<<endl;
}

void ProcessMenuChoice::displyMenu()
{
    cout<<"Welcome to Milk Business"<<endl;
    int choice = 1;

    while(choice)
    {

        cout<<"  1.ADD HOUSE FOR MILK DISTRIBUTION  " <<endl;
        cout<<"  2.DISPLAY ALL HOUSES TO DISTRIBUTE "  <<endl;
        cout<<"  3.TOTAL HOW MUCH QUANTITY NEEDED   "    <<endl;
        cout<<"  4.DISTRIBUTOR BOUGHT MILK FROM HEADQUATERS "<<endl;
        cout<<"  5.DISTRIBUTE MILK TO CONSUMERS"<<endl;
        cout<<"  6.EXIT"<<endl;


        cin>>choice;

        switch(choice)
        {
        case 1:
            m_distributor.addHouse();

            break;
        case 2:
            m_distributor.displayHouses();
            break;


        case 3:
            m_totalMilkNeeded= m_distributor.totalMilkRequired();
            cout<<"total milk needed"<<m_totalMilkNeeded<<endl;
            break;
        case 4:
            m_totalMilkReceived=m_distributor.getMilkFromHeadQuaters(m_totalMilkNeeded);
            cout<<"total milk recieved"<<m_totalMilkReceived<<endl;
            break;
        case 5:
            m_distributor.distributeMilkToConsumers();
            break;

        case 6:
            cout<<"Exit From the Program"<<endl;
            exit(0);
            break;
        default:
            cout<<"please try again"<<endl;

        }

    }
}
