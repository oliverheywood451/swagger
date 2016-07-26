/**
 * OrderCloud
 * A full ecommerce backend as a service.
 *
 * OpenAPI spec version: 0.1
 * Contact: ordercloud@four51.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


package io.swagger.client.model;

import java.util.Objects;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;


/**
 * ProductAssignment
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-07-26T21:57:27.157Z")
public class ProductAssignment   {
  @SerializedName("ProductID")
  private String productID = null;

  @SerializedName("StandardPriceScheduleID")
  private String standardPriceScheduleID = null;

  @SerializedName("ReplenishmentPriceScheduleID")
  private String replenishmentPriceScheduleID = null;

  @SerializedName("UserID")
  private String userID = null;

  @SerializedName("UserGroupID")
  private String userGroupID = null;

  @SerializedName("BuyerID")
  private String buyerID = null;

  public ProductAssignment productID(String productID) {
    this.productID = productID;
    return this;
  }

   /**
   * Get productID
   * @return productID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getProductID() {
    return productID;
  }

  public void setProductID(String productID) {
    this.productID = productID;
  }

  public ProductAssignment standardPriceScheduleID(String standardPriceScheduleID) {
    this.standardPriceScheduleID = standardPriceScheduleID;
    return this;
  }

   /**
   * Get standardPriceScheduleID
   * @return standardPriceScheduleID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getStandardPriceScheduleID() {
    return standardPriceScheduleID;
  }

  public void setStandardPriceScheduleID(String standardPriceScheduleID) {
    this.standardPriceScheduleID = standardPriceScheduleID;
  }

  public ProductAssignment replenishmentPriceScheduleID(String replenishmentPriceScheduleID) {
    this.replenishmentPriceScheduleID = replenishmentPriceScheduleID;
    return this;
  }

   /**
   * Get replenishmentPriceScheduleID
   * @return replenishmentPriceScheduleID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getReplenishmentPriceScheduleID() {
    return replenishmentPriceScheduleID;
  }

  public void setReplenishmentPriceScheduleID(String replenishmentPriceScheduleID) {
    this.replenishmentPriceScheduleID = replenishmentPriceScheduleID;
  }

  public ProductAssignment userID(String userID) {
    this.userID = userID;
    return this;
  }

   /**
   * Get userID
   * @return userID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getUserID() {
    return userID;
  }

  public void setUserID(String userID) {
    this.userID = userID;
  }

  public ProductAssignment userGroupID(String userGroupID) {
    this.userGroupID = userGroupID;
    return this;
  }

   /**
   * Get userGroupID
   * @return userGroupID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getUserGroupID() {
    return userGroupID;
  }

  public void setUserGroupID(String userGroupID) {
    this.userGroupID = userGroupID;
  }

  public ProductAssignment buyerID(String buyerID) {
    this.buyerID = buyerID;
    return this;
  }

   /**
   * Get buyerID
   * @return buyerID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getBuyerID() {
    return buyerID;
  }

  public void setBuyerID(String buyerID) {
    this.buyerID = buyerID;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ProductAssignment productAssignment = (ProductAssignment) o;
    return Objects.equals(this.productID, productAssignment.productID) &&
        Objects.equals(this.standardPriceScheduleID, productAssignment.standardPriceScheduleID) &&
        Objects.equals(this.replenishmentPriceScheduleID, productAssignment.replenishmentPriceScheduleID) &&
        Objects.equals(this.userID, productAssignment.userID) &&
        Objects.equals(this.userGroupID, productAssignment.userGroupID) &&
        Objects.equals(this.buyerID, productAssignment.buyerID);
  }

  @Override
  public int hashCode() {
    return Objects.hash(productID, standardPriceScheduleID, replenishmentPriceScheduleID, userID, userGroupID, buyerID);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ProductAssignment {\n");
    
    sb.append("    productID: ").append(toIndentedString(productID)).append("\n");
    sb.append("    standardPriceScheduleID: ").append(toIndentedString(standardPriceScheduleID)).append("\n");
    sb.append("    replenishmentPriceScheduleID: ").append(toIndentedString(replenishmentPriceScheduleID)).append("\n");
    sb.append("    userID: ").append(toIndentedString(userID)).append("\n");
    sb.append("    userGroupID: ").append(toIndentedString(userGroupID)).append("\n");
    sb.append("    buyerID: ").append(toIndentedString(buyerID)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

