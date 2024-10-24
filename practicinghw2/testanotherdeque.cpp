#include<iostream>
#include"anotherdeque.h"
using namespace std;
int main(){
WindGauge object(12);
object.currentWindSpeed(15);
object.currentWindSpeed(16);
object.currentWindSpeed(12);
object.currentWindSpeed(15);
object.currentWindSpeed(15);
object.dumping();
object.currentWindSpeed(16);
object.currentWindSpeed(17);
object.currentWindSpeed(16);
object.currentWindSpeed(16);
object.currentWindSpeed(20);
object.currentWindSpeed(17);
object.currentWindSpeed(16);
object.currentWindSpeed(15);
object.currentWindSpeed(16);
object.currentWindSpeed(20);
object.dumping();

return 0;
}