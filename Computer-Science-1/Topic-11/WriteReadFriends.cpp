//Barnaby Gichana
//Date. 10.31.2023
//Desc. program that creates a text file, called MyFriends.txt, writes five names into the file and reads the names from the file

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  //***********************************************
  ofstream outfile;
  outfile.open("MyFriends.txt");

  // Write five names to the file
  outfile << "Ivan" << endl;
  outfile << "Flex" << endl;
  outfile << "Elvin" << endl;
  outfile << "Ruth" << endl;
  outfile << "Baraka" << endl;

  //Close the file
  outfile.close();
  cout << "All data written to HD\n\n";

  //***********************************************

  string name;

  ifstream infile;
  infile.open("MyFriends.txt");

  // Read names from the file
  infile >> name;
  cout << name << endl;
  infile >> name;
  cout << name << endl;
  infile >> name;
  cout << name << endl;
  infile >> name;
  cout << name << endl;
  infile >> name;
  cout << name << endl;

  // Close the file
  infile.close();
  cout << "\nData is complete\n\n";

  //***********************************************
  
  return 0;
}