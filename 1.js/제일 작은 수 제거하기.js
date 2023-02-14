/*
정수를 저장한 배열, arr 에서 가장 작은 수를 제거한 배열을 리턴하는 함수, solution을 완성해주세요. 단, 리턴하려는 배열이 빈 배열인 경우엔 배열에 -1을 채워 리턴하세요. 예를들어 arr이 [4,3,2,1]인 경우는 [4,3,2]를 리턴 하고, [10]면 [-1]을 리턴 합니다.

제한 조건
arr은 길이 1 이상인 배열입니다.
인덱스 i, j에 대해 i ≠ j이면 arr[i] ≠ arr[j] 입니다.
입출력 예
arr	        return
[4,3,2,1]	[4,3,2]
[10]	    [-1]
*/


let arr = [4,3,2,1];
Math.min(...arr) // 배열을 구조분해할당 해서 쪼갠 후 가장 작은 값 찾음

// splice 함수를 써서 값을 제거할건데(제거할땐 1) 가장작은 값의 인덱스가 필요함 따라서 arr.indexOf(Math.min(...arr))을 작성 => 배열 구조분해 할당 후 그 수 중에서 가장 작은 값의 인덱스는 ? 라는 뜻 
const index = arr.indexOf(Math.min(...arr))
arr.splice(index,1); // splice는 기존 배열을 바꿔준다.
return  arr.length   === 0 ? [-1] : arr;