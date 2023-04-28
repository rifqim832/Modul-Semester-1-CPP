#include<iostream>
using namespace std;
void refer (int bil1 , int bil2)
{
cout<<"nilai pada saat berada di fungsi refer :"<<endl; 
cout<<"nilai bilangan 1[X] = " <<bil1*bil2<<" \nNilai bilangan 2 [tetap]= " <<bil2 <<endl <<endl;
} 
int main()
{
	int bil1=7,bil2=6;
	cout<<"\t	REFERENCE"<<endl;
	cout<<"\t------------------"<<endl;
	cout<<"\nNilai sebelum pengambilan fungsi refer = "<<endl;
	cout<<" nilai bilangan 1 = "<<bil1<<"\n nilai bilangan 2 = "<<bil2<<endl<<endl;
	refer(bil1,bil2);
	cout<<"nilai setelah pemanggilan funsi refer = "<<endl;
	cout<<"nilai bilangan 1 = "<<bil1*bil2<<"\nNilai bilangan 2 = "<<bil2<<endl;
}
