package ca.retrylife.xyla.desktop;

import com.badlogic.gdx.backends.lwjgl.LwjglApplication;
import com.badlogic.gdx.backends.lwjgl.LwjglApplicationConfiguration;
import ca.retrylife.xyla.Xyla;

public class DesktopLauncher {
	public static void main(String[] arg) {
		LwjglApplicationConfiguration config = new LwjglApplicationConfiguration();

		// Set application config
		config.title = "Xyla";
		config.width = 1480;
		config.height = 800;

		// Start application
		new LwjglApplication(new Xyla(), config);
	}
}
