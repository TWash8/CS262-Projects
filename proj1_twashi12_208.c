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
  int min = 0;
  int max = 0;
  int firstSolution = 0;
  int permutations = 0;
  int trials[18];
  int min[18];
  int max [18];
  int mean[18];
  double exp[18];
  double excl[18];
  srandom(2592);

  //Make the main loop for the first 10 tries for n = 4...20
  while (size <=4) {
//    permutations = 0;
    for (int j = 1; j <= 10; j++) {
      int count = 0;
      //Make board of n*n size and have num for putting in each index.
      int b[size];
      int num = 0;
      //Placeholder for queen at the beginning of each row is 0.
      for (int k = 0; k < size; k++) {
        b[k] = num++;
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
  //For trials
  int value = 0;
  for (int i = 0; i < 18; i++) {
    trials[i] = value++;
  }
  //For factorial size.
int fact = 0;
int total = 1;
int exclIndex
  for (int i = 4; i <= 20; i++) {
    total = 1;
    for (int j = i; j < 1; j--) {
      total *= j;
    }
    excl[exclIndex++] = total;
  }

  //Print statistics.

}

void randperm(int b[], int n) {
    for (int i = n-1; i >= 0; i--) {
      int j = rand() % n;
      int temp = b[j];
      b[j] = b[i];
      b[i] = temp;
    }
}

int checkboard(int b[], int n) {
  int queens[n];
  int index = 0;

  //Loop checks for no duplucates in columns and no sharring diagonals
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= n; j++) {
      if (b[i] == b[j]) {
        return 0;
      if (abs(b[j]-b[i]) == abs(j-i)) {
        return 0;
        }
      }
    }
  }
  //Returns one if this board is a solution.
  return 1;
}

int displayboard(int b[], int n) {
  int place = 0;
  printf("[");
  //First for loop prints the columns of each queen.
  for (int i = 0; i < n; i++) {
     printf("%d ", b[i])
  }
  printf("]\n");

  //Second for loop displays the actual board, with dashes as empty spaces and "*" as queens based on the array.
  for (int row = 0; row < n; i++) {
    place = b[row];
     for (int j = 0; j < n; j++) {
        if (j != place) {
          printf("- ");
        }
        if (j == place) {
          printf("* ");
        }
     }
     printf("\n");
  }
  return 1;
}
