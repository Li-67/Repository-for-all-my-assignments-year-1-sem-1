#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // ========================
    // 1D Array - Weekly Revenue Tracker
    // ========================
    float revenue[7];
    float total = 0;
    printf("=== 1D ARRAY- WEEKLY REVENUE TRACKER ===\n");
    
    for(int i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i+1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }
    
    float average = total / 7;
    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    // ==============================
    // 2D Array - Room Occupancy (One Branch)
    // 5 floors, 10 rooms per floor
    // ==============================
    printf("=== 2D ARRAY- ROOM OCCUPANCY (ONE BRANCH) ===\n");
    int occupancy[5][10];
    
    // Assign random occupancy (1 = occupied, 0 = vacant)
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 10; j++) {
              occupancy[i][j] = rand() % 2;
        }
    }
    
    for(int i = 0; i < 5; i++) {
        int occupied = 0, vacant = 0;
        for(int j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1) occupied++;
            else vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i+1, occupied, vacant);
    }
    printf("\n");

    // ==============================
    // 3D Array - Multiple Branches
    // 3 branches, 5 floors, 10 rooms
    // ==============================
    printf("=== 3D ARRAY - MULTIPLE BRANCHES (3 BRANCHES) ===\n");
    int chain[3][5][10];
    int totalOccupied = 0;
    
    for(int b = 0; b < 3; b++) {
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 10; j++) {
                chain[b][i][j] = rand() % 2;
                if(chain[b][i][j] == 1) totalOccupied++;
            }
        }
    }
    
    printf("Total number of occupied rooms across all 3 branches: %d\n", totalOccupied);
    printf("Total rooms in all branches: %d\n", 3*5*10);
    printf("Total vacant in all branches: %d\n", (3*5*10) - totalOccupied);
    
    return 0;
}