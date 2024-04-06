#ifndef FILE_IO_H
#define FILE_IO_H

#include <iostream>
#include <fstream>
#include <stdbool.h>

#include "FileHandling.h"

class FileIO : public FileHandling {

const static int MAX_WIDTH = 251, MAX_HEIGHT = 251;
struct Image {
  char bitmap[MAX_HEIGHT][MAX_WIDTH];
  int height, width;
};

protected:
  struct Image image;

  char command;
  int M, N;
  int X, Y;
  char C;
  int Y1, Y2;
  int X1, X2;
  std::string name;

  void printImage();

public:
  FileIO (int argc, char** argv) : FileHandling(argc, argv) {};
  ~FileIO (void) {};

  void lineInput();

};
#endif