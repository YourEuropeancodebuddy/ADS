#include<iostream>
#include"prob3.h"
using namespace std;
int main(){
    WindGauge object(12);
    object.currentWindSpeed(15);
    object.currentWindSpeed(16);
    object.currentWindSpeed(12);
    object.currentWindSpeed(15);
   object.currentWindSpeed(15);
   object.dump();
   object.currentWindSpeed(16);
    object.currentWindSpeed(17);
    object.currentWindSpeed(16);
    object.currentWindSpeed(20);
   object.currentWindSpeed(17);
    object.currentWindSpeed(16);
    object.currentWindSpeed(15);
    object.currentWindSpeed(16);
   object.currentWindSpeed(20);
   object.dump();

}