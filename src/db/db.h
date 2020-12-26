#include <mysql/mysql.h>
#include <stdio.h>

// MYSQL *conn;
// MYSQL_RES *res;
// MYSQL_ROW row;


int connect() {
    MYSQL *conn;
    //Here you need to provide your db cridentials
    // char server[10] = "localhost";
    // char user[10] = "sammy";
    // char password[10] = "password";
    // char database[10] = "user_db";
    if ((conn = mysql_init(NULL)) == NULL)                                                             
    {                                                                                                  
        // fprintf(stderr, "Could not init DB\n");                                                 
        // return EXIT_FAILURE;       
        fprintf(stderr, "%s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);                                                                     
    }   
    if (mysql_real_connect(conn, "localhost", "sammy", "password", "user_db", 0, NULL, 0) == NULL)             
    {                                                                                                  
        // fprintf(stderr, "DB Connection Error\n");                                                        
        // return EXIT_FAILURE;   
        fprintf(stderr, "%s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);                                                                           
    }
    // mysql_free_result(conn);
    mysql_close(conn);
    return EXIT_SUCCESS; 

}
void close_connection(MYSQL *conn) {
    mysql_close(conn);
}