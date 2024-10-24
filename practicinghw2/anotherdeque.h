#include<deque>
class WindGauge {;
private:
  int period;
    // add properties and/or method(s) here
public:
    WindGauge(int period =12 );
    void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    int average() const;
    void dumping() const;
};