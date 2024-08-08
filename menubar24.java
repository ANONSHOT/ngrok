import java.awt.*; 
class Program24 
{ 
Program24() 
{ 
Frame f= new Frame("Program24 Menu bar and Pull-down menus"); 
MenuBar m=new MenuBar();
 
Menu menu=new Menu("Colours"); 
Menu submenu=new Menu("BCA");
MenuItem i1=new MenuItem("Red"); 
MenuItem i2=new MenuItem("Green"); 
MenuItem i3=new MenuItem("Yellow"); 
MenuItem i4=new MenuItem("Blue"); 
MenuItem i5=new MenuItem("Pink"); 
menu.add(i1); 
menu.add(i2); 
menu.add(i3); 
menu.add(i4); 
menu.add(i5); 
 
MenuItem i7=new MenuItem("A Section"); 
MenuItem i8=new MenuItem("B Section"); 
MenuItem i9=new MenuItem("c Section"); 
submenu.add(i7); 
submenu.add(i8); 
submenu.add(i9); 
 
menu.add(submenu); 
m.add(menu); 
f.setMenuBar(m); 
f.setSize(400,400); 
f.setLayout(null); 
f.setVisible(true); 
} 
public static void main(String args[]) 
{ 
new Program24(); 
} 
}
