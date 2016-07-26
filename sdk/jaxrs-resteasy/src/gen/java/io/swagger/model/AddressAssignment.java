package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;




@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaResteasyServerCodegen", date = "2016-07-26T21:57:43.737Z")
public class AddressAssignment   {
  
  private String addressID = null;
  private String userID = null;
  private String userGroupID = null;
  private Boolean isShipping = null;
  private Boolean isBilling = null;

  /**
   **/
  
  @JsonProperty("AddressID")
  public String getAddressID() {
    return addressID;
  }
  public void setAddressID(String addressID) {
    this.addressID = addressID;
  }

  /**
   **/
  
  @JsonProperty("UserID")
  public String getUserID() {
    return userID;
  }
  public void setUserID(String userID) {
    this.userID = userID;
  }

  /**
   **/
  
  @JsonProperty("UserGroupID")
  public String getUserGroupID() {
    return userGroupID;
  }
  public void setUserGroupID(String userGroupID) {
    this.userGroupID = userGroupID;
  }

  /**
   **/
  
  @JsonProperty("IsShipping")
  public Boolean getIsShipping() {
    return isShipping;
  }
  public void setIsShipping(Boolean isShipping) {
    this.isShipping = isShipping;
  }

  /**
   **/
  
  @JsonProperty("IsBilling")
  public Boolean getIsBilling() {
    return isBilling;
  }
  public void setIsBilling(Boolean isBilling) {
    this.isBilling = isBilling;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AddressAssignment addressAssignment = (AddressAssignment) o;
    return Objects.equals(addressID, addressAssignment.addressID) &&
        Objects.equals(userID, addressAssignment.userID) &&
        Objects.equals(userGroupID, addressAssignment.userGroupID) &&
        Objects.equals(isShipping, addressAssignment.isShipping) &&
        Objects.equals(isBilling, addressAssignment.isBilling);
  }

  @Override
  public int hashCode() {
    return Objects.hash(addressID, userID, userGroupID, isShipping, isBilling);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AddressAssignment {\n");
    
    sb.append("    addressID: ").append(toIndentedString(addressID)).append("\n");
    sb.append("    userID: ").append(toIndentedString(userID)).append("\n");
    sb.append("    userGroupID: ").append(toIndentedString(userGroupID)).append("\n");
    sb.append("    isShipping: ").append(toIndentedString(isShipping)).append("\n");
    sb.append("    isBilling: ").append(toIndentedString(isBilling)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

