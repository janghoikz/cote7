#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int rest = 0; // 나눈값
    int temp = 0; //  나머지 
    int number = 0; // 큰수
    int number2 = 0; // 작은수
    if (n > m) // 최대 공약수 구하기
    {
        number = n;
        number2 = m;
        while (true)
        {            
            rest = number / number2;
            temp = number % number2;
            if (temp == 0)
            {
                answer.push_back(number2);
                break;
            }
            number = number2;
            number2 = temp;
        }
    }
    else if (n < m)
    {
        number2 = n;
        number = m;
        while (true)
        {
            rest = number2 / number;
            temp = number2 % number;
            if (temp == 0)
            {
                answer.push_back(number);
                break;
            }
            number2 = number;
            number = temp;
        }
    }

    //최소공배수 구하기
    int a = 0;
    a = (n * m) / number;
    answer.push_back(a);

    for (int i = 0; i < 2; i++)
    {
        std::cout << answer[i] << std::endl;
    }
    
    return answer;
}

int main()
{
    solution(3, 12);
    solution(2, 5);
    solution(5, 27);
}
