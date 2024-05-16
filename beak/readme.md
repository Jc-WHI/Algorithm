#문제 해설


-10828
: 스텍의 구현 및 이를 이용한 입출력

c++ 연습을 위해 작성, copilot 이용함

c++의 클래스 작성 및 클래스 매서드 부분에서 미진한 부분을 보충

1.private, public 
private으로 std::vector<int> data 변수 선언을 함

-private 사용한 이유는 1) 어쨌든 하나의 vector는 필요하였고, 선언을 해야 했었음
따라서 클래스 선언시에 vector를 생성, class의 매서드에서 private에 접근을 하나 클래스 선언 및 생성 이후 vector에 직접 접근할 일은 없고 매서드를 통한 연산만 할 것이니 이는 타당하다고 생각이 됨.

-public : 매서드를 통한 연산을 수행할 것이었으므로 public은 당연하였음

벡터 기본연산 : push_back, pop_back , empty, size

