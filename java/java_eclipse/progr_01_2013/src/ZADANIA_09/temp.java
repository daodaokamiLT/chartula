package ZADANIA_09;

import java.awt.Graphics;
import java.awt.Image;
import java.awt.image.BufferStrategy;
import java.awt.image.BufferedImage;
import java.awt.image.DataBufferInt;
import javax.swing.*;
import java.awt.Color;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;


public class DrawCircleExample extends Canvas {
    private static final int WIDTH = 32;
    private static final int HEIGHT = 32;

    public static void main(String[] args) {
        JFrame f = new JFrame("Draw circle example");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.add(new DrawCircleExample());
        f.pack();
        f.setVisible(true);
    }

    private final BufferedImage img;

    public DrawCircleExample() {
        img = new BufferedImage(WIDTH, HEIGHT, BufferedImage.TYPE_INT_RGB);
        Graphics2D g = img.createGraphics();
        g.setColor(Color.WHITE);
        g.fillOval(8, 8, 14, 14);
    }

    @Override
    public void paint(Graphics g) {
        g.drawImage(img, 0, 0, null);
    }

    @Override
    public Dimension getPreferredSize() {
        return new Dimension(img.getWidth(),img.getHeight());
    }
}