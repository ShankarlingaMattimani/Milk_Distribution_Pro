#ifndef CONSUMER_H
#define CONSUMER_H
#include "house.h"
#include "milk.h"
#include<iostream>
#include <vector>
#
using namespace std;

class Consumer
{
private:
    string m_name;
    string m_PhoneNumber;
    int m_quantity;
    House* m_house;
    std::vector<Milk*> m_milkcontainer;

public:
    Consumer();
    ~Consumer();
    void regestrationForMilk();
    void display();
    int milkOrderedQuantity();
    void takeMilkfromDistrubutor(Milk *newmilk);

    void setName(const string &newName);
    void setPhoneNumber(const string &newPhoneNumber);
    void setQuantity(int newQuantity);
    void setHouse(House *newHouse);
    string name() const;
    string PhoneNumber() const;
    int quantity() const;
    House *house() const;
};

#endif // CONSUMER_H
