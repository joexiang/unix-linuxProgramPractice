#include <stdio.h>
#include <string.h>
#include <errno.h>

#define NAMELENGTH 512;

//read chars from file
class FileReader
{
private:
	char charrFileName[NAMELENGTH];
	FILE* fiFilePt;
	char* chptFileBuffer;

public:
	FileReader();
	FileReader(char* chptName);
	~FileReader();
	void setFileName(char*);
	bool openFile();
	bool closeFile();
	bool readFileByChar(int);
	bool readFileByLine(int);
};

//print chars to console
class CharPrinter
{
private:
	char *chptFileBuffer;
public:
	CharPrinter();
	bool printByLine(int line);
	bool printNextLine();
	bool printNextScreen();
};
