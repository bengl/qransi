#include <stdio.h>
#include <stdlib.h>
#include <qrencode.h>

#define WHITE "\033[47m  \033[0m"
#define BLACK "\033[40m  \033[0m"

void pixels(char* color, int size)
{
  int i;
  for(i=0; i<size; i++)
    printf("%s", color);
}

void whiteRow(int padding, int width)
{
  int i;
  for(i=0; i<padding; i++) {
    pixels(WHITE, (width+(padding*2)));
    printf("\n");
  }
}

void usage()
{
  printf("usage: qransi [TEXT] ([LEVEL])\n\n");
  printf("Encodes TEXT as a QR code rendered as ANSI art.\n");
  printf("Optionally selects error-correction LEVEL (L|M|Q|H).");
  printf("Default is L.\n\n");
  exit(1);
}

int main (int argc, char *argv[])
{
  int padding = 2;
  QRecLevel level = QR_ECLEVEL_L;
  char * encodable;
  if (argc > 1)
    encodable = argv[1];
  else
    usage();
  if (argc > 2) {
    char arg = argv[2][0];
    if (arg == 'l' || arg == 'L')
      level = QR_ECLEVEL_L;
    else if (arg == 'm' || arg == 'M')
      level = QR_ECLEVEL_M;
    else if (arg == 'q' || arg == 'Q')
      level = QR_ECLEVEL_Q;
    else if (arg == 'h' || arg == 'H')
      level = QR_ECLEVEL_H;
    else {
      printf("Invalid error-correction LEVEL.\n\n");
      usage();
    }
  }
  int x, y, width;
  unsigned char *data;
  QRcode * code = QRcode_encodeString(encodable, 0, level, QR_MODE_8, 1);
  width = code->width;
  data = code->data;
  whiteRow(padding, width);
  for (y=0; y<width; y++) {
    pixels(WHITE, padding);
    for (x=0; x<width; x++, data++)
      pixels(*data&1?BLACK:WHITE, 1); 
    pixels(WHITE, padding);
    printf("\n");
  }
  whiteRow(padding, width);
  return 0;
}
