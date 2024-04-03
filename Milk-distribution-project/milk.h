#ifndef MILK_H
#define MILK_H
#include<iostream>
using namespace std;

class Milk
{
private:
    string m_brandname;
    int m_quantity;
    int milkPrice;
    int m_milkId;
public:
    Milk();
    ~Milk();
    string brandname() const;
    void setBrandname(const string &newBrandname);
    int quantity() const;
    void setQuantity(int newQuantity);

};

#endif // MILK_H
