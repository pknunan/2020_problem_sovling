# 함수

## 구조

```c
#include <stdio.h>

// 함수 선언
int power(int a, int b);

int main() 
{
    int base = 10, expo = 5;
    
    // 함수 호출
    int result = power(base, expo);
    
    return 0;
}

// 함수 정의
int power(int a, int b)
{
    int result = 1;
    for	(int i = 0; i < b; i++)
    {
        result *= a;
	}
    
    return result;
}
```

## 함수 정의

- **SRP(Single Responsibility Principle)**
  - 단일 책임 원칙. 함수는 한가지 목적만 수행하도록 구현하는것이 좋다. 함수가 여러 목적으로 호출된다면 함수의 역할을 알기 힘들고 함수를 수정해야하는 이유가 늘어난다.
- **사이즈 줄이기**
  - 함수의 사이즈(세로 길이)는 되도록 줄여서 함수의 역할을 한 눈에 알아볼 수 있도록 구현하는것이 좋다. 함수가 길어진다면 각각의 역할을 다른 함수로 나눠 길어도 30줄 이내로 작성하는것이 권장된다.
- **네이밍**
  - 함수의 이름이 길어지더라도 함수가 하는 일을 명확하게 표현하는 이름으로 작성하는것이 좋다.
- **매개변수**
  - 꼭 필요하거나 재귀함수처럼 특별한 경우가 아니라면 함수의 매개변수는 3개 이내로 작성하는것이 좋다.
- **들여쓰기**
  - 하나의 함수 내에서 여러번의 들여쓰기(if else, for, while)이 중첩되는것은 코드의 가독성을 낮춘다. 들여쓰기 수준은 2단계 이내로 작성하는것이 좋다.
- **내림차순 작성**
  - 함수 내에서 또다른 함수를 호출할 때 호출되는 함수는 호출하는 함수보다 아래에 정의하는것이 좋다. 함수의 호출 순서가 난잡하다면 프로그램의 흐름을 파악하기 힘들고 디버깅을 따라가기 복잡해진다.



## pa8-1

**입력: ** 배열의 사이즈

**Test Case = 10000**

**출력:** 성공 횟수 / Test Case



**pseudo code**

```c
int main() {    
    while(TestCase-- > 0) 
    {
        // 변수 선언, 배열 초기화, 초기값 입력
	    initialize
            
        // 시뮬레이션 시작
        if puppy can escape cage
            count++;
    }
    
    print count / 10000;
    
	return 0;
}

int isEscapable
{
    while(1) 
    {
        if current location is edge of cage
            return 1;
        if puppy can not move to anywhere
        	return 0;
        move puppy to random way
    }
}
```



## pa8-2

**입력:** n, k

**출력:** n와 k에 대한 이항계수 nCk



**pseudo code**

```c
int main() 
{    
    input n, k;
    
    print binomial coefficient for n, k
}

int binomialCoefficientOf(int n, int k)
{
    loop i for n by n array
        loop j for n by n array
            calcResult(i, j);
                
    return arr[i][j];            
}
```



## pa8-3

**입력:** 배열의 사이즈와 데이터

**출력**: 배열, 각 행과 열의 평균과 표준편차



**pseudo code**

```c
int main() 
{
    initArray();
    loop i for n
        loop j for n
            print array[i][j];
    	print average of row i
        print standard deviation of row i
    
    loop i for n
        print average of colum i
    loop i for n
        print standard deviation of colum i    
}
```



## pa8-4

**입력**: 배열의 사이즈와 데이터

**출력**: 배열 내부 사각형 중 최대 부분 합



**pseudo code**

```c
int main()
{
    initArray;
    
    about array, define two distinct spot;
        calc partial sum of each spot;
    
    print largest partial sum
}
```



## pa8-5

**입력**: 배열의 사이즈와 값

**출력**: 배열의 시계방향 출력



**pseudo code**

```c
int main()
{
	initArray;
	
	separate frame of rectangle
		print every frame clockwise
}
```

