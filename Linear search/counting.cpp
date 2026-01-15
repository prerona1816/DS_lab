#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element:";
    cin>>n;
    int a[n];
    cout << "Enter the elements:";
    for(int i=0; i<n;i++)
    {
        cin >> a[i]; 
    }
    int found=0;
    int key;
    int count = 0;
    cout << "Enter the element to scarch:";
    cin >> key;
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            count++;
            found = 1;
        }
    }
    if (found == 0)
    {
        cout << "The element is not found" << endl;
    }
    cout << count << endl;
    return 0;
}
