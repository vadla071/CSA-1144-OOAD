
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


#ifndef MEMBER_H
#define MEMBER_H

#include <string>

/**
  * class member
  * 
  */

class member
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  member ();

  /**
   * Empty Destructor
   */
  virtual ~member ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void member_name_;
  void mem_address;
  void mem_id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of member_name_
   * @param new_var the new value of member_name_
   */
  void setMember_name_ (void new_var)   {
      member_name_ = new_var;
  }

  /**
   * Get the value of member_name_
   * @return the value of member_name_
   */
  void getMember_name_ ()   {
    return member_name_;
  }

  /**
   * Set the value of mem_address
   * @param new_var the new value of mem_address
   */
  void setMem_address (void new_var)   {
      mem_address = new_var;
  }

  /**
   * Get the value of mem_address
   * @return the value of mem_address
   */
  void getMem_address ()   {
    return mem_address;
  }

  /**
   * Set the value of mem_id
   * @param new_var the new value of mem_id
   */
  void setMem_id (void new_var)   {
      mem_id = new_var;
  }

  /**
   * Get the value of mem_id
   * @return the value of mem_id
   */
  void getMem_id ()   {
    return mem_id;
  }
private:


  void initAttributes () ;

};

#endif // MEMBER_H
