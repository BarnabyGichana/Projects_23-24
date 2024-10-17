// Barnaby Gichana
// Date. 02/16/2024
/* Desc.
    This program demonstrates the capacity(), enqueue(), dequeue(), peek(), empty(), and printNames()
    methods of the ArrayQueue class.
*/

public class ArrayQueueDemo {
    public static void main(String[] args) {
        // Create queue with capacity 5
        ArrayQueue queue = new ArrayQueue(5);

        // Display the capacity of the queue
        System.out.println("Queue Capacity: " + queue.capacity());

        // Add elements to the queue
        queue.enqueue("Matthew");
        queue.enqueue("Mark");
        queue.enqueue("Luke");
        queue.enqueue("James");
        queue.enqueue("John");

        // Try adding an element when the queue is full
        queue.enqueue("Peter");

        // Peek at the top element
        System.out.println("\nTop element: " + queue.peek());

        // Display names in the queue with along with their index number
        queue.printNames();

        // Remove the top two elements from the queue
        for(int i=0; i<2; i++) {
            System.out.println("Removed: " + queue.dequeue());
        }

        // Peek at the top element
        System.out.println("\nTop element: " + queue.peek());

        // Display names and indexes again
        queue.printNames();

        // Remove the remaining elements from the queue
        while(!queue.empty()) {
            System.out.println("Removed: " + queue.dequeue());
        }

        // Check if the queue is empty
        if(queue.empty()) {
            System.out.print("\nThe queue is empty.");
        } else {
            System.out.print("\nThe queue is not empty.");
        }
    }
}