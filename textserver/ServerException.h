#pragma once

#include <exception>
#include <string>


class ServerException : public std::exception
{

protected:

	ServerException(std::string msg);

};


class ServerStartException : public ServerException
{
public:
	ServerStartException(std::string msg);
};

class FileException : public ServerException
{

protected:

	FileException(std::string msg);
};


class FileLoadException : public ServerException
{

public:

	FileLoadException(std::string filePath);
};


class FileWriteException : public ServerException
{

public:

	FileWriteException(std::string fileName, std::string path);
};


class FileCreateException : public FileException
{
public:
	FileCreateException(std::string fileName, std::string path);
};

class FileOverwriteException : public ServerException
{

public:

	FileOverwriteException(std::string filePath);
};


class MessageException : public ServerException
{
public:
	MessageException(std::string msg);
};


class MessageUnknownTypeException : public MessageException
{
private:
	int errType;
public:
	MessageUnknownTypeException(int type);
	int getErrType();
};


class MessageWrongTypeException : public MessageException
{
public:
	MessageWrongTypeException(std::string msg, int type);
};


class FieldWrongException : public MessageException
{
private:
	int type;
public:
	FieldWrongException(int type);
};


class SocketException : public ServerException
{
protected:
	SocketException(std::string msg);
};


class SocketNullException : public SocketException
{
public:
	SocketNullException(std::string msg);
};


class SocketDuplicatedException : public SocketException
{
public:
	SocketDuplicatedException(std::string msg);
};

class ObjectNotFound : public ServerException
{
protected:
	ObjectNotFound(std::string msg);
};

class ClientNotFoundException : public ObjectNotFound
{
public:
	ClientNotFoundException(std::string msg);
};

class UserNotFoundException : public ObjectNotFound
{
public:
	UserNotFoundException(std::string msg);
};

class WorkspaceNotFoundException : public ObjectNotFound
{
public:
	WorkspaceNotFoundException(std::string msg);
};

class ThreadNotFoundException : public ObjectNotFound
{
public:
	ThreadNotFoundException(std::string msg);
};