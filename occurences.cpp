// Tanaka Nhenga

#include <iostream>                
#include <iomanip>                
#include <fstream>    
#include <string>
#include <cmath>

using namespace std;               

int main ()
{
string reply;
string filename;
ifstream filein;
char c;
int letterct[127] = {};

cout << "Please enter the file name: ";
getline(cin, filename);

filein.open(filename.c_str());
if ( ! filein.is_open())
{
    cout << "Unable to open input file." << endl;
    cout << "Press enter to continue...";
    getline(cin, reply);
    exit(1);
}

while ( filein.peek() != EOF )
{
      filein >> c;
      letterct[static_cast<int>(c)]++;
}

for (int occurance = 0; occurance <= 127; occurance++)
{
    if ( letterct[occurance] > 0 )
    {
         cout << static_cast<char>(occurance) << " " << letterct[occurance] << endl;
    }
}

cout << "Program Terminated.";
exit(0);
}