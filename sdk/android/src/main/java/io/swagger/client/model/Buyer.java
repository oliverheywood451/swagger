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


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Buyer  {
  
  @SerializedName("ID")
  private String ID = null;
  @SerializedName("Name")
  private String name = null;
  @SerializedName("Active")
  private Boolean active = null;
  @SerializedName("xp")
  private Object xp = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getID() {
    return ID;
  }
  public void setID(String ID) {
    this.ID = ID;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getActive() {
    return active;
  }
  public void setActive(Boolean active) {
    this.active = active;
  }

  /**
   **/
  @ApiModelProperty(value = "")
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
    Buyer buyer = (Buyer) o;
    return (ID == null ? buyer.ID == null : ID.equals(buyer.ID)) &&
        (name == null ? buyer.name == null : name.equals(buyer.name)) &&
        (active == null ? buyer.active == null : active.equals(buyer.active)) &&
        (xp == null ? buyer.xp == null : xp.equals(buyer.xp));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (ID == null ? 0: ID.hashCode());
    result = 31 * result + (name == null ? 0: name.hashCode());
    result = 31 * result + (active == null ? 0: active.hashCode());
    result = 31 * result + (xp == null ? 0: xp.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Buyer {\n");
    
    sb.append("  ID: ").append(ID).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  active: ").append(active).append("\n");
    sb.append("  xp: ").append(xp).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
