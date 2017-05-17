#include <stdio.h>
#include <iostream>
using namespace std;

void spaces(int);
void hashes(int);

int main(void){

    int height;

    cout << "Enter the height of the mario pyramid: ";
    cin >> height;


    int count = 2;
    printf("# \n");

    for(int i = height;i>0;i--){
        spaces(i);
        hashes(count);
        printf("\n");
        count+=1;
    }
}

void spaces(int num){
    for(int i =0;i < num;i++){
        printf("%c", 0x20);

    }
}

void hashes(int num){
    for(int i=0;i<num;i++){
        printf("#");
    }
}


