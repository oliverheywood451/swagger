package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ShipmentItem;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;





@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaJerseyServerCodegen", date = "2016-07-26T21:57:33.980Z")
public class Shipment   {
  
  private String ID = null;
  private String shipper = null;
  private Date dateShipped = null;
  private String trackingNumber = null;
  private BigDecimal cost = null;
  private List<ShipmentItem> items = new ArrayList<ShipmentItem>();
  private Object xp = null;

  /**
   **/
  public Shipment ID(String ID) {
    this.ID = ID;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("ID")
  public String getID() {
    return ID;
  }
  public void setID(String ID) {
    this.ID = ID;
  }

  /**
   **/
  public Shipment shipper(String shipper) {
    this.shipper = shipper;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Shipper")
  public String getShipper() {
    return shipper;
  }
  public void setShipper(String shipper) {
    this.shipper = shipper;
  }

  /**
   **/
  public Shipment dateShipped(Date dateShipped) {
    this.dateShipped = dateShipped;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("DateShipped")
  public Date getDateShipped() {
    return dateShipped;
  }
  public void setDateShipped(Date dateShipped) {
    this.dateShipped = dateShipped;
  }

  /**
   **/
  public Shipment trackingNumber(String trackingNumber) {
    this.trackingNumber = trackingNumber;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("TrackingNumber")
  public String getTrackingNumber() {
    return trackingNumber;
  }
  public void setTrackingNumber(String trackingNumber) {
    this.trackingNumber = trackingNumber;
  }

  /**
   **/
  public Shipment cost(BigDecimal cost) {
    this.cost = cost;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Cost")
  public BigDecimal getCost() {
    return cost;
  }
  public void setCost(BigDecimal cost) {
    this.cost = cost;
  }

  /**
   **/
  public Shipment items(List<ShipmentItem> items) {
    this.items = items;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Items")
  public List<ShipmentItem> getItems() {
    return items;
  }
  public void setItems(List<ShipmentItem> items) {
    this.items = items;
  }

  /**
   **/
  public Shipment xp(Object xp) {
    this.xp = xp;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("xp")
  public Object getXp() {
    return xp;
  }
  public void setXp(Object xp) {
    this.xp = xp;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Shipment shipment = (Shipment) o;
    return Objects.equals(ID, shipment.ID) &&
        Objects.equals(shipper, shipment.shipper) &&
        Objects.equals(dateShipped, shipment.dateShipped) &&
        Objects.equals(trackingNumber, shipment.trackingNumber) &&
        Objects.equals(cost, shipment.cost) &&
        Objects.equals(items, shipment.items) &&
        Objects.equals(xp, shipment.xp);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
