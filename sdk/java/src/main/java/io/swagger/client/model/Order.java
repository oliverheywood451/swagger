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
import java.math.BigDecimal;


/**
 * Order
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-07-26T21:57:27.157Z")
public class Order   {
  @SerializedName("ID")
  private String ID = null;

  @SerializedName("Type")
  private String type = null;

  @SerializedName("FromUserID")
  private String fromUserID = null;

  @SerializedName("BillingAddressID")
  private String billingAddressID = null;

  @SerializedName("ShippingAddressID")
  private String shippingAddressID = null;

  @SerializedName("Comments")
  private String comments = null;

  @SerializedName("ShippingCost")
  private BigDecimal shippingCost = null;

  @SerializedName("TaxCost")
  private BigDecimal taxCost = null;

  @SerializedName("xp")
  private Object xp = null;

  public Order ID(String ID) {
    this.ID = ID;
    return this;
  }

   /**
   * Get ID
   * @return ID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getID() {
    return ID;
  }

  public void setID(String ID) {
    this.ID = ID;
  }

  public Order type(String type) {
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public Order fromUserID(String fromUserID) {
    this.fromUserID = fromUserID;
    return this;
  }

   /**
   * Get fromUserID
   * @return fromUserID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getFromUserID() {
    return fromUserID;
  }

  public void setFromUserID(String fromUserID) {
    this.fromUserID = fromUserID;
  }

  public Order billingAddressID(String billingAddressID) {
    this.billingAddressID = billingAddressID;
    return this;
  }

   /**
   * Get billingAddressID
   * @return billingAddressID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getBillingAddressID() {
    return billingAddressID;
  }

  public void setBillingAddressID(String billingAddressID) {
    this.billingAddressID = billingAddressID;
  }

  public Order shippingAddressID(String shippingAddressID) {
    this.shippingAddressID = shippingAddressID;
    return this;
  }

   /**
   * Get shippingAddressID
   * @return shippingAddressID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getShippingAddressID() {
    return shippingAddressID;
  }

  public void setShippingAddressID(String shippingAddressID) {
    this.shippingAddressID = shippingAddressID;
  }

  public Order comments(String comments) {
    this.comments = comments;
    return this;
  }

   /**
   * Get comments
   * @return comments
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getComments() {
    return comments;
  }

  public void setComments(String comments) {
    this.comments = comments;
  }

  public Order shippingCost(BigDecimal shippingCost) {
    this.shippingCost = shippingCost;
    return this;
  }

   /**
   * Get shippingCost
   * @return shippingCost
  **/
  @ApiModelProperty(example = "null", value = "")
  public BigDecimal getShippingCost() {
    return shippingCost;
  }

  public void setShippingCost(BigDecimal shippingCost) {
    this.shippingCost = shippingCost;
  }

  public Order taxCost(BigDecimal taxCost) {
    this.taxCost = taxCost;
    return this;
  }

   /**
   * Get taxCost
   * @return taxCost
  **/
  @ApiModelProperty(example = "null", value = "")
  public BigDecimal getTaxCost() {
    return taxCost;
  }

  public void setTaxCost(BigDecimal taxCost) {
    this.taxCost = taxCost;
  }

  public Order xp(Object xp) {
    this.xp = xp;
    return this;
  }

   /**
   * Get xp
   * @return xp
  **/
  @ApiModelProperty(example = "null", value = "")
  public Object getXp() {
    return xp;
  }

  public void setXp(Object xp) {
    this.xp = xp;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Order order = (Order) o;
    return Objects.equals(this.ID, order.ID) &&
        Objects.equals(this.type, order.type) &&
        Objects.equals(this.fromUserID, order.fromUserID) &&
        Objects.equals(this.billingAddressID, order.billingAddressID) &&
        Objects.equals(this.shippingAddressID, order.shippingAddressID) &&
        Objects.equals(this.comments, order.comments) &&
        Objects.equals(this.shippingCost, order.shippingCost) &&
        Objects.equals(this.taxCost, order.taxCost) &&
        Objects.equals(this.xp, order.xp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ID, type, fromUserID, billingAddressID, shippingAddressID, comments, shippingCost, taxCost, xp);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Order {\n");
    
    sb.append("    ID: ").append(toIndentedString(ID)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    fromUserID: ").append(toIndentedString(fromUserID)).append("\n");
    sb.append("    billingAddressID: ").append(toIndentedString(billingAddressID)).append("\n");
    sb.append("    shippingAddressID: ").append(toIndentedString(shippingAddressID)).append("\n");
    sb.append("    comments: ").append(toIndentedString(comments)).append("\n");
    sb.append("    shippingCost: ").append(toIndentedString(shippingCost)).append("\n");
    sb.append("    taxCost: ").append(toIndentedString(taxCost)).append("\n");
    sb.append("    xp: ").append(toIndentedString(xp)).append("\n");
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
