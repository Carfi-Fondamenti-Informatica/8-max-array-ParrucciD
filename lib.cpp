#include "lib.h"
float magg(float array[], int dimensione){
    float max=array[0];
    for( int i=0;i<dimensione;i++){

        if(array[i]>max){
            max=array[i];
        }
    }
return max;
}


