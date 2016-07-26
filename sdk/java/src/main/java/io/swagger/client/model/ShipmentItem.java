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
 * ShipmentItem
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-07-26T21:57:27.157Z")
public class ShipmentItem   {
  @SerializedName("OrderID")
  private String orderID = null;

  @SerializedName("LineItemID")
  private String lineItemID = null;

  @SerializedName("QuantityShipped")
  private Integer quantityShipped = null;

  public ShipmentItem orderID(String orderID) {
    this.orderID = orderID;
    return this;
  }

   /**
   * Get orderID
   * @return orderID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getOrderID() {
    return orderID;
  }

  public void setOrderID(String orderID) {
    this.orderID = orderID;
  }

  public ShipmentItem lineItemID(String lineItemID) {
    this.lineItemID = lineItemID;
    return this;
  }

   /**
   * Get lineItemID
   * @return lineItemID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getLineItemID() {
    return lineItemID;
  }

  public void setLineItemID(String lineItemID) {
    this.lineItemID = lineItemID;
  }

  public ShipmentItem quantityShipped(Integer quantityShipped) {
    this.quantityShipped = quantityShipped;
    return this;
  }

   /**
   * Get quantityShipped
   * @return quantityShipped
  **/
  @ApiModelProperty(example = "null", value = "")
  public Integer getQuantityShipped() {
    return quantityShipped;
  }

  public void setQuantityShipped(Integer quantityShipped) {
    this.quantityShipped = quantityShipped;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ShipmentItem shipmentItem = (ShipmentItem) o;
    return Objects.equals(this.orderID, shipmentItem.orderID) &&
        Objects.equals(this.lineItemID, shipmentItem.lineItemID) &&
        Objects.equals(this.quantityShipped, shipmentItem.quantityShipped);
  }

  @Override
  public int hashCode() {
    return Objects.hash(orderID, lineItemID, quantityShipped);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ShipmentItem {\n");
    
    sb.append("    orderID: ").append(toIndentedString(orderID)).append("\n");
    sb.append("    lineItemID: ").append(toIndentedString(lineItemID)).append("\n");
    sb.append("    quantityShipped: ").append(toIndentedString(quantityShipped)).append("\n");
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

