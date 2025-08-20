/* 
Queue 구현 (push + shift 사용 금지) 

Array 를 사용하되, shift() 금지 조건으로 Queue 구현
내부 인덱스를 이용해 구현하라.
*/

class Queue {
    constructor() {
        this.items = [];
        this.head = 0;
        this.tail = 0;
    }

    // shift
    enqueue(value) {
        this.items[this.tail++] = value;
    }

    // pop
    dequeue() {
        if (this.head === this.tail) return undefined;
        return this.items[this.head++];
    }

    isEmpty() {
        return this.head === this.tail;
    }
}