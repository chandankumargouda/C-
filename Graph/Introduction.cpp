->a graph is a collection of nodes where nodes
might not point to other nodes.

->the nodes represent real ife entities
and are connected by edges representing
relationship between thenodes and entties.
->Node=Vertex,Edges
->Applications of Graph:Google Map,

#mathematically representation of ghaph
G=(V,E)
->Graph is an ordered pair of set V and Set v
respectivel yvertices and edges.
->V={V1,V2,V3,.....,Vn}
->E={{V1,V2},{V2,V3},....{Vn-1,Vn}}

#Types of Graph
*Direction->1.Undirected:
          ->2.Directed:  
*Edge Weight->1.Weighted
            ->2.Unweighted

Graph Termology:
*MultiGraph:An Undirected graph is which multiple
            edges are allowed between 2 nodes.
*Simple Graph:An Undirected graph is which multiple
            edges and loops are not allowed between 2 nodes.  
*Complete Graph: A Complete graph is the one which every
                node is directly connected to the every other node.
                (Every possible edge between every existed node)
*Connected Graph:in this graph we have a direct or indirect path from
                 for every possible pair of vertex.
*Path:path pn is a graph whose vertices can be arranged in a sequence.
*Cycle:A cycle cn is also a graph whose vertices can be arranged in a cycle sequence.
*DAG(Directed Acyclic Graph):
*Degree:Degree of a vertex in a graph is the total no. of edges incident
        to it and away from it.(inegree,outdegree)
        ->Indirected graph outdegree of vertex is the total no. of outgoing edges
        & indegree is total no. of incoming edges.
*Tree:it is a connected graph with no edges,if we remove al cycle from a graph.(Connected and Acyclic graph)
        if we remove an edge from a tree ,it no more remaining connected and shouid be colled forest.
*Connected Component:if  there is a disconnected graph then the et of verteces which are connected 
                    from a connected component.

Facts:
    tree:|E|=|V|-1
    forest:|E|=|V|-1 (MAX)
    CONNECTED:|E|=|V|-1 (MIN)
    Undirected Complete:|E|=|V|C2 (max)
    Directed graph:|E|=|V|*(|V|-1) (max)

Implementation of Graph:
        Adjacency List:In this approach we represent graph
                        as a array of linked list.
        Adjacency map:In this approach we represent graph
                        as a array of map.
        Adjacency matrix:In this approach we represent graph
                        as a 2d array or matrix of v*v where v represents the vertices of graph.
        Incidence Matrix:in this approach we  prepare a V*C matrix where V is the no. of
                        vertices and c is the no. of edges.