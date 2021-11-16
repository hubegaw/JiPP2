#ifndef CWICZENIE6_NODE_H
#define CWICZENIE6_NODE_H

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

    friend double pointsDistance(Node a, Node b);
};
double pointsDistance(Node a, Node b);

#endif //CWICZENIE6_NODE_H
