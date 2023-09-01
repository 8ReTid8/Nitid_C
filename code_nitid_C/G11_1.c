#include <stdio.h>

float package_1(int day, int night) {
  
    float cost = 0;
    cost += day*0.75;
    cost += night*1.25;
    return cost;
}
float package_2(int day, int night) {
  
    int total = day + night;
    float cost = 0;

    if (total <= 500) {
        cost = 300;
    }
    else {
        total -= 500;
        cost = total*1.5;
        cost += 300;
    }
    return cost;
}

float package_3(int day, int night) {
    
    int total = day + night;
    float cost = 0;

    if (total <= 1200) {
        cost = 600;
    }
    else {
        total -= 1200;
        cost = total*1.25;
        cost += 600;
    }
    return cost;
}


int main() {
    int dtime, ntime, i, total_day = 0, total_night = 0;
    
    for (i = 0; i < 4; i++) {
        scanf("%d %d", &dtime, &ntime);
        total_day += dtime;
        total_night += ntime;
    }
    
    float pk1, pk2, pk3;
    pk1 = package_1(total_day,total_night);
    pk2 = package_2(total_day,total_night);
    pk3 = package_3(total_day,total_night);

    if (pk1 < pk2) {
        if (pk1 < pk3) {
            printf("1");
        }
        else {
            printf("3");
        }
    }
    else if (pk2 < pk1) {
        if (pk2 < pk3) {
            printf("2");
        }
        else {
            printf("3");
        }
    }
    else if (pk3 < pk1) {
        if (pk3 < pk2) {
            printf("3");
        }
        else {
            printf("2");
        }
    }
    return 0;
}