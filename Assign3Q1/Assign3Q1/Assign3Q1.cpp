/*
* Created by: Miguel R. Kunkle
* Created on : 12/6/2022
* 
* Description: Program takes a simple int queue and implements a function that takes the first element of the queue and moves it to the back of the queue.
*/

#include <iostream>
#include <queue>

void move_to_rear(std::queue<int>& line)
{
    int temp;

    temp = line.front();
    line.pop();
    line.push(temp);
}

void print_queue(std::queue<int>& line)
{
    while (!line.empty())
    {
        std::cout << line.front() << " ";
        line.pop();
    }

}

int main()
{
    //initilize queue
    std::queue<int> line;

    //fill up queue
    std::cout << "Initial queue: ";
    for (int i = 0; i < 5; i++)
    {
        line.push(i);
        std::cout << i << " ";
    }
    std::cout << "\n";

    //function call
    move_to_rear(line);
    std::cout << "Queue after: ";
    print_queue(line);

}
