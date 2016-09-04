package threadRunnable;

public class RunnableDemo extends java.applet.Applet implements Runnable {

	private Thread T;

	public void run() {

		while (T == Thread.currentThread()) {

			int width = rnd(30);

			if (width < 2)
				width += 2;

			int height = rnd(10);

			if (height < 2)
				height += 2;

			draw(width, height);
		}

	}

	public void start() {

		if (T == null) {
			T = new Thread(this);
			T.start();
		}
	}

	public void stop() {
		if (T != null) {
			T = null;
		}
	}
	
	public void draw(int width,int heght){
		
		for(int c = 0; c<width; c++){
			System.out.print("*");
		}
		System.out.println();
		
		for(int r = 0; r<heght - 2; r++){
			
			System.out.print("*");
			
			for(int c = 0; c<width - 2; c++)
				System.out.print(" ");
			
			System.out.print("*");
			
			System.out.println();
		}
		
		for(int c = 0; c < width; c++)
			System.out.print("*");
		
		System.out.println();
		
	}
	
	private int rnd(int limit){
		
		return (int) (Math.random() * limit);
		
	}

}
