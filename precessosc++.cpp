#include <iostream>
#include <thread>
#include <semaphore.h>

sem_t semaphore;

void thread_function(int id) {
    sem_wait(&semaphore);
    std::cout << "Thread " << id << " está acessando a seção crítica\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Thread " << id << " está saindo da seção crítica\n";
    sem_post(&semaphore);
}

int main() {
    std::thread threads[3];
    int thread_ids[3] = {1, 2, 3};
    sem_init(&semaphore, 0, 1);

    for (int i = 0; i < 3; ++i) {
        threads[i] = std::thread(thread_function, thread_ids[i]);
    }

    for (int i = 0; i < 3; ++i) {
        threads[i].join();
    }

    sem_destroy(&semaphore);
    return 0;
}
