std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
  vec.push_back(i); 
}
for (int i = 0; i < vec.size(); ) { // Note: No ++i here 
  vec.erase(vec.begin() + i); 
}
// Expected size of vec: 0
// Actual size of vec: 0

//Alternative Solution:

std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i);
}
for (auto it = vec.begin(); it != vec.end(); ) {
  if (/*some condition*/){
    it = vec.erase(it);
  } else {
    ++it;
  }
}
//This solution efficiently handles iterator invalidation.