#include "house.h"


House::House()
{
    cout<<"House construtor called"<<endl;
    houseDetails();
}

House::~House()
{
    cout<<"house destructor called"<<endl;
}

void House::houseDetails()
{
    cout<<"House details function called"<<endl;

    cout<<"Enter the house number"<<endl;
    cin>>m_houseNumber;
    cout<<"Enter the house longitude"<<endl;
    cin>>m_houseLongitude;
    cout<<"Enter the house latitude"<<endl;
    cin>>m_houseLatitude;
    cout<<"THE CUSTOMER DETAILS ADDED SUCCESSFULLY"<<endl;
}

void House::displayHouses()
{
    cout<<"House Number="<<m_houseNumber<<","<<"House langitude="<<m_houseLongitude<<","<<"House latitude="<<m_houseLatitude<<endl;
}
string House::houseNumber() const
{
    return m_houseNumber;
}

void House::setHouseNumber(const string &newHouseNumber)
{
    m_houseNumber = newHouseNumber;
}

string House::houseLatitude() const
{
    return m_houseLatitude;
}

void House::setHouseLatitude(const string &newHouseLatitude)
{
    m_houseLatitude = newHouseLatitude;
}

string House::houseLongitude() const
{
    return m_houseLongitude;
}

void House::setHouseLongitude(const string &newHouseLongitude)
{
    m_houseLongitude = newHouseLongitude;
}
