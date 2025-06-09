#include<stdio.h>

// int binarysearch( int target, int mid, int high, int low){
//     int f = 0;
//     for(low <= high){
//         if(arr[mid] == target){
//             return f = 1;
//         }
//         if(arr[mid] > target){
            
//         }

//     }
// }
int main () {
    int arr[4] = {47, 38, 58, 69};
    int arrlength = sizeof(arr)/sizeof(int);
    int high  = arrlength - 1;
    int low = 0;
    int mid = (high + low)/2;
    int f = 0;

    printf("array length = %d\n ", arrlength);
    printf("high = %d\n ", high);
    printf("mid = %d\n ", mid);
    printf("low = %d\n ", low);

    while(low <= high){
        if(arr[mid] == 58){
            f = 1; break;
        }
        else if(arr[mid] > 58){
            high = mid - 1;
        }
        else if(arr[mid] < 58){
            low = mid + 1;
        }
    }
    if(f == 1){
        printf("elemnt found");
    }
    return 0;
}

