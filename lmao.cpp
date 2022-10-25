#include <thread>
#include <vector>

void useful_function(int x){
  while(true){
    int* x = new int(69); 
  }
}

int main(){
  std::vector<std::thread> thread_pool;
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  thread_pool.emplace_back(std::thread(useful_function, 69));
  for(auto& i: thread_pool){
  	i.join();
  }
  return 0;
}
