#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int hourglass(int arr[6][6])
{
int sum[6][6];

for(int i=0; i<=3;i++){
     for(int j=0;j<=3;j++){
      sum[i][j]= arr[i][j] + arr[i][j+1] + arr[i][j+2]
      + arr[i+1][j+1] + arr[i+2][j] +arr[i+2][j+1] +arr[i+2][j+2];
          }
    }

int largest=sum[0][0];
   for(int i=0; i<=3;i++){
     for(int j=0;j<=3;j++){
        if(sum[i][j]>largest) {
         largest = sum[i][j];
         }
   }
}
return largest;

}
int main()
{
   int arr[6][6];
   for(int i=0; i<=5;i++){
     for(int j=0;j<=5;j++){
     cin>> arr[i][j];
     }
    }
    cout<<hourglass(arr);
}
