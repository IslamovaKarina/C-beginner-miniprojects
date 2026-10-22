#include <stdio.h>

int main(){

    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int result[2];

    for (int i = 0; i < 4; i++){
        for (int j = i + 1;j < 4;j++){
            if (nums[i] + nums[j] == target)
           result[0] = i;
           result[1] = j;
        
    }
}
printf("%d %d\n", result[0], result[1]);
    return 0;
}