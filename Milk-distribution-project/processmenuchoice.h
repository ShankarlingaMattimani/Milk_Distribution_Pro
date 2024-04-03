#ifndef PROCESSMENUCHOICE_H
#define PROCESSMENUCHOICE_H


#include "consumer.h"
#include "milkdistributor.h"
#include<list>
using namespace std;

class ProcessMenuChoice
{
private:
    int m_totalMilkNeeded=0;
    int m_totalMilkReceived=0;
    list<Consumer*>m_consumerDetails;
    MilkDistributor m_distributor;

public:
    ProcessMenuChoice();
    ~ProcessMenuChoice();
    void displyMenu();
};

#endif // PROCESSMENUCHOICE_H
