//Barnaby Gichana
//Date. 11.01.2023
//Desc. program that writes and reads 10 random seeded numbers to a file

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() 
{
  //***********************************************
  // Random number generator
  unsigned seed = time(0);
  srand(seed);

  // Open the file
  ofstream outfile;
  outfile.open("10_Random_Numbers.txt");

  // Write 10 random seeded numbers to the file
  for (int i = 0; i < 10; i++)
    {
      outfile << rand() % 100 + 1 << endl;
    }

  //Close the file
  outfile.close();
  cout << "All data written to HD\n\n";

  //***********************************************

  string number;

  // Open the file
  ifstream infile;
  infile.open("10_Random_Numbers.txt");

  // Read random seeded numbers from the file
  for (int i = 0; i < 10; i++)
    {
      infile >> number;
      cout << i + 1 << ") " << number << endl;
    }

  // Close the file
  infile.close();
  cout << "\nData is complete\n\n";

  //***********************************************

  return 0;
}