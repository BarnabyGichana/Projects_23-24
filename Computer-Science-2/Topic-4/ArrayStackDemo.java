// Barnaby Gichana
// Date. 02/16/2024
/* Desc.
    This program demonstrates the various methods that are used in the ArrayStack class.
    The aforementioned methods that are demonstrated in this program include:
     * push()
     * pop()
     * peek()
*/

public class ArrayStackDemo {
    public static void main(String[] args) {
        // Create a stack with capacity 5
        ArrayStack stack = new ArrayStack(5);

        // Push elements onto the stack
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
        stack.push(50);

        // Pushing one more element (stack overflow)
        stack.push(60);

        // Peek at the top element
        System.out.println("Top element: " + stack.peek());

        // Pop elements from the stack
        while (!stack.empty()) {
            System.out.println("Popped: " + stack.pop());
        }

        // Popping from an empty stack (stack underflow)
        stack.pop();
    }
}
