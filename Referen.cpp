#include <iostream>
using namespace std;

int main(void)
{
  int num1=207;
  int &num2=num1;
  
  num2=208;
  cout<<"VAL: "<<num1<<endl;
  cout<<"REF: "<<num2<<endl;
  
  cout<<"VAL: "<<&num1<<endl;
  cout<<"REF: "<<&num2<<endl;
  return 0;
}
