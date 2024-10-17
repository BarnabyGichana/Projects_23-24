// Barnaby Gichana
// Date. 03/05/2024
/* Desc.
    The LinkedListDemo class is a client program of the LinkedList1 class.
    This client program demonstrates the various methods that are included
    in the implementation of LinkedList1.
 */

 public class LinkedListDemo {
    public static void main(String[] args) {
        // Create a linked list object
        LinkedList1 link_list = new LinkedList1();

        // Check size of the linked list
        System.out.println("Linked list size: " + link_list.size() + "\n");

        // Add elements to the linked list
        System.out.print("Adding three elements.\n");
        link_list.add("Computer");
        link_list.add("Software");
        link_list.add("Design");

        link_list.print();
        System.out.println("Linked list size: " + link_list.size() + "\n");

        // Add new element to the index 1 position
        System.out.print("Adding an element to the index 1 position.\n");
        link_list.add(1, "and");

        link_list.print();
        System.out.println("Linked list size: " + link_list.size() + "\n");

        // Remove elements from the linked list
        System.out.print("Removing 'and' & 'Design' from the list.\n");
        link_list.remove(3);
        link_list.remove("and");

        link_list.print();
        System.out.println("Linked list size: " + link_list.size() + "\n");

        // Produce the string representation of the list
        System.out.println("String representation of the list:");
        System.out.println(link_list.toString());
    }
 }