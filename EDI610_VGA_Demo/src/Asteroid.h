
/*
 * Asteroid.h
 *
 *  Created on: 18 apr. 2018
 *      Author: fr0177ma-s
 */

#ifndef SRC_ASTEROID_H_
#define SRC_ASTEROID_H_


#include <xil_types.h>

#define SMALL 	1
#define MEDIUM	2
#define LARGE	3
#define XLARGE	4
#define RADIUS_SMALL 	20
#define RADIUS_MEDIUM	40
#define RADIUS_LARGE	60
#define RADIUS_XLARGE	100

static int8_t AsteroidSmall[] 	= 	{20, 0, 18, 8, 13, 14, 6, 19, -2, 19, -9, 17, -16, 11, -19, 4, -19, -4, -16, -11, -10, -17, -2, -19, 6, -19, 13, -14, 18, -8, 20, 0}; //Radius = 20
static int8_t AsteroidMedium[] 	= 	{40, 0, 36, 16, 26, 29, 12, 38, -4, 39, -19, 34, -32, 23, -39, 8, -39, -8, -32, -23, -20, -34, -4, -39, 12, -38, 26, -29, 36, -16, 40, 0}; //Radius = 40
static int8_t AsteroidLarge[] 	= 	{60, 0, 54, 24, 40, 44, 18, 57, -6, 59, -29, 51, -48, 35, -58, 12, -58, -12, -48, -35, -30, -51, -6, -59, 18, -57, 40, -44, 54, -24, 60, 0}; //Radius = 60
static int8_t AsteroidXLarge[] 	= 	{100, 0, 91, 40, 66, 74, 30, 95, -10, 99, -49, 86, -80, 58, -97, 20, -97, -20, -80, -58, -50, -86, -10, -99, 30, -95, 66, -74, 91, -40, 100, 0}; //Radius = 100


struct Asteroid
{
	int x, y, speed, moveAngle, moveX, moveY;
	int8_t (*size)[32];
	int8_t alive;
};

void SpawnAsteroid(struct Asteroid *a, unsigned char seed, unsigned int x, unsigned int y);
//void SpawnAsteroid(struct Asteroid *a, unsigned char Size)
void MoveAsteroid(struct Asteroid *a);
void MoveAsteroidWithoutBounce(struct Asteroid *a);
char collisionDetection (struct Asteroid *a,int x, int y, int length, int angle);
void collisionDetectionShot (struct Asteroid *a,int x, int y);
void destroyAsteroid(struct Asteroid *a);


#endif /* SRC_ASTEROID_H_ */
