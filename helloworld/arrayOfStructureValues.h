void makeIt(void);

struct Album
{
  char title[35];
  char artist[35];
  char no_of_tracks[5];
  char year[5];
};

void makeIt(void){
  struct Album album[2];
  for(int i = 0; i < 2; i++)
  {
    printf("Enter Title: ");
    gets(album[i].title);
    printf("Enter Artist: ");
    gets(album[i].artist);
    printf("Enter number of tracks: ");
    gets(album[i].no_of_tracks);
    printf("Enter Year: ");
    gets(album[i].year);
  }
  printf("\nDisplaying Information...\n");
  for(int j = 0; j < 2; j++)
  {
    printf("\nTitle: ");
    puts(album[j].title);
    printf("Artist: ");
    puts(album[j].artist);
    printf("Number of tracks: ");
    puts(album[j].no_of_tracks);
    printf("Year: ");
    puts(album[j].year);
  }
}
