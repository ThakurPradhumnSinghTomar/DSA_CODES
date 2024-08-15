class Solution {
	
	public :
	
	struct Node{
	
		int count;
		int time;
		
		//constructor 
		Node(int time, int count){
			
			this->time=time;
			this->count=count;
			
	
			
		}
		
	};
	
	class compare{
		public :
		bool operator()(Node* a, Node* b){
			
			return (a->count<b->count);
		}
		
	};
	

	
	
	int leastInterval (vector <char>&tasks,int n){
		
		int time =0;
			int frequency[26] = {0};

    // Calculate frequency of each character
    
    for(char c : tasks) {
        frequency[c - 'A']++;
    
    }
	
	priority_queue<Node*, vector <Node*>,compare> pq;
	queue<Node*> q;
	
	//making priority queue
	for(int i =0;i<26;i++){
		
	if(frequency[i]>0){
		pq.push(new Node(0, frequency[i]));
	}
		
			}	
			
			while(!pq.empty||!q.empty()){
				if(!q.empty()&&time-q.front()->time>n){
					task t =pq.top();
					pq.pop();
					t->count--;
					t->time=time;
					if(t->count>0){
						q.push(t);
					}
					
					
				}
				
				time++;
			}
			
			
			return time;
			
		}
		
	};
	
	
	
	
