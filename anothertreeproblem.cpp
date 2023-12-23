#include<bits/stdc++.h>
using namespace std;

class AAA{
    public:
        string name;
        int id,parent_id;

        AAA(string name,int id,int parent_id)
        {
            this->name=name;
            this->id=id;
            this->parent_id=parent_id;
        }
};

class HTree{
    public:
        AAA* data;
        vector<HTree*>childs;

        HTree(AAA* data)
        {
            this->data=data;
            this->childs={};
        }
};

HTree* insertNode(AAA* data)
{
    HTree* node=new HTree(data);
    return node;
}

HTree* insertNode(HTree* child,HTree* root)
{
    for(HTree* curChild:root->childs)
    {
        if(curChild->data->id == child->data->id) return curChild;
    }
    root->childs.push_back(child);
    return root->childs[root->childs.size()-1];
}

HTree* recursiveInsert(HTree* root, map<int,HTree*>relation)
{
    if(root->data->parent_id==-1) return root;
    return insertNode(root,recursiveInsert(relation[root->data->parent_id],relation));
}

map<int,HTree*> GenerateTree(vector<AAA*>aAAs)
{
    vector<HTree*>rootList;
    map<int,HTree*>relation;
    for(AAA* aAA:aAAs)
    {
        HTree* node=insertNode(aAA);
        relation[node->data->id]=node;
        if(node->data->parent_id==-1) rootList.push_back(node);
    }
    for(AAA* aAA:aAAs)
    {
        if(aAA->parent_id!=-1)
        {
            insertNode(relation[aAA->id],recursiveInsert(relation[aAA->parent_id],relation));
        }
    }
    return relation;
}
int main()
{
    vector<AAA*>aAAs;
    aAAs.push_back(new AAA("A",1,-1));
    aAAs.push_back(new AAA("B",5,1));
    aAAs.push_back(new AAA("K",20,1));
    aAAs.push_back(new AAA("C",4,5));
    aAAs.push_back(new AAA("D",10,-1));
    aAAs.push_back(new AAA("E",9,10));
    aAAs.push_back(new AAA("F",23,-1));
    aAAs.push_back(new AAA("G",22,-1));

    map<int,HTree*>allNodes = GenerateTree(aAAs);
    for(auto ii:allNodes)
    {
        cout<<ii.first<<endl;
        for(int j=0;j<ii.second->childs.size();j++)
            
    }
}