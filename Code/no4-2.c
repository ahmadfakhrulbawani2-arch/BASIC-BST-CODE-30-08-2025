#include <stdio.h> 
#include <stdbool.h> 
#include <math.h> 

// Lontong Sayur SUPER W

typedef struct 
{
    double x, y;
    double w, h;
} Entity; 

typedef struct 
{
    double x, y;
} Vector; 

bool diArea(Entity area, Vector koordinat) {
    return area.x + area.w / 2 >= koordinat.x && area.x - area.w / 2 <= koordinat.x && 
    area.y + area.h / 2 >= koordinat.y && area.y - area.y / 2 <= koordinat.y;
}

float jarakAntar(Vector a, Vector b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() 
{
    double ukMapX, ukMapY;
    scanf("%lf %lf", &ukMapX, &ukMapY);
    
    Entity rm, dt;
    Vector pl;
    scanf("%lf %lf %lf %lf", &rm.x, &rm.y, &rm.w, &rm.h);
    scanf("%lf %lf %lf %lf", &dt.x, &dt.y, &dt.w, &dt.h);
    scanf("%lf %lf", &pl.x, &pl.y);

    if(diArea(rm, pl)) {
        printf("KAMU SUDAH SAMPAI\n");
    } else if(diArea(dt, pl)) {
        printf("KAMU TERHALANG\n");
    } else {
        Vector rm2 = {rm.x, rm.y}; 
        double jarak = jarakAntar(pl, rm2); 
        printf("%.2lf METER LAGI", jarak);
    }

    return 0;
}