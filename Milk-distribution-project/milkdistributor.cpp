#include "milkdistributor.h"
#include<consumer.h>
#include<fstream>
MilkDistributor::MilkDistributor()
{
    cout<<"MilkDistributor constructor called"<<endl;
}

MilkDistributor::~MilkDistributor()
{
    cout<<"milk destributor destructor called"<<endl;
    for (auto consumer : m_consumerDetails)
    {
        delete consumer;
    }
    for (auto milk : m_milkContainer)
    {
        delete milk;
    }
}

void MilkDistributor::addHouse()
{
    cout<<"Add House Function Called"<<endl;
    Consumer *newConsumer=new Consumer;
    m_consumerDetails.push_back(newConsumer);

}

void MilkDistributor::displayHouses()
{
    for(auto& consumer:m_consumerDetails)
    {
        consumer->display();

    }

}



void MilkDistributor::distributeMilkToConsumers()
{
  for(auto& Consumer:m_consumerDetails)
    {
        Milk* newMilk=m_milkContainer.back();
        m_milkContainer.pop_back();
        Consumer->takeMilkfromDistrubutor(newMilk);

    }

}

int MilkDistributor::totalMilkRequired()
{

    int orderSum=0;
    for(auto& consumer:m_consumerDetails)
    {
        orderSum=orderSum+consumer->milkOrderedQuantity();
    }
    return orderSum;
}




int MilkDistributor::getMilkFromHeadQuaters(int totalMilk)
{
    cout<<"getmilk function called"<<endl;

    std::cout<<"total milk requested="<<totalMilk<<std::endl;
    m_milkContainer.clear();
    for(int i=0;i<totalMilk;i++)
    {
        Milk* newMilk=new Milk;
        m_milkContainer.push_back(newMilk);

    }
    return m_milkContainer.size();


}
