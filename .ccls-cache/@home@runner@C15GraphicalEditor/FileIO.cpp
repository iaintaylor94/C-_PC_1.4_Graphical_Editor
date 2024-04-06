#include "FileIO.h"

void FileIO::printImage() {
  std::cout << name << std::endl;
  for (int i = 0; i < image.height; i++) {
    for (int j = 0; j < image.width; j++) {
      std::cout << image.bitmap[i][j];
    }
    std::cout << std::endl;
  }
}
void FileIO::processLine() {
  fileIn >> command; 

  switch (command) {
    case 'I':
      fileIn >> M >> N;
      break;
    case 'C':
      break;
    case 'L':
      fileIn >> X >> Y >> C;
      break;
    case 'V':
      fileIn >> X >> Y1 >> Y2 >> C;
      break;
    case 'H':
      fileIn >> X1 >> X2 >> Y >> C;
      break;
    case 'K':
      fileIn >> X1 >> Y1 >> X2 >> Y2 >> C;
      break;
    case 'F':
      fileIn >> X >> Y >> C;
      break;
    case 'S':
      fileIn >> name;
      break;
    case 'X':
      break;
    default:
      break;
  }
}