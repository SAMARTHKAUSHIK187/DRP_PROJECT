#include<iostream>
#include<array>
#include<algorithm>
#include <vector>


using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    array<int , 4> a = {1,2,3,4};
    cout << a.at(1) << endl;
    cout << a.empty() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;


    vector <int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(12);
    v[2] = 3;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<< v[i] << endl;
    }


    vector<int> vec;
    vec.push_back(1);
    vec.push_back(6);
    vec.push_back(6);
    vec.push_back(6);
    vec.push_back(6);
    vec.push_back(9);
    vec.push_back(7);
    vec.push_back(5);

    sort(vec.begin(), vec.end());//output {1,5,6,7,9}
    cout << "binary search ---> " << binary_search(vec.begin(), vec.end(), 11) << endl ;

    cout << "lower bound ---> " << lower_bound(vec.begin(), vec.end(), 6)-vec.begin() << endl ;
    cout << "upper bound ---> " << upper_bound(vec.begin(), vec.end(), 6)-vec.begin() << endl ;

    
}