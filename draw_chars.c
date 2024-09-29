#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    for (char row = 0; row < 7; row++) {
      unsigned short rowBits = font_5x7[c][col];
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}

void print_char_6x8(char c) {
    c -= 'A'; // Adjust for ASCII offset
    for (char row = 0; row < 6; row++) { // Outer loop for rows
        unsigned short rowBits = font_6x8[c][row]; // Get the bits for the current row
        for (char col = 0; col < 8; col++) { // Inner loop for columns
            unsigned short colMask = 1 << (7 - col); // Create mask for the current column
            putchar((rowBits & colMask) ? '*' : ' '); // Print '*' or ' '
        }
        putchar('\n'); // New line after each row
    }
    putchar('\n'); // Extra new line after the character
}


