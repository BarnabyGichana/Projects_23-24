// Barnaby Gichana
// Date. 02/16/2024
/* Desc.
    This program creates an array stack of 'n' elements and uses methods to carry out various operations.
    The operations that feature in this program include:
     * push()
     * pop()
     * peek()
*/

public class ArrayStack {
    private int [] s; // Holds stack elements
    private int top;  // Stack pointer

    // Constructor
    public ArrayStack(int capacity) {
        s = new int[capacity];
        top = 0;
    }

    public boolean empty() {
        return top == 0;
    }

    public void push(int x) {
        if (top == s.length) {
            System.out.print("Stack Full\n");
        }
        else {
            s[top] = x;
            top++;
        }
    }

    public int pop() {
        if(empty()) {
            System.out.print("Stack Empty\n");
            return 0;
        }
        else {
            top--;
            return s[top];
        }
    }

    public int peek() {
        if(empty()) {
            System.out.print("Stack Empty\n");
            return 0;
        }
        else {
            return s[top-1];
        }
    }
}