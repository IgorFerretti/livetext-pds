#pragma once

#include <exception>
#include <string>

class DocumentException : public std::exception
{
protected:
	DocumentException(std::string msg);
};

class DocumentOpenException : public DocumentException
{
public:
	DocumentOpenException(std::string fileName, std::string path);
};

class DocumentLoadException : public DocumentException
{
public:
	DocumentLoadException(std::string fileName, std::string path);
};

class DocumentWriteException : public DocumentException
{
public:
	DocumentWriteException(std::string fileName, std::string path);
};