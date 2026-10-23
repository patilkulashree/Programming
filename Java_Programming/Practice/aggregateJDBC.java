import java.sql.*;

  public class aggregateJDBC
     {
       public static void main(String args[])
        {
           try
            {
               Class.forName("com.mysql.cj.jdbc.Driver");
               Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/jdbc_practice","root"," ");
               Statement stmt = con.createStatement();
               String query = "SELECT COUNT (*) AS total ," + "SUM(marks) AS total_marks," + "AVG(marks) AS average_marks," + "MAX(marks) AS highest_marks," + " MIN(marks) AS lowest_marks"+
                               " FROM student";
               ResultSet rs = stmt.executeQuery(query);
               if(rs.next())
               {
                 System.out.println("Total Students:" + rs.getInt("total"));
                 System.out.println("Total Marks : " + rs.getInt("total_marks"));
                 System.out.println("Average Marks:" + rs.getDouble("average_marks"));
                 System.out.println("Highest marks of Students:" + rs.getInt("highest_marks"));
                 System.out.println("Lowest Marks :" + rs.getInt("lowest_marks"));
                }
                 rs.close();
                 stmt.close();
                 con.close();
             }
              catch(Exception e)
              {
                 System.out.println("Exception occured : " + e);
               }
           }
      }


              
                 
               