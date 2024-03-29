/*
1부터 입력받은 숫자 n 사이에 있는 소수의 개수를 반환하는 함수, solution을 만들어 보세요.

소수는 1과 자기 자신으로만 나누어지는 수를 의미합니다.
(1은 소수가 아닙니다.)

제한 조건
n은 2이상 1000000이하의 자연수입니다.
입출력 예
n	result
10	4
5	3
입출력 예 설명
입출력 예 #1
1부터 10 사이의 소수는 [2,3,5,7] 4개가 존재하므로 4를 반환

입출력 예 #2
1부터 5 사이의 소수는 [2,3,5] 3개가 존재하므로 3를 반환
*/

// 제한 시간 안에 풀지 못해서 다른사람 풀이 참고


let result = 0; // 결과값
let n = 10; // 테스트 값

for(let i = 2; i <=n; i ++){
    let cnt = 0;
    for(let j = 2; j <= i; j ++){
        if(i%j ==0){
            cnt ++;
        }
    }
    if (cnt < 2){ // 2보다 작다는 것은 나누어 떨어지는것이 본인밖에 없다. 즉 소수이다 (2부터 시작하기 때문에 1은 제외)
        result ++; 
    }
}

return result;
