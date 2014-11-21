//This program will test a function that will write each character with a pause in between so that 
//it looks like the message is being slowly typed out. This will add to the visual aspect of the game

//For game settings, we will have speeds 1-5:
//1: 150000
//2: 100000
//3: 50000
//4: 10000
//5: 0

//The game default will be 3

#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;

//Settings will be a class, but here we will set the time globally
int TEXT_DELAY=50000;

void dprint(string& print)
{
  for (int i=0; i<print.size(); i++)
    {
      cout << print[i]; flush(cout);
      usleep(TEXT_DELAY); //Here is the set speed
    }
  cin.get(); //Waits for user input but does nothing with it. This serves as a pause.
}

int main()
{
  string input;
  int speed;

  while(1){
  cout << "Please input a speed from 1-5, 1 being the slowest and 5 being no delay: ";
  cin >> speed;
  cin.ignore();

  switch (speed)
    {
    case 1: TEXT_DELAY=150000; break;
    case 2: TEXT_DELAY=100000; break;
    case 3: TEXT_DELAY=50000; break;
    case 4: TEXT_DELAY=25000; break;
    case 5: TEXT_DELAY=0; break;
    default: cout << "You entered a wrong number. Please try again..." << endl; continue;
    }
  break;
  }

  cout << "Please enter a string to be dprinted: " << endl;
  getline(cin, input);

  dprint(input);

  return 0;
}
