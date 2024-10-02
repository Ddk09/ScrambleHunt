#include<bits/stdc++.h>
#include<stdio.h>
#include<fstream>
using namespace std;
int main(){
    cout<<"-----------------------------RULES OF THIS GAME-------------------------------------"<<endl;
    cout<<"1.UNJUMBLE THE ANIME TITLES."<<endl;
    cout<<"2.IN THIS GAME THERE ARE NO SPACES INCLUDED IN THE ANIME TITLES WRITE THE ANSWERS WITHOUT SPACES"<<endl;
    cout<<"3.YOU WILL GET 3 ATTEMPTS"<< endl;
    cout<<"4.PRESS 'Y' TO CONTINUE PLAYING"<<endl;
    cout<<"5.YOUR SCORES WILL BE DISPLAYED AT THE END"<<endl;
    cout<<"--------------------------------------------------------------------------------------"<<endl;
    
char w;  
string b;
int pos;
string word,hint;
int count=0;
srand(time(0));
ifstream inputFile("animelist.txt");
if(!inputFile.is_open()){
    cout<<"error file not opened"<<endl;
    return 1;
}
vector<pair<string,string>> lines;
string line;
while(getline(inputFile,line)){
    stringstream ss(line);
   
    getline(ss,word,'|');
    getline(ss,hint);
    lines.push_back(make_pair(word,hint));
}
int size=lines.size();
string str2;
while(true){

pos=rand()%size;
word=lines[pos].first;
hint=lines[pos].second;
string h=word;
for(int j=0;j<word.length();j++){
int ozz=rand()% (word.length());
if(word[ozz]==' '){

    
}
swap(word[j],word[ozz]);}

cout<<"unjumble the word:"<<word<<endl;
cout<<"hint:"<<hint<<endl;

for(int i=0;i<3;i++){
cin>>b;


if(b==h){
    count++;
    cout<<"~~~~~~~~^-^CONGRATES!YOU UNJUMBLED THE WORD^-^~~~~~~~~"<<endl;
    cout<<"YOUR SCORE IS:"<<count<<endl;
break;
}

}

if(b!=h){
    cout<<"YOU LOSE(┬┬﹏┬┬)"<<endl;
    cout<<"Correct answer:"<<h<<endl;
}

cout<<"DO YOU WANT TO CONTINUE?Y/N"<<endl;
cin>>w;
if(w!='Y'){
 break;
}
}

}


