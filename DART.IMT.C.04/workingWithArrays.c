#include <stdio.h>
int main(void){
     //! showMemory(cursors=[a, arrays[0], b, arrays[1], c, arrays[2]] , start=65520)
    short a[3] = {234,655, 843}; //array starts at #FFFA
    short b[2] = {12, 62}; //array[1]m, addres of b
    short c[4] = {3456, 3467, 23, 276};
    short * arrays[3] = {a, b, c};

  //  arrays[0] = address of A
  printf("Adress of a: %p\n", arrays[0]);
  //  *arrays[0] =value at address of A
  printf("Value of a: %d\n", *(arrays[0]));


  * (arrays[0] + 1) = 6;
  * (arrays[0] + 2) = 7;
    printf("%d \n", *arrays[1]);
  * arrays[1] = 3;
  printf("%d\n", *arrays[1]);
  * (arrays[1] + 1) = 4;


      * arrays[0] = 5; //a[0]
      arrays[0][0] = 0; //a[0]
      * (arrays[0] + 1) = 6;//a[1]
      arrays[0][1] = 0;//a[1]
      * (arrays[0] + 2) = 7;
      arrays[0][2] = 0;
      * arrays[1] = 3;
      arrays[1][0] = 0;
      * (arrays[1] + 1) = 4;
      arrays[1][1] = 0;
     return 0;

}

//short -> 2 byte
