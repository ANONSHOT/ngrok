import java.awt.*;
import java.applet.*;
public class Program17 extends Applet
{
public void paint(Graphics g)
{
int r,c,x,y=50;
for(r=1;r<5;r++)
{
x=20;
for(c=1;c<5;c++)
{
g.drawRect(x,y,40,40);
x=x+20;
}
y=y+20;
}
}
}
