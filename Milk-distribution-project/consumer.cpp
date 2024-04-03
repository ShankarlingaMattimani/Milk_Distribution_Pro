#include "consumer.h"
#include<house.h>
void Consumer::setName(const string &newName)
{
    m_name = newName;
}

void Consumer::setPhoneNumber(const string &newPhoneNumber)
{
    m_PhoneNumber = newPhoneNumber;
}

void Consumer::setQuantity(int newQuantity)
{
    m_quantity = newQuantity;
}

void Consumer::setHouse(House *newHouse)
{
    m_house = newHouse;
}

string Consumer::name() const
{
    return m_name;
}

string Consumer::PhoneNumber() const
{
    return m_PhoneNumber;
}

int Consumer::quantity() const
{
    return m_quantity;
}

House *Consumer::house() const
{
    return m_house;
}

Consumer::Consumer()
{
    cout<<"Cnsumer Constructor called"<<endl;
    regestrationForMilk();
}

Consumer::~Consumer()
{
    cout<<"consumer destructor called"<<endl;
    delete m_house; // Deallocate dynamically allocated memory
    for (auto milk : m_milkcontainer) {
        delete milk; // Deallocate dynamically allocated memory
    }
}

void Consumer::regestrationForMilk()
{
    cout<<"Registration Function Called"<<endl;
    cout<<"Enter The Consumer Name"<<endl;
    cin>>m_name;
    cout<<"Enter The Consumer Phonenumber"<<endl;
    cin>>m_PhoneNumber;
    cout<<"Enter The Milk Quantity You Want"<<endl;
    cin>>m_quantity;
   m_house = new House;

}

void Consumer::display()
{
    cout<<"Consumer Name="<<m_name<<","<<"PhoneNumber="<<m_PhoneNumber<<","<<"Milk quantity="<<m_quantity<<endl;
    m_house->displayHouses();
}


void Consumer::takeMilkfromDistrubutor(Milk* newmilk)
{
    m_milkcontainer.push_back(newmilk);
    std::cout<<"milk received by "<<m_name<<std::endl;
}

int Consumer::milkOrderedQuantity()
{
    return m_quantity;
}
