// Barnaby Gichana
// Date. 03/05/2024
/* Desc.
    The LinkedList1 class implements a linked list.
*/
/* Note.
    The following line of code was included in the lecturer's version of the LinkedList1 class
    but it is not needed for the functionality of the rest of this implementation.

    import java.util.LinkedList;
*/

class LinkedList1 {
    private class Node {
        String value; 
        Node next;

        // Constructor
        Node (String val, Node n) {
            value = val;
            next = n;
        }

        // Constructor
        Node (String val) {
            // Call the other sister constructor
            this(val, null);
        }
    }

    private Node first; // head element in list
    private Node last;  // last element in list

    // Constructor
    public LinkedList1() {
        first = null;
        last = null;
    }

    // Empty constructor
    public boolean isEmpty() {
        return first == null;
    }

    /*****************************************************************
      The size method returns the length of the list.
      @return The number of elements in the list.
    ******************************************************************/
    public int size() {
        int count = 0;
        Node p = first;
        while (p != null) {
            // There is an element at p
            count++;
            p = p.next;
        }
        return count;
    }

    /*****************************************************************
      The add method adds an element to the end of the list.
      @param e The value to add to the end of the list.
    ******************************************************************/
    public void add(String e) {
        if (isEmpty()) {
            first = new Node(e);
            last = first;
        } else {
            // Add to end of existing list
            last.next = new Node(e);
            last = last.next;
        }
    }

    /*****************************************************************
      The add method adds an element at a position.
      @param e The element to add to the list.
      @param index The position at which to add the element.
      @exception IndexOutOfBoundsException When index is out
      of bounds.
    ******************************************************************/
    public void add(int index, String e) {
        if (index < 0 || index > size()) {
            System.out.print("Out of Bounds ");
            System.exit(0);
        }

        // Index is at least 0
        if (index == 0) {
            first = new Node(e, first);     // New element goes at beginning
            if (last == null)
                last = first;
            return;
        }

        // Set a reference pred to point to the node that will be the predecessor of the new node
        Node pred = first;
        for (int k = 1; k <= index - 1; k++) {
            System.out.println("\n" + pred + ": " + pred.next + "k - " + k);
            pred = pred.next;
        }

        // Splice in a node containing the new element
        pred.next = new Node(e, pred.next);

        // Is there a new last element?
        if (pred.next.next == null)
            last = pred.next;
    }

    /*****************************************************************
      The print method traverses the list
      and prints all of its elements.
    ******************************************************************/
    public void print() {
        Node ref = first;
        while (ref != null) {
            System.out.println(ref.value);
            ref = ref.next;
        }
        System.out.print("\n");
    }

    /*****************************************************************
      The toString method computes the string representation
      of the list.
      @return the string form of the list.
    ******************************************************************/
    public String toString() {
        StringBuilder strBuilder = new StringBuilder();

        // Use p to walk down the linked list
        Node p = first;
        while (p != null) {
            strBuilder.append(p.value + "\n");
            p = p.next;
        }
        return strBuilder.toString();
    }

    /*****************************************************************
      The remove method removes the element at an index.
      @param index The index of the element to remove.
      @exception IndexOutOfBoundsException When index is out
      of bounds.
    ******************************************************************/
    public String remove(int index) {
        if (index < 0 || index >= size()) {
            System.out.print("Out of bounds - Segmentation fault - Check your indexing");
        }

        String element; // The element to return
        if (index == 0) {
            // Removal of first item in the list
            element = first.value;
            first = first.next;
            if (first == null)
                last = null;
        } else {
            // To remove an element other than the first,
            // find the predecessor of the element to be removed.
            Node pred = first;

            // Move pred forward index - 1 times
            for (int k = 1; k <= index - 1; k++)
                pred = pred.next;
            
            // Store the value to return
            element = pred.next.value;

            // Route link around the node to be removed
            pred.next = pred.next.next;

            // Check if pred is now last
            if (pred.next == null)
                last = pred;
        }
        return element;
    }

    /*****************************************************************
      The remove method removes an element.
      @param element The element to remove.
      @return true if the remove succeeded, false otherwise.
    ******************************************************************/
    public boolean remove(String element) {
        if (isEmpty())
            return false;
        
        if (element.equals(first.value)) {
            // Removal of first item in the list
            first = first.next;
            if (first == null)
                last = null;
            return true;
        }

        // Find the predecessor of the element to remove
        Node pred = first;
        while (pred.next != null && !pred.next.value.equals(element)) {
            pred = pred.next;
        }

        // pred.next == null OR pred.next.value is element
        if (pred.next == null)
            return false;
        
        // pred.next.value is element
        pred.next = pred.next.next;

        // Check if pred is now last
        if (pred.next == null)
            last = pred;
        
        return true;
    }
}