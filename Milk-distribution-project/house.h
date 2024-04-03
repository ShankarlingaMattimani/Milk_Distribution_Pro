#ifndef HOUSE_H
#define HOUSE_H
#include<iostream>
using namespace std;

class House
{
private:
    string m_houseNumber;
    string m_houseLatitude;
    string m_houseLongitude;


public:
    House();
   ~House();
    void houseDetails();
   void displayHouses();

    string houseNumber() const;
   void setHouseNumber(const string &newHouseNumber);
   string houseLatitude() const;
   void setHouseLatitude(const string &newHouseLatitude);
   string houseLongitude() const;
   void setHouseLongitude(const string &newHouseLongitude);
};

#endif // HOUSE_H
