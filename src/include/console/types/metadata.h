#ifndef METADATA_H
#define METADATA_H

#include <vector>
#include <map>
#include <string>

typedef std::vector<std::string> HeaderFiles; // list of header file names
typedef std::map<std::string, std::string> Anotations; // list of anotations, i.e @name, @description
typedef std::map<std::string, Anotations> AnotationsCollection; // filename map to anotations


#endif // METADATA_H