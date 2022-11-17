#include<iostream>
using namespace std;


// int main(int argc, char** argv){
//     int n;
//     cin>>n;
//     int *mat=new int[n];
//     for(int i=0;i<n;i++){
//         cin>>*(mat+i);
//     }
// for(int i=0;i<n;i++){
//   cout<<*(mat+i);}
// }

int main(int argc, char** argv){
    int n;
    cin>>n;
    int **mat=new int*[n];
    for(int i=0;i<n;++i){
      mat[i]= new int[n];
    }
    for(int i=0;i<n;i++){
cout<<mat+i<<endl;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
        cin>>*(*(mat+i)+j);}
    }

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<*(*(mat+i)+j);}
        cout<<endl;
    }
    cout<<"data"<<mat[1][1];
}