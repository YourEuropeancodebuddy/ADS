#include<iostream>
#include<deque>
class WindGauge{
  private:
  int period;
  public:
    WindGauge(int period);
    void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    int average() const;
     // a qeue to store the spped
    void dump() const;
};
