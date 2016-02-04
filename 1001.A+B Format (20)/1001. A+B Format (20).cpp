#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
  void fun(int a);
  //输入两个数
  double a,b;
  cin>>a>>b;
  long sum = a + b;

  // caculate in three steps
  //zero
  if (sum < 1000) cout<<sum;
  
  //one 
  else if ((sum / 1000) < 1000){
  	int first,second;
  	second = sum % 1000;
    sum = sum / 1000;
    first = sum % 1000; 
	cout<<first;
	fun(second); 
  }
  
 
  //two
  else if( (sum / 1000 /1000) < 1000){
    int first,second,third;
    third = sum % 1000;
    second = (sum / 1000) % 1000;
    first = (sum/1000/1000) % 1000;
    cout<<first;
    fun(second);
    fun(third);
  }
  return 0; 
} 
