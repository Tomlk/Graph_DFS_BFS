#include "Graph.h"
Graph::Graph(int v) : adj(v){
	//创建空的邻接表，点的数目为v
	this->v = v;
	this->e = 0;
	//this->adj = new vector(v);//不要将stl和数组混合使用，比如这里指向list的指针，但是根本无法确定list的大小。可以改用vector。
	//后来发现原因应该是传入图对象是使用了默认的复制构造函数，而数组不能直接赋值。换成vector之后才可以。
}
Graph::~Graph() {
	//delete[] adj;

}
int Graph::E() {
	return e;
}

int Graph::V() {
	return v;
}

void Graph::AddEdge(int v, int w) {
	adj[v].push_back(w);
	adj[w].push_back(v);
	e++;
}
//直接返回一个列表，列表不大的话消耗不大。
list<int> Graph::Adj(int v) {
	return adj[v];
}
