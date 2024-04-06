#include <iostream>

#include "ImageProcessing.h"

int main(int argc, char *argv[]) {
  ImageProcessing imageProcessing(argc, argv);
  
  do {
    imageProcessing.lineInput();
  } while (imageProcessing.processLine());

  return 0;
}