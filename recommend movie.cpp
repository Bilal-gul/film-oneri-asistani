#include <iostream>
#include <map>
#include <string>
#include <time.h>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

void console(){
	cout << "----- Type of Movies -----" << endl;
	cout << "1- Action" << endl;
	cout << "2- Comedy" << endl;
	cout << "3- Science Fiction" << endl;
	cout << endl;
}

int main() {

string type, reply;


map<string, vector<string>> Movies;

vector<string> actionMovies {"Mad Max", "John Wick", "Gladiator"};
vector<string> comedyMovies {"The Mask", "Yes Man", "Mr. Bean"};
vector<string> science_fiction_movies {"Inception", "Interstellar", "Matrix"};

Movies.insert(pair<string, vector<string>>("action", actionMovies));
Movies.insert(pair<string, vector<string>>("comedy", comedyMovies));
Movies.insert(pair<string, vector<string>>("science fiction", science_fiction_movies));


console();
	
	cout << "What kind of movies ? : ";
	getline(cin, type);
	cout << endl;
	
	transform(type.begin(), type.end(), type.begin(), ::tolower);
	
	srand(time(0));
	
	int random = 2;
		
	do{
		

	
if(type == "action"){
	
	    
			
			cout << ">> Movie i can recommend : " << Movies[type][random] << endl;
			cout << endl;
			cout << ">> Are you happy with my suggestion (yes/no) ? : ";
			cin >> reply;
			cout << endl;
			
			transform(reply.begin(), reply.end(), reply.begin(), ::tolower);
			
			if(reply == "yes"){
				
				random--;
				if(random == -1){
					cout << ">> There are no other movies left in this genre, I recommend a different genre.." << endl;
					cout << endl;
					type = "comedy";
					random = 2;
					continue;
				}
				
				cout << ">> Great then these are the movies you might like :)  : " << endl;
				cout << endl;
				
			
				
				continue;
			}else if(reply == "no"){
				
				cout << ">> Hmm, Then I suggest another type.." << endl;
				cout << endl;
				
			type = "comedy";
				continue;
			}
		
	}else if(type == "comedy"){
	
	
			
			cout << ">> Movie i can recommend : " << Movies[type][random] << endl;
			cout << endl;
			cout << ">> Are you happy with my suggestion ? : ";
			cin >> reply;
			cout << endl;
			
			transform(reply.begin(), reply.end(), reply.begin(), ::tolower);
			
			if(reply == "yes"){
				
				random--;
				if(random == -1){
					cout << ">> There are no other movies left in this genre, I recommend a different genre.." << endl;
					cout << endl;
					type = "science fiction";
					random = 2;
					continue;
				}
				
				cout << ">> Great then these are the movies you might like :)  : " << endl;
				cout << endl;
					
			
				continue;
			}else if(reply == "no"){
				
				cout << ">> Hmm, Then I suggest another type.." << endl;
				cout << endl;
				
			type = "science fiction";
				continue;
			}
			
}else if(type == "science fiction"){
		
			
			cout << ">> Movie i can recommend : " << Movies[type][random] << endl;
			cout << endl;
			cout << ">> Are you happy with my suggestion ? : ";
			cin >> reply;
			cout << endl;
			
			transform(reply.begin(), reply.end(), reply.begin(), ::tolower);
			
			if(reply == "yes"){
				
				random--;
				if(random == -1){
					cout << ">> There are no other movies left in this genre, I recommend a different genre.." << endl;
					cout << endl;
					type = "action";
					random = 2;
					continue;
				}
				
				cout << ">> Great then these are the movies you might like :)  : " << endl;
				cout << endl;
				
				
			
				continue;
			}else if(reply == "no"){
				
				cout << ">> Hmm, Then I suggest another type.." << endl;
				cout << endl;
				
			type = "action";
				continue;
			}
		
	}else{
		cout << ">> I don't know" << endl;
		cout << endl;
		
		console();
		
	    cout << "What kind of movies ? : ";
	    getline(cin, type);
	    cout << endl;
	
	    transform(type.begin(), type.end(), type.begin(), ::tolower);
	
		continue;
	}
	
	
	
}while(reply != "enough");




	return 0;
}
