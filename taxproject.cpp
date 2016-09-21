#include <iostream>
using namespace std;

int main()
{

const double REGULAR_HOURS=40.0;
int dependent, hours;
double socsectax, fedinctax, stainctax, unidue, insdep;
double grosspay, netpay, withhold;

cout<<"Please enter Number of hours worked in a week"<<endl;
cin>>hours;
cout<<"Number of dependents"<<endl;
cin>>dependent;

if(hours > REGULAR_HOURS)
grosspay = 16.78 * REGULAR_HOURS +
(1.5)*(16.78)*(hours - REGULAR_HOURS);
else
grosspay = 16.78 * hours;

socsectax = .06 * grosspay;
fedinctax = .14 * grosspay;
stainctax = .05 * grosspay;

if (dependent >=3.)
insdep = 35;
else
insdep = 0;

unidue = 10;
withhold = socsectax + fedinctax + stainctax + insdep + unidue;
netpay = grosspay - withhold;

cout << "Gross pay = "<< grosspay << endl;
cout << "Social Security Tax = "<< socsectax<<endl;
cout <<"Federal Income Tax = "<<fedinctax<<endl;
cout<<"State Income Tax ="<< stainctax<<endl;
cout<<"Total withholdings = "<<withhold<<endl;
cout<<"Net take home pay = "<<netpay<<endl;


return 0;
}
