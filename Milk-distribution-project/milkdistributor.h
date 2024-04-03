#ifndef MILKDISTRIBUTOR_H
#define MILKDISTRIBUTOR_H
#include "consumer.h"
#include<iostream>
#include<list>
using namespace std;
class MilkDistributor
{
private:
    string name;
    list<Consumer*>m_consumerDetails;
   vector<Milk*> m_milkContainer;
public:
    MilkDistributor();
    ~MilkDistributor();
    void addHouse();
    void displayHouses();
    void distributeMilkToConsumers();
    int totalMilkRequired();
    int getMilkFromHeadQuaters(int totalMilk);


};

#endif // MILKDISTRIBUTOR_H
