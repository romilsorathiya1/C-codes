// #include<iostream>
// using namespace std;
// int find(int arr[], int size, int key){
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             for(int k=j+1; j<size; j++){
//                 if(arr[i]+arr[j]+arr[k]==key){
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
//                 }
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     int key;
//     cout<<"Enter key :-";
//     cin>>key;
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     find(arr,10,key);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,0,2,2,0,0,1,2,1,1};
//     for(int i=0; i<10; i++){
//         for(int j=i+1; j<10; j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0; i<10; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,3,4,1,6,8,5};
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }

        }
    }
return 0;
}