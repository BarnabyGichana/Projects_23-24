// Barnaby Gichana
// Date. 02/16/2024
/* Desc.
    This program creates an array queue of 'n' elements and uses methods to carry out various operations.
    The operations that are featured in this program include capacity retrieval, enqueue, dequeue, peek,
    check emptiness, and print names.
*/

public class ArrayQueue {
    private String[] q; // Holds queue elements
    private int front;  // Next item to be removed
    private int rear;   // Next slot to fill
    private int size;   // Number of items in queue

    // Constructor
    public ArrayQueue(int capacity) {
        q = new String[capacity];
        front = 0;
        rear = 0;
        size = 0;
    }

    public int capacity() {
        return q.length;
    }

    public void enqueue(String s) {
        if(size == q.length) {
            System.out.print("Queue Full\n");
        }
        else {
            size ++;
            q[rear] = s;
            rear ++;
            if(rear == q.length)
                rear = 0;
        }
    }

    public String peek() {
        if(empty()) {
            System.out.print("Queue Empty\n");
            return " ";
        }
        else
            return q[front];
    }

    public String dequeue() {
        if(empty()) {
            System.out.print("Queue Empty\n");
            return "";
        }
        else {
            size--;
            String value = q[front];    // Remove from front
            q[front] = null;
            front++;   // Update front
            if(front == q.length) front = 0;
            return value;
        }
    }

    public boolean empty() {
        return size == 0;   // 1 or 0
    }

    public void printNames() {
        System.out.println("\nfront = " + front + "; ");
        System.out.println("rear = " + rear);
        for(int k=0; k<q.length; k++) {
            if(q[k] != null) {
                System.out.println(k + " " + q[k]);
            }
            else {
                System.out.println(k + " ?");
            }
            
            if(k != q.length -1)
                System.out.print("");
        }
    }


    // The following method is not needed for this assignment but is included as a comment for future reference

    /*
    public String toString() {
        StringBuilder sBuilder = new StringBuilder();
        sBuilder.append("front = " + front + "; ");
        sBuilder.append("rear = " + rear + "\n");

        for(int k=0; k<q.length; k++) {
            if(q[k] != null)
                sBuilder.append(k + " " + q[k]);
            else
                sBuilder.append(k + " ?");
            
            if(k != q.length -1)
                sBuilder.append("\n");
        }

        return sBuilder.toString();
    }
    */
}