#include "FileHandling.h"
#include <iostream>
#include <string.h>

FileHandling::FileHandling (int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
  }

  char filename[80];
  strcpy(filename, argv[1]);
  fileIn.open(filename);

  if (!fileIn.is_open()) {
    std::cout << "Error opening file " << filename << std::endl;
  }
  else {
    std::cout << "File " << filename << " opened successfully" << std::endl;
  }

  strcat(filename, ".out");
  fileOut.open(filename);

  if (!fileOut.is_open()) {
    std::cout << "Error opening file " << filename << std::endl;
  }
  else {
    std::cout << "File " << filename << " opened successfully" << std::endl;
  }
}
FileHandling::~FileHandling() {
  fileIn.close();
  fileOut.close();
}