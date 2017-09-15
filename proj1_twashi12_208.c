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
  
  while (i <=20) {
    for (int j = 1; j <= 10; j++) {
      int b[i*i];
      
      for (int k = 0; k < n; k++) {
        b[k*i] = 0;
      }
      randperm(b[], i);
    }
  }

}

void randperm(int b[], int n) {
  for (int i = n-1; i >= 0; i--) {
    int d = srandom(2592);
  }
}

int checkboard(int b[], int n) {
  int cols[n];
  int countCols;
  
  //Checks for no duplucates in columns
  for (int i = 0; i < n; i++) {
    coundCols = 0;
    for (int j = 1; j <= n; j++) {
      if (b[i] == b[i-1+(j*n)]) {
        return 0;
      }
    }
  }
  
  return 1;
}

int displayboard(int b[], int n) {

}
