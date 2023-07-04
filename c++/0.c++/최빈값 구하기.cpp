/*
최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다. 정수 배열 array가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요. 최빈값이 여러 개면 -1을 return 합니다.

제한사항
0 < array의 길이 < 100
0 ≤ array의 원소 < 1000
입출력 예
array	result
[1, 2, 3, 3, 3, 4]	3
[1, 1, 2, 2]	-1
[1]	1
입출력 예 설명
입출력 예 #1

[1, 2, 3, 3, 3, 4]에서 1은 1개 2는 1개 3은 3개 4는 1개로 최빈값은 3입니다.
입출력 예 #2

[1, 1, 2, 2]에서 1은 2개 2는 2개로 최빈값이 1, 2입니다. 최빈값이 여러 개이므로 -1을 return 합니다.
입출력 예 #3

[1]에는 1만 있으므로 최빈값은 1입니다.
*/

#include <string>
#include <vector>
#include <iostream>

// map은 자동으로 정렬되는 컨테이너입니다. 그래서 요서 삽입, 제거가 빈번할 경우에는 성능이 저하됩니다. 그래서 그부분을 해결하기 위해 나온 것이 unordered_map입니다.
#include <unordered_map> 

using namespace std;

int solution(vector<int> array){
    int answer = 0;
    int maxV = 0; // 최빈값이 여러개일때 처리하는 변수

    unordered_map<int, int> um;
    for(const auto v : array){
        // v값이 중복되면 해당하는 value를 1씩 키운다.
        /*
        	v 1
            um[v] 1
            v 2
            um[v] 1
            v 3
            um[v] 1
            v 3
            um[v] 2
            v 3
            um[v] 3
            v 4
            um[v] 1
        */
        cout << "v " <<  v << endl;
        um[v]++;
        cout << "um[v] " << um[v] << endl;
    }

    for(const auto& v : um){
        /*
        입력받은 배열의 원소를 키로한 value값을 출력한다
        ex) [1, 2, 3, 3, 3, 4]라면 v.second = 1 or 1 or 3 or 1 (무작위니까) 출력된다
        */	
        cout << "v.first " <<  v.first << endl;
        cout << "v.second " <<  v.second << endl; 
        if(v.second > maxV){ // value값이 1이사이상이면 == 배열에 존재하면
            maxV = v.second; // value값 저장
            answer = v.first; // key값 저장
        }
        else if(v.second == maxV){ // 값이 같아진다 == 최빈값이 한개 이상이다.
            answer = -1;
        }
    }

    return answer;
}