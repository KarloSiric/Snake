#ifndef GAME_CONFIG_H
#define GAME_CONFIG_H 



#define ASPECT_RATIO ((float)(16.0f / 9.0f))
#define WIDTH ((int)1400)
#define HEIGHT ((int)(WIDTH / ASPECT_RATIO))

// Making a single cell to be 32x32 size

#define CELL_SIZE 32
#define ROWS      (HEIGHT/CELL_SIZE)
#define COLUMNS   (WIDTH/CELL_SIZE)


#endif
