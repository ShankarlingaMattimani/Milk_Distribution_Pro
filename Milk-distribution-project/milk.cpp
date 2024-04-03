#include "milk.h"

Milk::Milk()
{
    cout<<"Milk constructor called"<<endl;
}

Milk::~Milk()
{
    cout<<"milk destructor called"<<endl;
}
string Milk::brandname() const
{
    return m_brandname;
}

void Milk::setBrandname(const string &newBrandname)
{
    m_brandname = newBrandname;
}

int Milk::quantity() const
{
    return m_quantity;
}

void Milk::setQuantity(int newQuantity)
{
    m_quantity = newQuantity;
}



