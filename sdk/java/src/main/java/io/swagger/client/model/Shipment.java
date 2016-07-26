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
import io.swagger.client.model.ShipmentItem;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import org.joda.time.LocalDate;


/**
 * Shipment
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-07-26T21:57:27.157Z")
public class Shipment   {
  @SerializedName("ID")
  private String ID = null;

  @SerializedName("Shipper")
  private String shipper = null;

  @SerializedName("DateShipped")
  private LocalDate dateShipped = null;

  @SerializedName("TrackingNumber")
  private String trackingNumber = null;

  @SerializedName("Cost")
  private BigDecimal cost = null;

  @SerializedName("Items")
  private List<ShipmentItem> items = new ArrayList<ShipmentItem>();

  @SerializedName("xp")
  private Object xp = null;

  public Shipment ID(String ID) {
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

  public Shipment shipper(String shipper) {
    this.shipper = shipper;
    return this;
  }

   /**
   * Get shipper
   * @return shipper
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getShipper() {
    return shipper;
  }

  public void setShipper(String shipper) {
    this.shipper = shipper;
  }

  public Shipment dateShipped(LocalDate dateShipped) {
    this.dateShipped = dateShipped;
    return this;
  }

   /**
   * Get dateShipped
   * @return dateShipped
  **/
  @ApiModelProperty(example = "null", value = "")
  public LocalDate getDateShipped() {
    return dateShipped;
  }

  public void setDateShipped(LocalDate dateShipped) {
    this.dateShipped = dateShipped;
  }

  public Shipment trackingNumber(String trackingNumber) {
    this.trackingNumber = trackingNumber;
    return this;
  }

   /**
   * Get trackingNumber
   * @return trackingNumber
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getTrackingNumber() {
    return trackingNumber;
  }

  public void setTrackingNumber(String trackingNumber) {
    this.trackingNumber = trackingNumber;
  }

  public Shipment cost(BigDecimal cost) {
    this.cost = cost;
    return this;
  }

   /**
   * Get cost
   * @return cost
  **/
  @ApiModelProperty(example = "null", value = "")
  public BigDecimal getCost() {
    return cost;
  }

  public void setCost(BigDecimal cost) {
    this.cost = cost;
  }

  public Shipment items(List<ShipmentItem> items) {
    this.items = items;
    return this;
  }

   /**
   * Get items
   * @return items
  **/
  @ApiModelProperty(example = "null", value = "")
  public List<ShipmentItem> getItems() {
    return items;
  }

  public void setItems(List<ShipmentItem> items) {
    this.items = items;
  }

  public Shipment xp(Object xp) {
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
    Shipment shipment = (Shipment) o;
    return Objects.equals(this.ID, shipment.ID) &&
        Objects.equals(this.shipper, shipment.shipper) &&
        Objects.equals(this.dateShipped, shipment.dateShipped) &&
        Objects.equals(this.trackingNumber, shipment.trackingNumber) &&
        Objects.equals(this.cost, shipment.cost) &&
        Objects.equals(this.items, shipment.items) &&
        Objects.equals(this.xp, shipment.xp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ID, shipper, dateShipped, trackingNumber, cost, items, xp);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Shipment {\n");
    
    sb.append("    ID: ").append(toIndentedString(ID)).append("\n");
    sb.append("    shipper: ").append(toIndentedString(shipper)).append("\n");
    sb.append("    dateShipped: ").append(toIndentedString(dateShipped)).append("\n");
    sb.append("    trackingNumber: ").append(toIndentedString(trackingNumber)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
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

