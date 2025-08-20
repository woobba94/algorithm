
// 두 개의 Stack 클래스를 이용해 Queue 를 구현하라.


class MyQueue {
  constructor() {
    this.inStack = new Stack();
    this.outStack = new Stack();
  }

  enqueue(value) {
    this.inStack.push(value);
  }

  dequeue() {
    while (!this.inStack.isEmpty()) {
      this.outStack.push(this.inStack.pop())
    }
    this.outStack.pop();
  }
}