#include "../include/Graph.h"

Graph::Graph()
{
    //ctor
}

Graph::Graph(int nbSommet, std::vector<std::string> sommets, std::vector<Link> Links):
    m_nbSommet(nbSommet), m_sommets(sommets), m_links(Links), m_nbLink(Links.size())
    {

    }

Graph::Graph(int nbSommet, std::vector<std::string> sommets, int nbLinks, std::vector<Link> Links):
        m_nbSommet(nbSommet), m_sommets(sommets), m_links(Links), m_nbLink(nbLinks)
{

}

int Graph::findSommet(const std::string &sommet) const {
    for (int i = 0; i < getNb(); i++){
        if (m_sommets.at(i) == sommet) return i;
    }
    return -1;
}

std::vector<Link> Graph::findLinks(const std::string &sommet) {
    std::vector<Link> res;
    for (int i = 0; i < getNbLink(); i++){
        if (m_links.at(i).getS1() == sommet || m_links.at(i).getS2() == sommet) res.push_back(m_links.at(i));
    }
    return res;
}

Graph::~Graph()
{
    //dtor
}
