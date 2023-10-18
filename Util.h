

#ifndef SRC_UTIL_H_
#define SRC_UTIL_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NORMAL_COLOR    0xF0
#define BLACK_COLOR     0x10
#define RED_COLOR       0x20
#define GREEN_COLOR     0x30
#define YELLOW_COLOR    0x40
#define BLUE_COLOR      0x50
#define MAGENTA_COLOR   0x60
#define CYAN_COLOR      0x70
#define WHITE_COLOR     0x80

#define Cls()      system("cls")
#define Pause()    system("pause")
#define RstColor() BackgroundColor(NORMAL_COLOR,NORMAL_COLOR);

typedef unsigned char uchar;

void BackgroundColor (uchar FontColor,uchar BgColor);
void Delay           (int   Seconds                );

#endif /* SRC_UTIL_H_ */
