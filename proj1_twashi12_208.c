//Name: Thomas Washington G00992592
//CS 262 Lab Section 208
//Project 3

#include <stdio.h>
#include <stdlib.h>

#define max(a,b) \
({ __typeof__ (a) _a = (a); \
__typeof__ (b) _b = (b); \
_a > _b ? _a : _b; })

#define min(a,b) \
({ __typeof__ (a) _a = (a); \
__typeof__ (b) _b = (b); \
_a < _b ? _a : _b; })

void randperm(int b[], int n);
int checkboard(int b[], int n);
int displayboard(int b[], int n);

int main() {
  int size = 4;
//  int firstSolution = 0;
//  int permutations = 0;
  srandom(2592);

  //Make the main loop for the first 10 tries for n = 4...20
  while (size <=4) {
//    permutations = 0;
    for (int j = 1; j <= 10; j++) {
      int count = 0;
      //Make board of n*n size.
      int b[size*size];
      //Placeholder for queen at the beginning of each row is 0.
      for (int k = 0; k < size; k++) {
        b[k*size] = 8;
      }
      //Swap places of queens.
      randperm(b, size);

      //Only display first solution.
//      if (checkboard(b,size) == 1) {
  //      permutations ++;
    //    if (firstSolution < 1) {
          printf("\n%d solution\n", size);
          count = displayboard(b,size);
          printf("%d", count);
    //      firstSolution ++;
    //    }
      //}

    }
    size ++;
  }

}

void randperm(int b[], int n) {
  for (int row = 0; row < n; row++) {
    for (int i = n-1; i >= 0; i--) {
      int j = rand() % n;
      int temp = b[(row*n)+j];
      b[(row*n)+j] = b[(row*n)+i];
      b[(row*n)+i] = temp;
    }
  }
}

int checkboard(int b[], int n) {
  int queens[n];
  int index = 0;

  //First loop checks for no duplucates in columns
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= n; j++) {
      if (b[i] == b[i+(j*n)]) {
        return 0;
      }
    }
  }

  //Second loop saves the columns of each queen.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j ++) {
     if (b[i*n]+j == 0) {
       queens[index++] = j;
     }
    }
  }

  //Third loop checks if two queens don't share a diagonal
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
     if (abs(queens[j]-queens[i]) == abs(j-i)) {
      return 0;
     }
    }
  }
  //Returns one if this board is a solution.
  return 1;
}

int displayboard(int b[], int n) {
  printf("[");
  //First for loop prints the columns of each queen.
  for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
        if (b[(i*n)+j] != 8) {
          continue;
        }
        if (b[(i*n)+j] == 8) {
          printf("%d",j);
        }
     }
  }
  printf("]\n");
  //Second for loop displays the actual board, with dashes as empty spaces and "*" as queens.
  for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
        if (b[(i*n)+j] != 8) {
          printf("- ");
        }
        if (b[(i*n)+j] == 8) {
          printf("* ");
        }
     }
     printf("\n");
  }
  return 1;
}
