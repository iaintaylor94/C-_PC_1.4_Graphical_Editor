#include "ImageProcessing.h"

void ImageProcessing::fill(int x, int y, char from) {
  if (image.bitmap[y][x] != from) { // NOT THE SAME COLOUR - DO NOT FILL
    return;
  }
  
  image.bitmap[y][x] = C; // FILL PIXEL
  
  if (x > 0 && y > 0) fill(x - 1, y - 1, from); // TOP LEFT
  if (x > 0) fill(x - 1, y, from); // CENTER LEFT
  if (x > 0 && y < image.height - 1) fill(x - 1, y + 1, from); // BOTTOM LEFT

  if (y > 0) fill(x, y - 1, from); // TOP CENTER
  if (y < image.height - 1) fill(x, y + 1, from); // BOTTOM CENTER

  if (x < image.width - 1 && y > 0) fill(x + 1, y - 1, from); // TOP RIGHT
  if (x < image.width - 1) fill(x + 1, y, from); // CENTER RIGHT
  if (x < image.width - 1 && y < image.height - 1) fill(x + 1, y + 1, from); // BOTTOM RIGHT

  
}
bool ImageProcessing::processLine() {
  switch (command) {
    case 'I':
      image.width = M;
      image.height = N;
      for (int i = 0; i < image.height; i++) {
        for (int j = 0; j < image.width; j++) {
          image.bitmap[i][j] = 'O';
        }
      }
      break;
    case 'C':
      for (int i = 0; i < image.height; i++) {
        for (int j = 0; j < image.width; j++) {
          image.bitmap[i][j] = 'O';
        }
      }
      break;
    case 'L':
      image.bitmap[Y][X] = C;
      break;
    case 'V':
      for (int i = Y1; i <= Y2; i++) {
        image.bitmap[i][X] = C;
      }
      break;
    case 'H':
      for (int i = X1; i <= X2; i++) {
        image.bitmap[Y][i] = C;
      }
      break;
    case 'K':
      for (int i = X1; i <= X2; i++) {
        for (int j = Y1; j <= Y2; j++) {
          image.bitmap[j][i] = C;
        }
      }
      break;
    case 'F':
      if (image.bitmap[Y][X] == C) { //INFINITE LOOP
        break;
      }
      else {
        fill (X, Y, image.bitmap[Y][X]);
      }
      break;
    case 'S':
      printImage();
      break;
    case 'X':
      return false;
      break;
    default:
      break;
  }
  return true;
}