#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int startCol, int size);
void print_char_5x7(char c);
void print_arrow(int startCol, int size, int shaftHeight);
void print_char_6x8(char ch);

extern const unsigned char font_5x7[][5];
extern const unsigned char font_6x8[][6];

#endif
