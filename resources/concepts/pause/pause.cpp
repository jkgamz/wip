//A pause test to develop pause lengths and implementations within the program.
//Notes:
//->unistd.h provides access to the POSIX functions for UNIX/LINUX. Thus this is a non-portable program
//and must be rewritten with a given operating system's library and like sleep() function.
//->we must flush cout after each iteration because sleep() will not occur until the ostream
//is flushed/closed. Without the flush, the system would pause, in this case, for three seconds and
//then display the . . . all at once.
#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
  for(int i=0; i<3; i++)
    {
      cout << ". "; flush(cout); 
      sleep(1);
    }
  cout << "\nDONE" << endl;

  return 0;
}
