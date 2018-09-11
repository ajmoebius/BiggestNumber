//Author:
#include<iostream>

int main()
{
  //declare variables here
  int one;
  int two;
  int thr;
  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>one;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>two;

  //determine if first or second is bigger and store that in a third variable
  if(one<two)
   {
    thr=two;
   }
  else
  {
   thr=one;
  }
  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
  std::cout<<thr;
  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
