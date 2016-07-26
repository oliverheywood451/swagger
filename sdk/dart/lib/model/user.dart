part of swagger.api;


@Entity()
class User {
  
  @Property(name: 'ID')
  String ID = null;
  

  @Property(name: 'Username')
  String username = null;
  

  @Property(name: 'Password')
  String password = null;
  

  @Property(name: 'FirstName')
  String firstName = null;
  

  @Property(name: 'LastName')
  String lastName = null;
  

  @Property(name: 'Email')
  String email = null;
  

  @Property(name: 'Phone')
  String phone = null;
  

  @Property(name: 'TermsAccepted')
  DateTime termsAccepted = null;
  

  @Property(name: 'Active')
  bool active = null;
  

  @Property(name: 'xp')
  Object xp = null;
  

  @Property(name: 'SecurityProfileID')
  String securityProfileID = null;
  
  User();

  @override
  String toString()  {
    return 'User[ID=$ID, username=$username, password=$password, firstName=$firstName, lastName=$lastName, email=$email, phone=$phone, termsAccepted=$termsAccepted, active=$active, xp=$xp, securityProfileID=$securityProfileID, ]';
  }

}

