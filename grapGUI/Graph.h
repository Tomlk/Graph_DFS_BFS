#pragma once
#include <list>
#include <vector>
#include <string>

using namespace std;

//�����ڽӱ����洢ͼ��
//graph��Ϊ��������ø��ƹ��캯����
class Graph {
private:
	int v; //������Ŀ
	int e; //����Ŀ
	vector<list<int> > adj; //�ڽӱ�,���ָ�������⡣֮ǰ����ͨ���飬�������Ϊֵ���ݵ�ʱ�����ø��ƹ��캯������ʱ�������⡣ǳ������
public:
	Graph(int v);//ֱ�ӹ�����v�������ͼ
	Graph(string filename, int v);//һ�����ļ��ж�ȡͼ�Ľṹ�Ĺ��캯��
	~Graph();//ɾ��new�������ڴ�ռ�
	int V();//���ص���
	int E();//���ر���
	void AddEdge(int v, int w);//���һ����
	list<int> Adj(int v);//���ص�������list�ĵ�������
};


