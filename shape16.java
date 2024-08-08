import java.awt.*;
class Shapes extends Canvas
{
public void paint(Graphics g)
{
//g.drawRect(50,75,100,50);
g.fillRect(250,175,100,100);
}
}
class Program16
{
public static void main(String args[])
{
Shapes s=new Shapes();
Frame f=new Frame("Drawings");
f.add(s);
f.setSize(300,450);
f.setVisible(true);
}
}
