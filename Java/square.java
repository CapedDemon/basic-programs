package AdvJava;

import java.awt.Button;
import java.awt.Frame;
import java.awt.Label;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class square implements ActionListener {

    Frame f = new Frame();
    Label l1 = new Label("Enter Number");
    Label l2 = new Label("Square");

    TextField t1 = new TextField();
    TextField t2 = new TextField();

    Button b1 = new Button("Result");
    Button b2 = new Button("EXIT");

    square() {

        l1.setBounds(50, 100, 100, 20);
        l2.setBounds(50, 140, 100, 20);

        t1.setBounds(200, 100, 100, 20);
        t2.setBounds(200, 140, 100, 20);

        b1.setBounds(50, 200, 50, 20);
        b2.setBounds(50, 250, 50, 20);

        f.add(l1);
        f.add(l2);

        f.add(t1);
        f.add(t2);

        f.add(b1);
        f.add(b2);

        b1.addActionListener(this);
        b2.addActionListener(this);
        t2.addActionListener(this);

        f.setLayout(null);
        f.setVisible(true);
        f.setSize(400, 350);
        f.setLocation(500, 200);
    }

    public void actionPerformed(ActionEvent e) {
        int n = Integer.parseInt(t1.getText());

        if (e.getSource() == b1) {
            t2.setText(String.valueOf(n * n));
        }
        if (e.getSource() == b2) {
            System.exit(0);
        }
    }

    public static void main(String[] args) {
        new square();

    }

}
