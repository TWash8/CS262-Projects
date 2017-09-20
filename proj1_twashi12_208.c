//Name: Thomas Washington G00992592
//CS 262 Lab Section 208
//Project 3

#define <stdio.h>
#define <stdlib.h>

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
  int i = 4;
  int firstSolution = 0;
  int permutations = 0;
  
  //Make the main loop for the first 10 tries for n = 4...20
  while (i <=20) {
    permutations = 0;
    for (int j = 1; j <= 10; j++) {
      //Make board of n*n size.
      int b[i*i];
      //Placeholder for queen at the beginning of each row is 0.
      for (int k = 0; k < n; k++) {
        b[k*i] = 0;
      }
      //Swap places of queens.
      randperm(b[], i);
      
      //Only display first solution.
      if (checkboard(b,n) {
        permutations ++;
        if (firstSolution < 1) {
          displayboard(b,n);
          count ++;
        }
      }
          
    }
  i++;
  }

}

void randperm(int b[], int n) {
  for (int i = n-1; i >= 0; i--) {
    int d = srandom(2592);
  }
}

int checkboard(int b[], int n) {
  int queens[n];
  
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
       queens.add(j);
     }
    }
  }
  
  //Third loop checks if two queens don't share a diagonal
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
     if (abs(queens[i]-queens[j]) == (i-j)) {
      return 0; 
     }
    }
  }
  //Returns one if this board is a solution.
  return 1;
}

int displayboard(int b[], int n) {
  int displayCol = 0;
  printf("[");
  //First for loop prints the columns of each queen.
  for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
        if (b[(i*n)+j)] != 0) {
          continue;
        }
        else if (b[(i*n)+j)] == 0) {
          printf("%d",j);
        }
     }
  }
  printf("]\n");
  //Second for loop displays the actual board, with dashes as empty spaces and "*" as queens.
  for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
        if (b[(i*n)+j)] != 0) {
          printf("- ";
        }
        else if (b[(i*n)+j)] == 0) {
          printf("*");
        }
     }
     printf("\n");
  }
}
