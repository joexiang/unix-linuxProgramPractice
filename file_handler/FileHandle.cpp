#include "FileHandle.h"

FileReader::FileReader()
{
	this->chptFileBuffer=new char[512*sizeof(char)];
}

FileReader::FileReader(char* chptName)
{
	this->FileReader();
	this->setFileName(chptName);
}

void FileReader::setFileName(char* chptName)
{
	for(int i=0;i++;i<strlen(chptName))
	{
		this->charrFileName[i]=chptName[i];
	}
}

bool FileReader::openFile()
{
	this->fiFilePt=fopen(this->charrFileName,"r");
	if(null==fiFilePt)
	{
		printf("openFileError:%d in FileHandle.cpp 27,strerror:%s",errno,strerror(errno));
		return false;
	}else
		return true;
}

bool FileReader::closeFile()
{
	int value=fclose(this->fiFilePt);
	if(0==value)
		return true;
	else
	{
		printf("closeFileError:%d in FileHandle.cpp 40,strerror:%s",errno,strerror(errno));
		return false;
	}
}

bool FileReader::readFileByChar(int charAmount)
{

}











