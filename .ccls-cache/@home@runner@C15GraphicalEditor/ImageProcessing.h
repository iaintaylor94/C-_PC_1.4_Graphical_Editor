#ifndef IMAGE_PROCESSING_H
#define IMAGE_PROCESSING_H

#include "FileIO.h"

class ImageProcessing : public FileIO {


protected:
  

public:
  ImageProcessing (int argc, char** argv) : FileIO(argc, argv) {};
  ~ImageProcessing (void) {}

  void fill (int, int, char);
  bool processLine(void);

};


#endif