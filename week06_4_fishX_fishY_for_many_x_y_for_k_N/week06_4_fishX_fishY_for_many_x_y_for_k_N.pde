//week06_4_fishX_fishY_for_many_x_y_for_k_N
//程式類似week04_5 &week03_4
void setup(){
  size(600,400);
}
float fishX=300,fishY=200;
float []x=new float[100];
float []y=new float[100];
int N=0;
void draw(){
  background(#c0ffee);
  for(int i=0;i<N;i++){
    y[i]++;
    ellipse(x[i],y[i],8,8);
    if(y[i]>400){
      for(int k=i;k<N-1;k++){
        x[k]=x[k+1];
        y[k]=y[k+1];
  }
  N--; 
}
}
  ellipse(fishX,fishY,30,10);
}
void mousePressed(){
  x[N]=mouseX;
  y[N]=mouseY;
  N++;
}
