#include <stdbool.h>

typedef struct {
    int big;
    int medium;
    int small;
} ParkingSystem;

ParkingSystem park1;

ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    park1.big=big;
    park1.medium=medium;
    park1.small=small;
    return &park1;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    if(carType==1){
        if(park1.big!=0){
            park1.big-=1;
            return 1;
        } else{
            return 0;
        }
    } else if(carType==2){
        if(park1.medium!=0){
            park1.medium-=1;
            return 1;
        } else{
            return 0;
        }
    } else if(carType==3){
        if(park1.small!=0){
            park1.small-=1;
            return 1;
        } else{
            return 0;
        }
    }
    return 0;
}

void parkingSystemFree(ParkingSystem* obj) {

}