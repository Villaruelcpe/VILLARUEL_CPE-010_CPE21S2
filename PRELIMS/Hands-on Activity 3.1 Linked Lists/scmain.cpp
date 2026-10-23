#include <iostream>
#include <string>
#include "soundcloud_ll.h"

int main(){
    //create queue 
    CircularList<std::string>* queue = nullptr;
    addSong(std::string("ALL NIGHT LONG"), &queue);
    addSong(std::string("AYUSING ANG SIRA"), &queue);
    addSong(std::string("LIL SHAWTY"), &queue);
    addSong(std::string("FADED OFF"), &queue);

    std::cout << "Queue created. Playing all songs:\n";
    playAllSongs(queue);

    //add song
    std::cout << "\n Adding 'AWAY' to the queue:\n";
    addSong(std::string("AWAY"), &queue);
    playAllSongs(queue);

    //remove song
    std::cout << "\n Removing 'LIL SHAWTY':\n";
    removeSong(std::string("LIL SHAWTY"), &queue);
    playAllSongs(queue);

    //loop
    std::cout << "\n Playing all songs (loop):\n";
    playAllSongs(queue);

    //testing 
    CircularList<std::string>* nowPlaying = queue;
    std::cout << "\n Now playing: " << nowPlaying->data << std::endl;
    nextSong(&nowPlaying);
    std::cout << " next -> " << nowPlaying->data << std::endl;
    nextSong(&nowPlaying);
    std::cout << " next -> " << nowPlaying->data << std::endl;
    nextSong(&nowPlaying);
    std::cout << " previous -> " << nowPlaying->data << std::endl;

    //track that does not exist
    std::cout << "\n Removing a track that does not exist ('Paano ka ba?'):\n";
    removeSong(std::string("Paano ka ba?"), &queue);

    //wraparound 
    std::cout << "\n Wraparound:\n";
    CircularList<std::string>* walker = queue;
    for(int i = 0; i < 6; i++){
        std::cout << " " << walker->data << std::endl;
        nextSong(&walker);
    }


    return 0;
}