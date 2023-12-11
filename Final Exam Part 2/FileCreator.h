#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
#pragma once

class FileCreator
{
private:
	ofstream MyFile;

public:
	FileCreator(string);
	void WriteFile(string, int, double, double);
	void WrteHeader();
	void CloseFile();

};

