/*
 * This work is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
 *  Author: Giovanni De Toni (giovanni at detoni dot me)
 *  Date: 25/05/2015
 *  WebSite: www.detoni.me
 */
package temporal.shenanigans.layout;

import javafx.scene.control.ProgressBar;

/**
 * Class that generate the life bar
 * @author Giovanni De Toni
 */
public class LifeBar extends ProgressBar {

    final static private int MAX_LIFE = 100;
    
    public LifeBar() {
        super(MAX_LIFE);
        this.setStyle("-fx-accent: red;");
    }
    
}
