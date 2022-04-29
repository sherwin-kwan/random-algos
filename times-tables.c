#include <stdio.h>

void timesTable(int width, int height) {
  // in here!   write some stuff!   loops?  conditionals?   formatting logic?
  // Loop I from 1 to Height, each row:
  //  Loop J from 1 to width, print I * J
  int i;
  int j;
  for(i = 1; i <= height; i++) {
    for(j = 1; j <= width; j++) {
      printf("%d  ", i * j);
    }
    printf("\n");
  }
}

int main() {
    printf("\nmy 3x3 times table:\n\n");
    timesTable(3, 3);
    printf("\n------\n");
    printf("\nmy 15x8 times table:\n\n");
    timesTable(15, 8);
    return 0;
}

// // 1 2 3 <- I = 1
// // 2 4 6 <= I = 2
// // 3 6 9 <= I = 3

// my 3x3 times table:
//   1  2  3
//   2  4  6
//   3  6  9
// ------
// my 15x8 times table:
//     1    2    3    4    5    6    7    8    9   10   11   12   13   14   15
//     2    4    6    8   10   12   14   16   18   20   22   24   26   28   30
//     3    6    9   12   15   18   21   24   27   30   33   36   39   42   45
//     4    8   12   16   20   24   28   32   36   40   44   48   52   56   60
//     5   10   15   20   25   30   35   40   45   50   55   60   65   70   75
//     6   12   18   24   30   36   42   48   54   60   66   72   78   84   90
//     7   14   21   28   35   42   49   56   63   70   77   84   91   98  105
//     8   16   24   32   40   48   56   64   72   80   88   96  104  112  120