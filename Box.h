class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // prototypes of setters for length, width and height
			 void setLength(int l);
			 void setWidth(int w);
			 void setHeight(int h);
       // prototypes of getters for length, width and height
			 int getLength();
		 	 int getWidth();
			 int getHeight();
			 // prototype of the function to calculate volume
       int calcVolume();
};
