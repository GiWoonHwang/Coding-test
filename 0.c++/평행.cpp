/*
점 네 개의 좌표를 담은 이차원 배열  dots가 다음과 같이 매개변수로 주어집니다.

[[x1, y1], [x2, y2], [x3, y3], [x4, y4]]
주어진 네 개의 점을 두 개씩 이었을 때, 두 직선이 평행이 되는 경우가 있으면 1을 없으면 0을 return 하도록 solution 함수를 완성해보세요.

제한사항
dots의 길이 = 4
dots의 원소는 [x, y] 형태이며 x, y는 정수입니다.
0 ≤ x, y ≤ 100
서로 다른 두개 이상의 점이 겹치는 경우는 없습니다.
두 직선이 겹치는 경우(일치하는 경우)에도 1을 return 해주세요.
임의의 두 점을 이은 직선이 x축 또는 y축과 평행한 경우는 주어지지 않습니다.
입출력 예
dots	                            result
[[1, 4], [9, 2], [3, 8], [11, 6]]	1
[[3, 5], [4, 1], [2, 4], [5, 10]]	0
입출력 예 설명
입출력 예 #1

점 [1, 4], [3, 8]을 잇고 [9, 2], [11, 6]를 이으면 두 선분은 평행합니다.
입출력 예 #2

점을 어떻게 연결해도 평행하지 않습니다.
*/

// 두 직선의 차가 0일떄, 0이 아닐때로 구분해서 문제를 푼다. 차가 0이면 평행이기때문에 1을 리턴해주면 되고 0이아닐때는 x/y == x/y 라면 1을 리턴해 주면 된다.

#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<vector<int>> dots){
    if(
        double(double(dots[3][1]-dots[0][1])/double(dots[3][0]-dots[0][0])) == double(double(d[2][1]-d[1][1])/double(d[2][0]-d[1][0]))
        || double(double(d[2][1]-d[0][1])/double(d[2][0]-d[0][0]))          == double(double(d[3][1]-d[1][1])/double(d[3][0]-d[1][0]))
        || double(double(d[1][1]-d[0][1])/double(d[1][0]-d[0][0]))          == double(double(d[2][1]-d[3][1])/double(d[2][0]-d[3][0]))) return 1;
    
    return 0;


    
}