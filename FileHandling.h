#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H

#include <fstream>

class FileHandling {
protected:
  std::ifstream fileIn;
  std::ofstream fileOut;

public:
  FileHandling(int, char**);
  ~FileHandling(void);
};
#endif