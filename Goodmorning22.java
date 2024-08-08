import java.awt.*;
import java.awt.event.*;
public class Program22 extends Frame implements KeyListener
{
Label l;
Program22()
{
addKeyListener(this);
//requestFocus();
l=new Label();
l.setBounds(100,100,200,40);
l.setFont(new Font("calibri", Font.BOLD, 16));
add(l);
setSize(400,400);
setLayout(null);
setVisible(true);
}
public void keyPressed(KeyEvent k)
{
if(k.getKeyChar()== 'M' || k.getKeyChar()== 'm')
l.setText("Good Morning");
else
if(k.getKeyChar()== 'A' || k.getKeyChar()== 'a')
l.setText("Good After Noon");
else
if(k.getKeyChar()== 'E' || k.getKeyChar()== 'e')
l.setText("Good Evening");
else
if(k.getKeyChar()== 'N' ||k.getKeyChar()== 'n')
l.setText("Good Night");
}
public void keyReleased(KeyEvent k)
{
}
public void keyTyped(KeyEvent k)
{
}
public static void main(String args[])
{
new Program22();
}
}
