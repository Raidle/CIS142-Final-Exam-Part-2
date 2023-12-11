#include <iostream>
#include "FileCreator.h"
using namespace std;

int main()
{
    
    cout << "Enter a file name: " << endl;
    string fileName;
    cin >> fileName;
    FileCreator newFile(fileName);
    newFile.WrteHeader();
    cin.ignore();
    cout << "\n=======================\n";

    for (int i = 0; i < 5; i++) {

        string name;
        int hours;
        double PayRate, Payment;


        cout << "Enter Info about Employee #" << i + 1 << "\n";
        cout << "\nName: ";
        getline(cin, name);
        

        cout << "\nHours Worked: ";
        cin >> hours;
        cout << "\nPay Rate: ";
        cin >> PayRate;

        Payment = PayRate * hours;

        newFile.WriteFile(name, hours, PayRate, Payment);

        cout << "\n\n";

        cin.ignore();

    }

    newFile.CloseFile();
}
