
#ifndef INC_FONTS_H_
#define INC_FONTS_H_

#include "defines.h"
#include "main.h"

typedef struct {
	const unsigned char *ascii;
	const uint8_t height;
	const uint8_t width;
}font;

extern font font8;

font* Font_GetFont(uint8_t Font);
uint8_t Font_GetPage(uint8_t Font, uint8_t Letter, uint8_t height);

#endif /* INC_FONTS_H_ */
