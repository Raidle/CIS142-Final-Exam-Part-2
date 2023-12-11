#include "FileCreator.h"

FileCreator::FileCreator(string name) {
	this->MyFile.open(name);
}

void FileCreator::WrteHeader() {
	this->MyFile << "EmployeeName" << "," << "HoursWorked" << "," << "PayRate" << "," << "Payment" << endl;
}


void FileCreator::WriteFile(string name, int hours, double pr, double payment) {
	this->MyFile << name << "," << hours << "," << setprecision(2) << fixed <<pr << "," << payment << endl;
}

void FileCreator::CloseFile() {
	this->MyFile.close();
}

