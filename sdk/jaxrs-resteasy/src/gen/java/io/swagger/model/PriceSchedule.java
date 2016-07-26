package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.model.ShipmentItem;
import java.util.List;




@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaResteasyServerCodegen", date = "2016-07-26T21:57:43.737Z")
public class PriceSchedule   {
  
  private String ID = null;
  private String name = null;
  private Boolean applyTax = null;
  private Boolean applyShipping = null;
  private Integer maxQuantity = null;
  private Boolean useCumulativeQuantity = null;
  private Boolean restrictedQuantity = null;
  private String orderType = null;
  private List<ShipmentItem> priceBreaks = new ArrayList<ShipmentItem>();
  private Object xp = null;

  /**
   **/
  
  @JsonProperty("ID")
  public String getID() {
    return ID;
  }
  public void setID(String ID) {
    this.ID = ID;
  }

  /**
   **/
  
  @JsonProperty("Name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  
  @JsonProperty("ApplyTax")
  public Boolean getApplyTax() {
    return applyTax;
  }
  public void setApplyTax(Boolean applyTax) {
    this.applyTax = applyTax;
  }

  /**
   **/
  
  @JsonProperty("ApplyShipping")
  public Boolean getApplyShipping() {
    return applyShipping;
  }
  public void setApplyShipping(Boolean applyShipping) {
    this.applyShipping = applyShipping;
  }

  /**
   **/
  
  @JsonProperty("MaxQuantity")
  public Integer getMaxQuantity() {
    return maxQuantity;
  }
  public void setMaxQuantity(Integer maxQuantity) {
    this.maxQuantity = maxQuantity;
  }

  /**
   **/
  
  @JsonProperty("UseCumulativeQuantity")
  public Boolean getUseCumulativeQuantity() {
    return useCumulativeQuantity;
  }
  public void setUseCumulativeQuantity(Boolean useCumulativeQuantity) {
    this.useCumulativeQuantity = useCumulativeQuantity;
  }

  /**
   **/
  
  @JsonProperty("RestrictedQuantity")
  public Boolean getRestrictedQuantity() {
    return restrictedQuantity;
  }
  public void setRestrictedQuantity(Boolean restrictedQuantity) {
    this.restrictedQuantity = restrictedQuantity;
  }

  /**
   **/
  
  @JsonProperty("OrderType")
  public String getOrderType() {
    return orderType;
  }
  public void setOrderType(String orderType) {
    this.orderType = orderType;
  }

  /**
   **/
  
  @JsonProperty("PriceBreaks")
  public List<ShipmentItem> getPriceBreaks() {
    return priceBreaks;
  }
  public void setPriceBreaks(List<ShipmentItem> priceBreaks) {
    this.priceBreaks = priceBreaks;
  }

  /**
   **/
  
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
    PriceSchedule priceSchedule = (PriceSchedule) o;
    return Objects.equals(ID, priceSchedule.ID) &&
        Objects.equals(name, priceSchedule.name) &&
        Objects.equals(applyTax, priceSchedule.applyTax) &&
        Objects.equals(applyShipping, priceSchedule.applyShipping) &&
        Objects.equals(maxQuantity, priceSchedule.maxQuantity) &&
        Objects.equals(useCumulativeQuantity, priceSchedule.useCumulativeQuantity) &&
        Objects.equals(restrictedQuantity, priceSchedule.restrictedQuantity) &&
        Objects.equals(orderType, priceSchedule.orderType) &&
        Objects.equals(priceBreaks, priceSchedule.priceBreaks) &&
        Objects.equals(xp, priceSchedule.xp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ID, name, applyTax, applyShipping, maxQuantity, useCumulativeQuantity, restrictedQuantity, orderType, priceBreaks, xp);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PriceSchedule {\n");
    
    sb.append("    ID: ").append(toIndentedString(ID)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    applyTax: ").append(toIndentedString(applyTax)).append("\n");
    sb.append("    applyShipping: ").append(toIndentedString(applyShipping)).append("\n");
    sb.append("    maxQuantity: ").append(toIndentedString(maxQuantity)).append("\n");
    sb.append("    useCumulativeQuantity: ").append(toIndentedString(useCumulativeQuantity)).append("\n");
    sb.append("    restrictedQuantity: ").append(toIndentedString(restrictedQuantity)).append("\n");
    sb.append("    orderType: ").append(toIndentedString(orderType)).append("\n");
    sb.append("    priceBreaks: ").append(toIndentedString(priceBreaks)).append("\n");
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

