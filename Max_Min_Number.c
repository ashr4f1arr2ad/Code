//Maximum Number
#include <stdio.h>

int main() {

int arr[] = {5,2,8,18,20,3,9,4,15,16};
int max = 0; //Maximum number hold 0 at first

for(int i = 0; i<=arr[i]; i++) {

    if(arr[i] > max) {
        max = arr[i]; //Current value assign in maximum variabel
    }
  }
printf("Maximum num is: %d", max);
}


//Minimum Number
// #include <stdio.h>

// int main() {

// int arr[] = {5,2,8,18,20,3,9,4,15,16};
// int min = arr[0]; //Declare a variable which contain the first value of the array

// for(int i = 0; i<=arr[i]; i++) {

//     if(arr[i] < min) { //Current element less than minimum
//         min = arr[i];  //Current element assign in minimum variable
//     }
//   }
// printf("Minimum Num Is: %d", min);
// }