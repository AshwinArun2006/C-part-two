#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

void display(int board[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (board[i][j] == 0)
                printf("   "); 
            else
                printf("%3d", board[i][j]);
        }
        printf("\n");
    }
}

void shuffle(int board[SIZE][SIZE]) {
    int numbers[SIZE * SIZE], k = 0, i, j;
    for (i = 0; i < SIZE * SIZE; i++) {
        numbers[i] = i;
    }
    srand(time(0));
    for (i = SIZE * SIZE - 1; i > 0; i--) {
        j = rand() % (i + 1);
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = numbers[k++];
        }
    }
}

int is_solved(int board[SIZE][SIZE]) {
    int k = 1, i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i == SIZE - 1 && j == SIZE - 1) 
                return board[i][j] == 0;
            if (board[i][j] != k++)
                return 0;
        }
    }
    return 1;
}

void move_tile(int board[SIZE][SIZE], char move, int *x, int *y) {
    int nx = *x, ny = *y;

    if (move == 's') nx--;
    if (move == 'w') nx++; 
    if (move == 'd') ny--; 
    if (move == 'a') ny++; 
    if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE) {
        board[*x][*y] = board[nx][ny];
        board[nx][ny] = 0;
        *x = nx;
        *y = ny;
    } else {
        printf("Invalid move. Try again.\n");
    }
}
int main() {
    int board[SIZE][SIZE];
    int x, y;
    int i, j; 
    char move;
    shuffle(board);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                x = i;
                y = j;
            }
        }
    }
    printf("Welcome to the 15-Puzzle Game!\n");
    printf("Arrange the numbers in ascending order (1-15).\n");
    printf("Use 'w', 'a', 's', 'd' to move tiles (up, left, down, right).\n");
    display(board);
    while (!is_solved(board)) {
        printf("Enter your move: ");
        scanf(" %c", &move);
        move_tile(board, move, &x, &y);
        display(board);
    }

    printf("Congratulations! You solved the puzzle!\n");
    return 0;
}

