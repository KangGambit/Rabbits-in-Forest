#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    int answers[] = { 1,1,2,2,3 };
    std::unordered_map<int, int> count;
    for (int y :answers) {
        ++count[y];
    }
    int ans = 0;
    for (auto iter = count.begin(); iter != count.end(); ++iter)
    {
        ans += iter->first + 1;
        std::cout << iter->first << " " << iter->second << std::endl;
    }
    std::cout << "ans:" << ans << std::endl;

	return 0;
}