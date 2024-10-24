#include<iostream>
#include<deque>
#include"anotherdeque.h"
using namespace std;


deque<int>history;
WindGauge::WindGauge(int period){
    this->period = 12;
}

void WindGauge::currentWindSpeed(int speed){
    int i= 0;
    while(i<period){
    history.push_back(speed);
    i++;
    }
    history.pop_front();
    history.push_back(speed);
}

int WindGauge:: highest() const{
    int higher = history[0];
    for(int i = 1; i<history.size()-1; i++){
        if(history[i]>higher){
            higher = history[i];
        }
    }
    return higher;
}


 int WindGauge::lowest() const{
    int lower = history[0];
     for(int i = 1; i<history.size()-1; i++){
        if(history[i]<lower){
            lower = history[i];
        }
    }
    return lower;
 }
 int WindGauge::average() const{
    int max = 0;
    for(int i = 0; i<history.size(); i++){
        max = max+history[i];
    }
    return max/history.size();
 }

 void WindGauge::dumping() const{
    cout<<"the highest is "<<highest()<<endl;
    cout<<" the lowest is "<<lowest()<<endl;
    cout<<" the average is " <<average()<<endl;
 }