package temporal.shenanigans;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.stage.Stage;
import temporal.shenanigans.layout.ApplicationLayout;

/**
 *
 * @author uriel
 */
public class MyApp extends Application {
    
    @Override
    public void start(Stage primaryStage) {
        
        ApplicationLayout root = new ApplicationLayout();
        Scene scene = new Scene(root);
        
        primaryStage.setTitle("Temporal Shenanigans");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        launch(args);
    }
    
}
