#include <stdio.h>
#include <math.h>

struct Point3D {
    double x, y, z;
};

double distance(struct Point3D a, struct Point3D b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    double dz = a.z - b.z;
    return sqrt(dx * dx + dy * dy + dz * dz);
}

int main() {
    int n;
    scanf("%d", &n);
    struct Point3D points[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &points[i].x, &points[i].y, &points[i].z);
    }
    double distances[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            distances[i][j] = distance(points[i], points[j]);
        }
    }
    double maxDistances[3] = {0.0, 0.0, 0.0};
    for (int k = 0; k < 3; k++) {
        double maxDistance = 0.0;
        int maxI = -1, maxJ = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (distances[i][j] > maxDistance) {
                    maxDistance = distances[i][j];
                    maxI = i;
                    maxJ = j;
                }
            }
        }
        if (maxI != -1 && maxJ != -1) {
            maxDistances[k] = maxDistance;
            distances[maxI][maxJ] = 0.0;
        }
    }
    for (int k = 0; k < 3; k++) {
        printf("%.2f\n", maxDistances[k]);
    }
    
    return 0;
}