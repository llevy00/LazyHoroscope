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
  char firstI = ' ';
  char lastI = ' ';
  char lastL = ' ';
  int lucky = 0;
  int lastN = 0;

  //get user input
  cout<<"What is your first name?\n";
  cin>>first;
  cout<<"What is your last name?\n";
  cin>>last;
  firstI = first.at(0);
  lastI = last.at(0);
  cout<<"Welcome, "<<firstI<<"."<<lastI<<"., here is your fortune...\n";

  //tell fortune
  lucky = first.length();
  cout<<"your lucky number is "<<lucky<<endl;

  if(firstI == 'a' || firstI == 'e' || firstI == 'i' || firstI == 'o' || firstI == 'u' )
  {
    cout<<"you are destined to be famous."<<endl;
  }
  else if(firstI == 'A' || firstI == 'E' || firstI == 'I' || firstI == 'O' || firstI == 'U')
  {
    cout<<"you are destined to be famous!"<<endl;
  }
  else
  {
    cout<<"you should keep a low profile."<<endl;
  }

  lastN = last.length();
  lastL = last.at(lastN-1);

  if(lastL == 'a' || lastL == 'e' || lastL == 'i' || lastL == 'o' || lastL == 'u')
  {
    cout<<"you have already met your true love."<<endl;
    cout<<"have a good day!"<<endl;
  }
  else
  {
  cout<<"have a good day!"<<endl;
  }

  return 0;
}
