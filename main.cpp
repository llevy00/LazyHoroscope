//Authors:Lois Levy
#include<iostream>
#include<string>

using namespace std;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
  //declare variables
  string first = "";
  string last = "";
  string firstI = "";
  string lastI = "";

  //get user input
  cout<<"What is your first name?\n";
  cin>>first;
  cout<<"What is your last name?\n";
  cin>>last;
  firstI = first.at(0);
  lastI = last.at(0);
  cout<<"Well "<<firstI<<"."<<lastI<<". here's your fortune...\n";

  //tell fortune
  

  return 0;
}
