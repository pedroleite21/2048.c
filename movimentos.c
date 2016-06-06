#include "funcoes.h"

bool moveUp(uint8_t board[SIZE][SIZE]) {
    bool success = false;
    uint8_t x;
    for (x=0; x<SIZE; x++) {
        success |= slideArray(board[x]);
    }
    return success;
}

bool moveLeft(uint8_t board[SIZE][SIZE]) {
    bool success;
    rotateBoard(board);
    success = moveUp(board);
    rotateBoard(board);
    rotateBoard(board);
    rotateBoard(board);
    return success;
}

bool moveDown(uint8_t board[SIZE][SIZE]) {
    bool success;
    rotateBoard(board);
    rotateBoard(board);
    success = moveUp(board);
    rotateBoard(board);
    rotateBoard(board);
    return success;
}

bool moveRight(uint8_t board[SIZE][SIZE]) {
    bool success;
    rotateBoard(board);
    rotateBoard(board);
    rotateBoard(board);
    success = moveUp(board);
    rotateBoard(board);
    return success;
}
