/*
 * This work is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
 *  Author: Giovanni De Toni (giovanni at detoni dot me)
 *  Date: 25/05/2015
 *  WebSite: www.detoni.me
 */
package temporal.shenanigans.layout;

import java.util.Calendar;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.control.ProgressBar;
import javafx.scene.control.TextField;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

/**
 * Class that manage HUD space
 * @author Giovanni De Toni
 */
public class HUD extends VBox {

    final static private int SPACING = 10;
    final static private Insets PADDING = new Insets(20);
    
    private Calendar date;
    
    private HBox lifeTime;
    private HBox inventory;
    
    private VBox lifeBox;
    private VBox timeBox;
    
    private LifeBar life;
    private TextField time;
    
    
    public HUD() {
        date = Calendar.getInstance();
        generateHUD();
        this.getChildren().addAll(lifeTime, inventory);
        this.setAlignment(Pos.CENTER);
        this.setSpacing(SPACING);
        this.setPadding(PADDING);
        this.setStyle("-fx-border-color: black"); 
    }
    
    private void generateHUD() {
        generateLife();
        generateTime();
        lifeTime = new HBox();
        inventory = new HBox();
        lifeTime.getChildren().addAll(lifeBox, timeBox);
        lifeTime.setAlignment(Pos.CENTER);
        lifeTime.setSpacing(SPACING);
    }
    
    private void generateLife() {
        lifeBox = new VBox();
        life = new LifeBar();
        lifeBox.getChildren().addAll(new Text("HP"), life);
        lifeBox.setAlignment(Pos.CENTER);
        lifeBox.setSpacing(SPACING);
    }
    
    private void generateTime() {
        timeBox = new VBox();
        time = new TextField();
        time.setText(String.valueOf(date.YEAR+ " "+date.MONTH+" "+date.DAY_OF_MONTH));
        time.setAlignment(Pos.CENTER);
        time.setEditable(false);
        timeBox.getChildren().addAll(new Text("Timer"), time);
        timeBox.setAlignment(Pos.CENTER);
        timeBox.setSpacing(SPACING);
    }
    
    
    
}