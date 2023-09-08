#include<iostream>
#include <cstring>
#include<string>
#define AUTHOR "fab-c14"
using namespace std;
int matchChecker(string st,char guess){
	int len = size(st);
	int i = 0;
	int ncount=0; // if the word is twice in
	while(i<len){
		if(guess==st[i]){
			return i; // returns the position 
		}
		i++;
	}
	return -1;
}

void matchMaker(string st,int guesses){

	string word="";
	cout<<st;
	int sizeofst = size(st);
	for (int i=0; i<sizeofst;i++){
		word+="_";	
	}
	
	// word[1]='a';
	// cout<<word;

	char guess;
	while(word!=st){
		
		
		cout<<"\t Guessing Word : ";
		cin>>guess;
		cout<<endl;
		int pos=matchChecker(st,guess);//get the position if the element is present if that does not match pos = 0
		if(pos<0){
			cout<<"\tOops Didn't Match Any Word In Text"<<endl;
			guesses--;
		}
		else{
			word[pos] = guess;
			
		}
		cout<<"\t"<<word<<endl;
		if(guesses<=0){
			cout<<"You Know Nothing!!!, I will Chew Your Meat "<<endl;
			break;
		}
	}
	
}
int main(){
	string st;
	cout<<"Enter a word you want to set it secretly \n now move computer to your friend let him guess the word or guess it by yourself : ";
	
	cin>>st;
	int guesses;
	cout<<"Please Enter How Many Guesses You Want : ";
	cin>>guesses;
	// word is saved now 
	matchMaker(st,guesses);
	
	return 0;
}