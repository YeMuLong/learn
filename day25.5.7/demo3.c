#include<stdio.h>

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;

  // Checkpoint 1 code goes here.
  //1.在附带的代码块中，编写代码打印 matrix 第四行第二列的元素。
  printf("%i\n",matrix[3][1]);
  // Checkpoint 2 code goes here.
  //2.循环遍历 matrix 并将所有元素相加。将结果赋给 sum 变量。
  int a = sizeof(matrix)/sizeof(matrix[0]);
  int b = sizeof(matrix[0])/sizeof(int);
  for(int i=0;i<a;i++){
    for(int q=0;q<b;q++){
      sum+=matrix[a][b];
    }
  }printf("%i\n",sum);
  return 0;
}
