#include "Graph.h"
Graph::Graph(int v) : adj(v){
	//�����յ��ڽӱ������ĿΪv
	this->v = v;
	this->e = 0;
	//this->adj = new vector(v);//��Ҫ��stl��������ʹ�ã���������ָ��list��ָ�룬���Ǹ����޷�ȷ��list�Ĵ�С�����Ը���vector��
	//��������ԭ��Ӧ���Ǵ���ͼ������ʹ����Ĭ�ϵĸ��ƹ��캯���������鲻��ֱ�Ӹ�ֵ������vector֮��ſ��ԡ�
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
//ֱ�ӷ���һ���б��б���Ļ����Ĳ���
list<int> Graph::Adj(int v) {
	return adj[v];
}
