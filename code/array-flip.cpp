//Write a function that receives an array of integers and reverses the contents of the array
#include<iostream>

void printRev(int a[], int len){

    int head, tail;

    for(int i =0; i < len/2; i++}{

        head = a[i];
        tail = a[len - 1 - i];
        a[i] = tail;
        a[len - 1 - i] = head; 

    } 

}



int main(){

    

    return 0;
}