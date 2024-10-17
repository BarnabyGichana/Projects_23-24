// Barnaby Gichana
// Date. 04/19/2024
/* Desc.
    This is a java class which plays CDs in the order placed on the stack.
    The playlist is played in the order Last-In-First-Out (LIFO).
*/

public class CDPlayList2 {
    private class Node {
        String value;
        Node next;

        Node(String val, Node n) {
            value = val;
            next = n;
        }
    }

    private Node top = null;

    public boolean empty() {
        return top == null;
    }

    public void pushCD(String s) {
        top = new Node(s, top);
    }

    public String playCDPlaylist() {
        if(empty()) {
            System.out.print("empty");
            return "";
        }
        else {
            String currentSong = top.value;
            top = top.next;
            return currentSong;
        }
    }

    public void showCDPlaylist() {
        Node p = top;

        System.out.print("-------------------------------------------------------\n");
        System.out.print("In Queue:");
        while(p != null) {
            System.out.print(p.value);
            p = p.next;
        }
        System.out.print("\n-------------------------------------------------------\n");
    }
}