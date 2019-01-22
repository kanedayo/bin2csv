#include <stdio.h>
#include <string.h>

int main(int argc,char**argv)
{
  FILE *fi,*fo;
  char buf[256];
  int ch;

  if(argc==2) {

    fi=fopen(argv[1],"rb");
    strcpy(buf,argv[1]);
    strcpy(buf+strlen(buf)-4,".csv"); // ".xxx" -> ".csv"
    fo=fopen(buf,"wb");

    while((ch=fgetc(fi))!=EOF){
      fprintf(fo,"%d\n",ch);
    }

    fclose(fi);
    fclose(fo);
    return 0;

  } else {
    printf("USAGE: %s filename",argv[0]);
    return 0;
  }
}
