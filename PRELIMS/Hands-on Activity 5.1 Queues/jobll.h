#ifndef JOBLL_H
#define JOBLL_H
#include <iostream>
#include <string>

//create a class
class Job{
    public:
        int id;
        std::string userName;
        int numPages;
};

//new job
//builds and return value
Job new_job(int id, std::string userName, int numPages){
    Job job;
    job.id = id;
    job.userName = userName;
    job.numPages = numPages;
    return job;
}

//creating a node 
class JobNode{
    public:
        Job data;
        JobNode* next;
};

//new job node
JobNode* new_job_node(Job job){
    JobNode* newNode = new JobNode();
    newNode->data = job;
    newNode->next = nullptr;
    return newNode;
}

//printer class 

class Printer{
    private:
        JobNode* front;
        JobNode* back;
        int nextId;

    public:
        Printer(){
            front = nullptr;
            back = nullptr;
            nextId = 1;
        }

        void addJob(std::string userName, int numPages){
            Job job = new_job(nextId, userName, numPages);
            nextId++;

            JobNode* newNode = new_job_node(job);

            //if queue is empty, new node becomes front and back
            if(front == nullptr && back == nullptr){
                front = newNode;
                back = newNode;
                return;
            }
            //counter
            back->next = newNode;
            back = newNode;
        }

        bool isEmpty(){
            return front == nullptr;
        }

        //display all jobs pending

        void displayQueue(){
            if(isEmpty()){
                std::cout<<"No pending jobs."<<std::endl;
                return;
            }
            std::cout <<"Pending jobs: "<<std::endl;
            JobNode* current = front;
            while(current != nullptr){
                 std::cout << "  Job " << current->data.id << " - " << current->data.userName
                           << " (" << current->data.numPages << " pages)" << std::endl;
                current = current->next;
            }            
        }

        //processing 

        void processOne(){
            if(isEmpty()){
                std::cout<<"No pending jobs. Printer is idle."<<std::endl;
                return;
            }
            JobNode* temp = front;
            std::cout << "Printing Job " << temp->data.id << " for " << temp->data.userName
                       << " (" << temp->data.numPages << " pages)" << std::endl;

            front = front->next;
            if(front == nullptr){
                back = nullptr;
            }
            delete temp;
        }

        //proces all jobs
        void processAll(){
            if(front == nullptr){
                std::cout << "No pending jobs."<<std::endl;
                return;
            }

            while(front != nullptr){
                JobNode* temp = front;
                std::cout << "Printing Job " << temp->data.id << " for " << temp->data.userName
                           << " (" << temp->data.numPages << " pages)" << std::endl;

                front = front->next;
                delete temp;
            }
            back = nullptr;
        }
};

#endif