#include<iostream>
using namespace std;
int main()
{int number;
cout<<"Please enter any number:";
cin>>number;
if(number>0)
cout<<"Positive";
else if(number<0)
cout<<"Negative";
else if(number==0)
cout<<"Zero";
return 0;
}
