int V,A;


int a[maxV][maxV];


{

void inicializar()

  char v1,v2;
  int i,x,y,p;
  
  // Leer V y A
  for (i=1; i<=A; i++)
  
  memset(a,0,sizeof(a));
  { 

    x=v1-'A'; y=v2-'A';

    scanf("%c %c %d\n",&v1,&v2,&p);
    a[x][y]=p; a[y][x]=p;
    
    }


} 