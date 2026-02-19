# [151. Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/description/)

각 단어 사이, 또는 문자열 앞뒤로 여러 개의 공백이 존재할 수 있는 문자열 하나가 주어질 때, 각 단어를 구분하는 하나의 공백만 존재하도록 단어들의 순서만 뒤집은 문자열을 반환하는 함수를 구현한다.\
<br>
입력 문자열의 최대 길이는 10^4이며, 영문자와 숫자 그리고 공백문자 `' '`가 포함되며, 최소 하나의 단어는 포함되어 있다.\
<br>
추가로, 사용하는 언어의 문자열 자료형이 mutable하다면, O(1)의 추가 공간을 사용하여 in-place하게 풀 수 있는가?
<br><br>

Example 1:\
Input: `s = "  a good   example`\
Output: `"example good a"`
<br><br>

<details>
  <summary>260214 (solve)</summary>
  C++로는 문자열 양 끝의 공백을 지우는 방법이 바로 떠오르지 않아서, 정확한 사용법은 모르지만 Python의 rstrip()을 사용하기 위해서 Python으로 풀이를 시작함. 단순 문자열에 적용한 적이 있는 것 같은데, 문자열 리스트에도 [::-1]를 사용하여 반대로 순회할 수 있음을 확인함. List comprehension의 결과를 즉시 반환하거나 출력 문자열에 할당하려고 했으나 문법 오류를 확인하고, 마지막 단어의 조건을 enumerate가 알려주는 인덱스 값으로 판단하여 출력 문자열에 할당하고 반환하여 해결함. 문자열 내장함수 rstrip(), list slicing, 그리고 해당 문제를 list comprehension으로 해결할 수는 없는지와 print의 sep 구문처럼 조건문이나 루프없이 해결할 수 있는 방법을 찾아볼 예정.
</details>

<details>
  <summary>분류</summary>
  #String #mutable #Two Pointers
</details>
