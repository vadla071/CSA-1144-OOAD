
#ifndef ADMIN_H
#define ADMIN_H

#include <string>

/**
  * class admin
  * 
  */

class admin
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  admin ();

  /**
   * Empty Destructor
   */
  virtual ~admin ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void verify_student_id ()
  {
  }


  /**
   */
  void check_for_book_availability ()
  {
  }


  /**
   */
  void issue_books ()
  {
  }


  /**
   */
  void new_operation ()
  {
  }


  /**
   */
  void maintain_student_details ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void student_details;
  void booklist;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of student_details
   * @param new_var the new value of student_details
   */
  void setStudent_details (void new_var)   {
      student_details = new_var;
  }

  /**
   * Get the value of student_details
   * @return the value of student_details
   */
  void getStudent_details ()   {
    return student_details;
  }

  /**
   * Set the value of booklist
   * @param new_var the new value of booklist
   */
  void setBooklist (void new_var)   {
      booklist = new_var;
  }

  /**
   * Get the value of booklist
   * @return the value of booklist
   */
  void getBooklist ()   {
    return booklist;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H


#ifndef BOOK_H
#define BOOK_H

#include <string>

/**
  * class book
  * 
  */

class book
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  book ();

  /**
   * Empty Destructor
   */
  virtual ~book ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void book_type ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  new_class book_name;
  void book_id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of book_name
   * @param new_var the new value of book_name
   */
  void setBook_name (new_class new_var)   {
      book_name = new_var;
  }

  /**
   * Get the value of book_name
   * @return the value of book_name
   */
  new_class getBook_name ()   {
    return book_name;
  }

  /**
   * Set the value of book_id
   * @param new_var the new value of book_id
   */
  void setBook_id (void new_var)   {
      book_id = new_var;
  }

  /**
   * Get the value of book_id
   * @return the value of book_id
   */
  void getBook_id ()   {
    return book_id;
  }
private:


  void initAttributes () ;

};

#endif // BOOK_H
