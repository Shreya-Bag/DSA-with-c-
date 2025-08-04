#include<iostream>
using namespace std;
int main(){
    // int arr[3][4];
    // cout<<"Enter array elements: ";
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    /*
    cout<<"array elements are: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

*/
/*  int key=17;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key)
            {
                cout<<"found";
                return 0;
            }
        }
        
    }
    cout<<"Not Found";*/
    //  for(int i=0;i<3;i++){
    //     int sum=0;
    //     for(int j=0;j<4;j++){
    //         sum+=arr[i][j];
    //     }
    //     cout<<sum<<" ";
    // }

    // int max=arr[0][0],min=arr[0][0];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         if(max<arr[i][j])
    //         max=arr[i][j];
    //         if(min>arr[i][j])
    //         min=arr[i][j];
    //     }
    // }
    // cout<<" max and min is : "<<max<<" "<<min;

    
    // for(int i=0;i<3;i++){
    //     int max=arr[i][0],min=arr[i][0];
    //     for(int j=0;j<4;j++){
    //         if(max<arr[i][j])
    //         max=arr[i][j];
    //         if(min>arr[i][j])
    //         min=arr[i][j];
            
    //     }
    //     cout<<" max and min is : "<<max<<" "<<min<<endl;
    // }
    int arr[3][3];
    cout<<"Enter array elements: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //transpose
    /*
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
        */
    //flip
    for(int i=0;i<3/2;i++){
        for(int j=0;j<3;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[2-i][j];
            arr[2-i][j]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}