#include<deque>
#include<algorithm>
#include<numeric>
#include"prob3.h"
std:: deque<int> dint;
WindGauge::WindGauge(int period){
    this->period = 12;
};
void WindGauge:: currentWindSpeed(int speed){
int i;
for( i = 0; i<period-1; i++){
    if(i< period-1){
    dint.push_back(speed);
    }
    else{
        dint.pop_front();
        dint.push_back(speed);
    }
}

}
int WindGauge:: highest() const{
    auto maxelement = std::max_element(dint.begin(), dint.end());
    if(maxelement!= dint.end()){
        return *maxelement;
    }
    else{
        std::cout<<" the deque is empty"<<std::endl;
        return -1;
    }


}
int WindGauge:: lowest() const{
auto minelement = std::min_element(dint.begin(), dint.end());
    if(minelement!= dint.end()){
        return *minelement;
    }
    else{
        std::cout<<" the deque is empty"<<std::endl;
        return -1;
    }
}
int WindGauge::average() const{
int  sum = std::accumulate(dint.begin(), dint.end(), 0);
double average = static_cast<double>(sum)/dint.size();
return average;
}
void WindGauge::dump() const{
    std::cout<<" the average is " << average()<<std::endl;
    std::cout<<" the lowest value is "<<lowest()<<std::endl;
    std::cout<<" the highest is "<<highest()<<std::endl;
}