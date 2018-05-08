/*
 * numerals.c
 *
 *  Created on: 8 maj 2018
 *      Author: su3003sv-s
 */
#include "vga.h"

void drawString(char string[], char sizeOfArray, int size, int posX, int posY, char color){
	for(int i = 0; i < sizeOfArray; i++){
		if(string[i] != " "){
			drawNumeral(string[i], size, posX + (((size/2) + 8) * i), posY, color);
		}
	}
}

void drawNumeral(char abc, int size, int posX, int posY, char color){
	if (abc == 'a') {
		drawLine(posX + size / 4, posY, posX, posY + size, color);
		drawLine(posX + size / 4, posY, posX + size / 2, posY + size, color);
		drawLine(posX + (size / 2) / 4, posY + size / 2, posX + ((size / 2) / 4) * 3, posY + size / 2, color);
	}

	else if (abc == 'b') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY, posX + size / 2, posY + size / 4, color);
		drawLine(posX + size / 2, posY + size / 4, posX, posY + size / 2, color);
		drawLine(posX, posY + size / 2, posX + size / 2, posY + (size / 4) * 3, color);
		drawLine(posX + size / 2, posY + (size / 4) * 3, posX, posY + size, color);
	}

	else if (abc == 'c') {
		drawLine(posX, posY + size / 2, posX + size / 2, posY, color);
		drawLine(posX, posY + size / 2, posX + size / 2, posY + size, color);
	}

	else if (abc == 'd') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY, posX + size / 2, posY + size / 2, color);
		drawLine(posX, posY + size, posX + size / 2, posY + size / 2, color);
	}

	else if (abc == 'e') {
		drawLine(posX, posY + size / 2, posX + size / 2, posY, color);
		drawLine(posX, posY + size / 2, posX + size / 2, posY + size / 2, color);
		drawLine(posX, posY + size / 2, posX + size / 2, posY + size, color);
	}

	else if (abc == 'f') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY, posX + size / 2, posY, color);
		drawLine(posX, posY + size / 2, posX + size / 3, posY + size / 2, color);
	}

	else if (abc == 'g') {
		drawLine(posX, posY + size / 2, posX + size / 4, posY, color);
		drawLine(posX + size / 2, posY + size / 2, posX + size / 4, posY + size / 2, color);
		drawLine(posX + size / 2, posY + size / 2, posX + size / 4, posY + size, color);
		drawLine(posX, posY + size / 2, posX + size / 4, posY + size, color);
	}

	else if (abc == 'h') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX + size / 2, posY, posX + size / 2, posY + size, color);
		drawLine(posX, posY + size / 2, posX + size / 2, posY + size / 2, color);
	}

	else if (abc == 'i') {
		drawLine(posX + size / 3, posY, posX + size / 3, posY + size, color);
	}

	else if (abc == 'j') {
		drawLine(posX + size / 2, posY, posX + size / 2, posY + (size / 4) * 3, color);
		drawLine(posX + size / 2, posY + (size / 4) * 3, posX + size / 4, posY + size, color);
		drawLine(posX + size / 4, posY + size, posX, posY + (size / 4) * 3, color);
	}

	else if (abc == 'k') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY + size / 2, posX + size / 2, posY, color);
		drawLine(posX, posY + size / 2, posX + size / 2, posY + size, color);
	}

	else if (abc == 'l') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY + size, posX + size / 2, posY + size, color);
	}

	else if (abc == 'm') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY, posX + size / 4, posY + size / 2, color);
		drawLine(posX + size / 2, posY, posX + size / 4, posY + size / 2, color);
		drawLine(posX + size / 2, posY, posX + size / 2, posY + size, color);
	}

	else if (abc == 'n') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY, posX + size / 2, posY + size, color);
		drawLine(posX + size / 2, posY, posX + size / 2, posY + size, color);
	}

	else if (abc == 'o') {
		drawLine(posX, posY + size / 2, posX + size / 4, posY, color);
		drawLine(posX + size / 4, posY, posX + size / 2, posY + size / 2, color);
		drawLine(posX + size / 2, posY + size / 2, posX + size / 4, posY + size, color);
		drawLine(posX, posY + size / 2, posX + size / 4, posY + size, color);
	}

	else if (abc == 'p') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY, posX + size / 2, posY + size / 4, color);
		drawLine(posX + size / 2, posY + size / 4, posX, posY + size / 2, color);
	}

	else if (abc == 'q') {
		drawLine(posX, posY + size / 2, posX + size / 4, posY, color);
		drawLine(posX + size / 4, posY, posX + size / 2, posY + size / 2, color);
		drawLine(posX + size / 2, posY + size / 2, posX + size / 4, posY + size, color);
		drawLine(posX, posY + size / 2, posX + size / 4, posY + size, color);
		drawLine(posX + ((size / 2) / 3) * 2, posY + (size / 4) * 3, posX + size / 2, posY + size, color);
	}

	else if (abc == 'r') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY, posX + size / 2, posY + size / 4, color);
		drawLine(posX + size / 2, posY + size / 4, posX, posY + size / 2, color);
		drawLine(posX + size / 2, posY + size, posX, posY + size / 2, color);
	}

	else if (abc == 's') {
		drawLine(posX, posY + size / 2, posX + size / 2, posY + size / 2, color);
		drawLine(posX, posY + size / 2, posX + size / 2, posY, color);
		drawLine(posX + size / 2, posY + size / 2, posX, posY + size, color);
	}

	else if (abc == 't') {
		drawLine(posX, posY, posX + size/2, posY, color);
		drawLine(posX + size/4, posY, posX + size/4, posY + size, color);
	}

	else if (abc == 'u') {
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY + size, posX + size / 2, posY + size, color);
		drawLine(posX + size / 2, posY, posX + size / 2, posY + size, color);
	}

	else if (abc == 'v') {
		drawLine(posX, posY, posX + size / 4, posY + size, color);
		drawLine(posX + size / 2, posY, posX + size / 4, posY + size, color);
	}

	else if (abc == 'w') {
		drawLine(posX, posY, posX + size / 8, posY + size, color);
		drawLine(posX + size / 8, posY + size, posX + size / 4, posY + size / 3, color);
		drawLine(posX + size / 4, posY + size / 3, posX + size / 2 - size / 8, posY + size, color);
		drawLine(posX + size / 2, posY, posX + size / 2 - size / 8, posY + size, color);
	}

	else if (abc == 'x') {
		drawLine(posX, posY, posX + size / 2, posY + size, color);
		drawLine(posX, posY + size, posX + size / 2, posY, color);
	}

	else if (abc == 'y') {
		drawLine(posX, posY, posX + size / 4, posY + size / 2, color);
		drawLine(posX + size / 2, posY, posX + size / 4, posY + size / 2, color);
		drawLine(posX + size / 4, posY + size / 2, posX + size / 4, posY + size, color);
	}

	else if (abc == 'z') {
		drawLine(posX, posY, posX + size / 2, posY, color);
		drawLine(posX + size / 2, posY, posX, posY + size, color);
		drawLine(posX, posY + size, posX + size / 2, posY + size, color);
	}

	else if (abc == '0') {
		drawLine(posX, posY + size / 2, posX + size / 4, posY, color);
		drawLine(posX + size / 4, posY, posX + size / 2, posY + size / 2, color);
		drawLine(posX + size / 2, posY + size / 2, posX + size / 4, posY + size, color);
		drawLine(posX, posY + size / 2, posX + size / 4, posY + size, color);
	}

	else if (abc == '1') {
		drawLine(posX + size / 2, posY, posX + size / 2, posY + size, color);
	}

	else if (abc == '2') {
		drawLine(posX + size/2, posY, posX + size/2, posY + size/2, color);
		drawLine(posX, posY + size/2, posX, posY + size, color);
		drawLine(posX, posY + size/2, posX + size/2, posY + size/2, color);
		drawLine(posX, posY + size, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX + size/2, posY, color);
	}

	else if (abc == '3') {
		drawLine(posX + size/2, posY, posX + size/2, posY + size, color);
		drawLine(posX, posY + size/2, posX + size/2, posY + size/2, color);
		drawLine(posX, posY + size, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX + size/2, posY, color);
	}

	else if (abc == '4') {
		drawLine(posX + size/2, posY, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX, posY + size/2, color);
		drawLine(posX, posY + size/2, posX + size/2, posY + size/2, color);
	}

	else if (abc == '5') {
		drawLine(posX + size/2, posY + size/2, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX, posY + size/2, color);
		drawLine(posX, posY + size/2, posX + size/2, posY + size/2, color);
		drawLine(posX, posY + size, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX + size/2, posY, color);
	}

	else if (abc == '6') {
		drawLine(posX + size/2, posY + size/2, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY + size/2, posX + size/2, posY + size/2, color);
		drawLine(posX, posY + size, posX + size/2, posY + size, color);
	}

	else if (abc == '7') {
		drawLine(posX + size/2, posY, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX + size/2, posY, color);
	}

	else if (abc == '8') {
		drawLine(posX + size/2, posY, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX, posY + size, color);
		drawLine(posX, posY + size/2, posX + size/2, posY + size/2, color);
		drawLine(posX, posY + size, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX + size/2, posY, color);
	}

	else if (abc == '9') {
		drawLine(posX + size/2, posY, posX + size/2, posY + size, color);
		drawLine(posX, posY, posX + size / 2, posY, color);
		drawLine(posX, posY, posX, posY + size/2, color);
		drawLine(posX, posY + size/2, posX + size/2, posY + size/2, color);
	}

	else if (abc == ':') {
		drawLine(posX, posY, posX, posY + size/5, color);
		drawLine(posX, posY + size, posX, posY + size - size/5, color);
	}
}

