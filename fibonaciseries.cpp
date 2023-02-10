#include <iostream>
using namespace std;
main()
{
 int n1, n2;
 cout<< "Enter 1st number:";
 cin>> n1;
 cout<< "Enter 2nd number:";
 cin>> n2;
 cout<< "Fibonaci series:";
 cout<< n1 << endl << n2 << endl << n1+n2 << endl << n2+(n1+n2) << endl << (n1+n2)+(n2+(n1+n2)) << endl <<
 (n2+(n1+n2))+((n1+n2)+(n2+(n1+n2))) << endl << ((n1+n2)+(n2+(n1+n2)))+((n2+(n1+n2))+((n1+n2)+(n2+(n1+n2))));


}