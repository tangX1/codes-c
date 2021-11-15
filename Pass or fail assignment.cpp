#include<iostream>
using namespace std;
int main()
{
	int exam_score,prog;
	cout<<"What is the value of your variable exam?"<<endl;
	cin>>exam_score;
	cout<<"How many programs were completely computed?"<<endl;
	cin>>prog;
	if(exam_score>=60&&prog>=10)
	{
		cout<<"Passed"<<endl;
	}
	else if(exam_score<60||prog<10)
	{
	cout<<"Failed";
    }
	return 0;
}
