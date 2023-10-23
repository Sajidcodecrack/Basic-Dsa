#include <iostream>
#include <queue>
using namespace std;

int main()
{

    priority_queue<int> pq;

    // Empty
    if (pq.empty())
    {
        cout << "Priority queue is empty." << endl;
    }

    // Size
    int elements = pq.size();
    cout << "Number of elements in the priority queue: " << elements << endl;

    // Push
    pq.push(42);
    pq.push(19);
    pq.push(56);
    cout << "Elements added to the priority queue." << endl;

    // Top
    int topElement = pq.top();
    cout << "Top element in the priority queue: " << topElement << endl;

    // Pop
    pq.pop();
    cout << "Top element removed from the priority queue." << endl;

    return 0;
}
