
#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <queue>

template <typename T> 
class PriorityQueue {
	public:
		PriorityQueue();
		~PriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
	private:
		std::priority_queue<T> storage;
};
#endif //PRIORITY_QUEUE_H
