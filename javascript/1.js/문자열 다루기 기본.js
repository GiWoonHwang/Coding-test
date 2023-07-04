/*
 문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 예를 들어 s가 "a234"이면 False를 리턴하고 "1234"라면 True를 리턴하면 됩니다.

제한 사항
s는 길이 1 이상, 길이 8 이하인 문자열입니다.
s는 영문 알파벳 대소문자 또는 0부터 9까지 숫자로 이루어져 있습니다.
입출력 예
s	    return
"a234"	false
"1234"	true
문제가 잘 안풀린다면😢
힌트가 필요한가요? [코딩테스트 연습 힌트 모음집]으로 오세요! → 클릭

 */

let s = "a234";
console.log(parseInt(s)); // NaN이 나온다.`

function solution(s) {
    
    if(s.length == 4 || s.length == 6){
        if(parseInt(s) == NaN){ // 알파벳과 숫자가 섞인 문자열은 NaN으로 나오기 때문에 이런게 조건물 처릴 했다. 하지만  잘못된 유효성 검사 결과 반환, Number.isNaN도 안됨
        
            return false;
        }
        else{
            console.log(typeof(parseInt(s)))
            return true;
        }
    
    }
}

/*
구글을 찾아보니 이런글이 있었다/
자바스크립트에서, NaN은 참 NaN인지 알아내기 어려운 값이다. 
x == NaN 같은 비교 연산으로 알아낼 수 있나 싶겠지만, NaN == NaN은 false가 나오는 것을 확인할 수 있고, 일치 연산자 ===를 사용해도 NaN === NaN은 false가 나온다[.
전역 함수로 isNaN()이 있지만, 이 함수는 정확히 말하면 '어떤 값이 숫자로 변환될 수 있는지'를 알려주는 함수인 데에다, null을 false로 판단하는 등의 문제가 있었다.
(이 문제는 ES6에서 Number.isNan()함수가 나오며 해결되었다.)

--> NaN을 대입연산자에 사용하는건 좋지 못하다
*/

// 다른 풀이

function solution(s) {
    if(s.length != 4 && s.length != 6) return false;
    for(var i = 0; i < s.length; i++) { // 반복문을 통해 하나하나씩 체크
        if(isNaN(Number(s[i]))) return false;
    }
    return true;
}