#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{

string FullName, FirstName, LastName;

cout << "Please enter your first and last name (First Last): " << endl;
cin >> FirstName;

cin.ignore(numeric_limits<streamsize>::max(), ' ');
cin >> LastName;

cout << "Your first name is: " << FirstName << endl;  

cout << "Your last name is: " << LastName << endl;


    return 0;
}
