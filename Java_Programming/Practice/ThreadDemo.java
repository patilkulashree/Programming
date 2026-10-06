class ThreadDemo1
{
  public static void main(String[]a)
  {
    System.out.println("Inside main");
    Thread t=Thread.currentThread();
    System.out.println("Current thread name is:"+t.getName());
    System.out.println("Current thread pid id :"+t.getId());
    System.out.println("Thread is alive or not :"+t.isAlive());
    System.out.println("Thread Priority is :"+t.getPriority());
  }
}
