#include <string.h>

void showIt(void);

struct Album
{
  char title[35];
  char artist[35];
  char no_of_tracks[5];
  char year[5];
}album;

void DisplayAlbum(struct Album alb);

void showIt(void){
  strcpy(album.title, "Wish You Were Here");
  strcpy(album.artist, "Pink Floyd");
  strcpy(album.no_of_tracks, "5");
  strcpy(album.year, "1973");
  DisplayAlbum(album);
}

void DisplayAlbum(struct Album alb)
{
  printf("Title: ");
  puts(alb.title);
  printf("Artist: ");
  puts(alb.artist);
  printf("Number of Tracks: ");
  puts(alb.no_of_tracks);
  printf("Year Made: ");
  puts(alb.year);
}
