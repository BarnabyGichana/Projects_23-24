// Barnaby Gichana
// Date. 04/19/2024
/* Desc.
    This is a java class that demonstrates the CDPlayList2 class.
*/

public class CDPlayList2Demo {
    public static void main(String[] args) {
        CDPlayList2 playlist = new CDPlayList2();

        // Push three songs to the playlist
        playlist.pushCD("\nJACKIE BROWN - Brent Faiyaz");
        playlist.pushCD("\nInfrunami - Steve Lacy");
        playlist.pushCD("\nForeplay - Jalen Santoy");

        // Show all the songs on the playlist
        System.out.print("\n");
        playlist.showCDPlaylist();

        // Play two songs
        for (int i=0; i<2; i++) {
            System.out.print("\nCurrently playing: " + playlist.playCDPlaylist() + "\n");
        }

        // Show all the songs remaining on the playlist
        System.out.print("\n");
        playlist.showCDPlaylist();
    }
}