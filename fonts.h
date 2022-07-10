
#ifndef INC_FONTS_H_
#define INC_FONTS_H_

typedef struct {
	const unsigned char *ascii;
	const uint8_t height;
	const uint8_t width;
}font;

extern const uint8_t ascii_table_font8x5[][8];

extern font font8x5;

font* Font_GetFont8x5(void);

#endif /* INC_FONTS_H_ */
