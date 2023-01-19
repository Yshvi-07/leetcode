class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>a;
      double Kelvin = celsius+273.15;
     double Fahrenheit = celsius * 1.80 + 32.00;
      a.push_back(Kelvin);
       a.push_back(Fahrenheit);
      return a;
    }
};
