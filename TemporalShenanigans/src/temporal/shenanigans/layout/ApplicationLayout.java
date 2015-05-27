/*
 * This work is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
 *  Author: Giovanni De Toni (giovanni at detoni dot me)
 *  Date: 25/05/2015
 *  WebSite: www.detoni.me
 */
package temporal.shenanigans.layout;

import javafx.scene.layout.BorderPane;

/**
 *
 * @author uriel
 */
public class ApplicationLayout extends BorderPane {

    private HUD hud;
    
    public ApplicationLayout() {
        hud = new HUD();
        this.setBottom(hud);
    }
    
}
