//we have given 3 sorted arrays and we have to return all the common elements in them. assuming that there are no duplicates in the arrays.


// Learnings ---> here I applied auto keyword (let the compiler figure out the type of variable), find() and distance function in algorithm library

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> find(vector<int> &A1, vector<int> &A2, vector<int> &A3){

    vector<int> common;

    int lenA = A1.size();
    int lenB = A2.size();
    int lenC = A3.size();

    // Choosing the smallest array for optimization
    if (lenA <= lenB && lenA <= lenC) {
        for (int i = 0; i < lenA; i++) {
            if (find(A2.begin(), A2.end(), A1[i]) != A2.end() &&
                find(A3.begin(), A3.end(), A1[i]) != A3.end()) {
                common.push_back(A1[i]);
            }
        }
    } else if (lenB <= lenA && lenB <= lenC) {
        for (int i = 0; i < lenB; i++) {
            if (find(A1.begin(), A1.end(), A2[i]) != A1.end() &&
                find(A3.begin(), A3.end(), A2[i]) != A3.end()) {
                common.push_back(A2[i]);
            }
        }
    } else {
        for (int i = 0; i < lenC; i++) {
            if (find(A1.begin(), A1.end(), A3[i]) != A1.end() &&
                find(A2.begin(), A2.end(), A3[i]) != A2.end()) {
                common.push_back(A3[i]);
            }
        }
    }

    return common;
}

//driver code
int main(){
    
    //declaring and initializing the containers i. vectors here
     vector<int> A1, A2, A3;
     int a,b,c;
     cout<<"please enter array size for array A1,A2 and A3:"<<endl;
     cin>>a>>b>>c;
     cout<<"please initialize the arrays :"<<endl<<"there should be no duplicates in the array"<<endl;
     cout<<"for Array A1"<<endl;
     for(int i=0;i<a;i++){
         int element;
         cin>>element;
         A1.push_back(element);
     }
     cout<<"for Array A2"<<endl;
     for(int i=0;i<b;i++){
         int element;
         cin>>element;
         A2.push_back(element);
     }
     cout<<"for Array A3"<<endl;
     for(int i=0;i<c;i++){
         int element;
         cin>>element;
         A3.push_back(element);
     }
    

    // Call the function to find common elements
    vector<int> result = find(A1, A2, A3);

    
    cout << "Common Elements: ";
    if (!result.empty()) {
        for (int num : result) {// here I used modified for loop
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements found boss." << endl;
    }

}