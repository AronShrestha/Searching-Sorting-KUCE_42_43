#include<iostream>
using namespace std;
#define SIZE 7
int B_Search(int list[],int data);

int main()
{
	int list[]={5,18,23,34,55,66,88,99};
	cout<<"Enter the number you want to search"<<endl;
	int data;
	cin>>data;
	int answer;
	answer=B_Search(list,data);
	if(answer==-1)
	{
		cout<<"Number is not in the list"<<endl;
	}
	else
	{
		cout<<"Number is found in list at index ";
		cout<<answer<<endl;
	
	
	}

	return 0;
}

int B_Search(int list[],int data)
{
	int min, max,mid;
	min=0;
	max=SIZE-1;
	while(min<SIZE && max>=0)
	{
		mid=(min+max)/2;
		if(list[mid]==data)
		{
			return mid;
			break;
		}
		if(list[mid]<data)
		{
			min=mid+1;
		
		}
		else {
		max=mid-1;
		}
		
	
	}
	return -1;
	

}
