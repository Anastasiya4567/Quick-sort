#include <iostream>
#include <vector>

using namespace std;

int part(vector<int> v, vector<int>::iterator L, vector<int>::iterator R)
{
	int pivot = v[L];
    vector<int>::iterator from_left = L+1;
	vector<int>::iterator from_right = R;
	
	while(from_left >= from_right)
	{
		if(v[from_left] <= pivot) from_left++;
		else {
			while((from left <= from_right) && pivot < v[from_right])) from_right--;
			swap(from_left, from_right);
	}
}


void quicksort(vector<int> &v,  vector<int>::iterator L, vector<int>::iterator R)
{
	if(L < R){
		int q = part(v, L, R);
		quicksort(v, L, q-1);
		quicksort(v, q+1, R);
	
}

int main()
{
	vector<int>::iterator k;
    int n;
    cin >> n;
    vector<int> v;
    int z;
    for (int j=0; j<n;j++)
    {
        cin >> z;
        v.insert(v.begin(),z);
    }
	vector<int>::iterator
	
	quicksort(v, v.begin(), v.end());
	
	
	 for (vector<int>::iterator i=v.begin(); i<v.end(); i++)
    {
       cout << *i << " ";
    }
	
}