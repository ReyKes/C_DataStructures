#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct edge_node
{


};
typedef struct edge_node node;

struct graph
{

};
typedef struct graph graph;

graph* create_graph(int nb_nodes, bool is_directed)
{

}

void print_graph(graph* g)
{

}
edge_node* get_neighbors(graph* g,int u)
{

}

bool graph_adjacent(graph* g,int u, int v)
{

}
void graph_dfs(graph* g,int u, bool visited[])
{
    if(visited[u])
        return;
    visited[u]=true;
    edge_node* e=get_neighbors(g,u);
    while(e != NULL)
    {
        graph_dfs(g,e->v,visited);
        e=e->next;
    }

}

int main()
{
    graph* g=create_graph(13,false);
    graph_add_edge(g,0,1,1);
    graph_add_edge(g,1,2,12);
    graph_add_edge(g,1,3,10);
    graph_add_edge(g,2,4,11);
    graph_add_edge(g,2,5,13);
    graph_add_edge(g,3,5,12);
    graph_add_edge(g,3,7,13);
    graph_add_edge(g,4,6,9);
    graph_add_edge(g,5,6,7);
    graph_add_edge(g,6,7,15);
    graph_add_edge(g,8,9,12);
    graph_add_edge(g,8,10,10);
    graph_add_edge(g,9,10,10);
    graph_add_edge(g,10,11,9);
    graph_add_edge(g,11,12,10);

    int i;
    bool visited[13];
    for(i=0;i<13;i++)
        visited[i]=false;
    graph_dfs(g,0,visited);


    return 0;
}
