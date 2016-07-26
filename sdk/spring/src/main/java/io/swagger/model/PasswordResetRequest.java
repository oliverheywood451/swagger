package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringCodegen", date = "2016-07-26T21:59:26.456Z")

public class PasswordResetRequest   {
  
  private String clientID = null;
  private String email = null;
  private String username = null;
  private String URL = null;

  /**
   **/
  public PasswordResetRequest clientID(String clientID) {
    this.clientID = clientID;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("ClientID")
  public String getClientID() {
    return clientID;
  }
  public void setClientID(String clientID) {
    this.clientID = clientID;
  }

  /**
   **/
  public PasswordResetRequest email(String email) {
    this.email = email;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Email")
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  /**
   **/
  public PasswordResetRequest username(String username) {
    this.username = username;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Username")
  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
  }

  /**
   **/
  public PasswordResetRequest URL(String URL) {
    this.URL = URL;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("URL")
  public String getURL() {
    return URL;
  }
  public void setURL(String URL) {
    this.URL = URL;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PasswordResetRequest passwordResetRequest = (PasswordResetRequest) o;
    return Objects.equals(clientID, passwordResetRequest.clientID) &&
        Objects.equals(email, passwordResetRequest.email) &&
        Objects.equals(username, passwordResetRequest.username) &&
        Objects.equals(URL, passwordResetRequest.URL);
  }

  @Override
  public int hashCode() {
    return Objects.hash(clientID, email, username, URL);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PasswordResetRequest {\n");
    
    sb.append("    clientID: ").append(toIndentedString(clientID)).append("\n");
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
    sb.append("    username: ").append(toIndentedString(username)).append("\n");
    sb.append("    URL: ").append(toIndentedString(URL)).append("\n");
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

