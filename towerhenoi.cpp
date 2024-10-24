#include<iostream>
using namespace std;
void ToH (int n, char src, char aux, char dest) {
if (n==1){
cout<<"Move disk_"<<n<<" from "<<src<<" to "<<dest<<endl;
return;
}
ToH (n-1, src, dest, aux);
cout<<"Move disk _"<<n<<" from "<<src<<" to "<<dest<<endl;
 ToH (n-1, aux, src, dest);
}
int main() {
int n;
cout<<"Enter no. of disks : ";
cin>>n;
ToH(n, 'A', 'B','C');

return 0;
}