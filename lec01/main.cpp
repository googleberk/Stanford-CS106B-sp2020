#include <iostream>
#include <list>

using namespace std;

/*returns the sum of a positive integer(should be >=2)'s positive divisor(excluding itself)*/
int sum_posi_divisor(int num) {
    int total = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            total += i;
        }
    }
    return total;
}


int main() {
/*  interesting note here: don't compute the 5th perfect number(which is 33550336),
 *  which would be really slow  */
    int hyper_total = 4;
    int count = 0;
    int num = 2;
    list<int> g_list;
    std::list<int>::iterator it;
    while (count != hyper_total) {
        if (sum_posi_divisor(num) == num) {
            g_list.push_back(num);
            count++;
        }
        num++;
    }
    printf("first %d perfect number list:", hyper_total);
    for (it = g_list.begin(); it != g_list.end(); it++){
        // note, [it] was declared as an iterator at line 25, and we need to use * before it
        // to get the value
        cout << " " << *it;
    }
    std::cout << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

/* notes:
 *
 * 1. The function main returns an integer. Curious where that integer goes?
 *    Come talk to me after class!
 * Answer: well, I don't know this answer, may look at it in the future. */