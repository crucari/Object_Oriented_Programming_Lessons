using systems;

namespace Bulldozer
{
    class MainClass
    {
        public static void Main (string[] args)  //for the class
        {
            var dozer = new bullDozer ("Yellow", "Mini");
            // dozer.color = "Yellow";
            // dozer.size = "Mini";

            var dozer2 = new BullDozer ("Red", "Large");
            // dozer.color = "Red";
            // dozer.size = "Large";

            Console.WriteLine ("Bulldozer 1 is: " + dozer.color);
            Console.WriteLine ("Bulldozer 2 is: " + dozer2.color);

        }

        public class BullDozer  //start of buleprint
        {

            public BullDozer (string _color, string _size){
                this.color = _color;
                this.size = _size;

            }
            public string color { get; set; }
            public string size { get; set; }


            //place a constructor at the top of the class. It is a method that takes a bunch of information that you want to put in the object you want to build.
        }
    }
}