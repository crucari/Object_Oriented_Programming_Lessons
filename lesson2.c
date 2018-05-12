using systems;

namespace Bulldozer
{
    class MainClass
    {
        public static void Main (string[] args)  //for the class
        {
              var man = new Man ();
              var Kart = new Kart ();
              var alien = new Alien ();
        }

        public class GeneralObject
        {
            public GeneralObject () {
           }
            public bool moves { get; set; }
            public string color { get; set; }

        }

        public class Man : General Object //start of buleprint
        {

            public Man () {
            }
            // public bool moves { get; set; } //defines if a man can moves
            public string name { get; set; }
            // public string color { get; set; }

            //place a constructor at the top of the class. It is a method that takes a bunch of information that you want to put in the object you want to build.
        }

        public class Kart
        {
            public Kart () {
            }

    //  public bool moves { get; set; } //defines if a man can moves
     public string manufacturer { get; set; }
    //  public string color { get; set; }
    }

   public class Alien
    {
        public Alien () {
        }

    //  public bool moves { get; set; } //defines if a man can moves
     public string planet { get; set; }
    //  public string color { get; set; }
    }
}