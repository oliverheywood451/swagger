<?php
/**
 * PriceSchedule
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   http://github.com/swagger-api/swagger-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * OrderCloud
 *
 * A full ecommerce backend as a service.
 *
 * OpenAPI spec version: 0.1
 * Contact: ordercloud@four51.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;

/**
 * PriceSchedule Class Doc Comment
 *
 * @category    Class */
/** 
 * @package     Swagger\Client
 * @author      http://github.com/swagger-api/swagger-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class PriceSchedule implements ArrayAccess
{
    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'PriceSchedule';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = array(
        'id' => 'string',
        'name' => 'string',
        'apply_tax' => 'bool',
        'apply_shipping' => 'bool',
        'max_quantity' => 'int',
        'use_cumulative_quantity' => 'bool',
        'restricted_quantity' => 'bool',
        'order_type' => 'string',
        'price_breaks' => '\Swagger\Client\Model\ShipmentItem[]',
        'xp' => 'object'
    );

    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of attributes where the key is the local name, and the value is the original name
     * @var string[]
     */
    protected static $attributeMap = array(
        'id' => 'ID',
        'name' => 'Name',
        'apply_tax' => 'ApplyTax',
        'apply_shipping' => 'ApplyShipping',
        'max_quantity' => 'MaxQuantity',
        'use_cumulative_quantity' => 'UseCumulativeQuantity',
        'restricted_quantity' => 'RestrictedQuantity',
        'order_type' => 'OrderType',
        'price_breaks' => 'PriceBreaks',
        'xp' => 'xp'
    );

    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = array(
        'id' => 'setId',
        'name' => 'setName',
        'apply_tax' => 'setApplyTax',
        'apply_shipping' => 'setApplyShipping',
        'max_quantity' => 'setMaxQuantity',
        'use_cumulative_quantity' => 'setUseCumulativeQuantity',
        'restricted_quantity' => 'setRestrictedQuantity',
        'order_type' => 'setOrderType',
        'price_breaks' => 'setPriceBreaks',
        'xp' => 'setXp'
    );

    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = array(
        'id' => 'getId',
        'name' => 'getName',
        'apply_tax' => 'getApplyTax',
        'apply_shipping' => 'getApplyShipping',
        'max_quantity' => 'getMaxQuantity',
        'use_cumulative_quantity' => 'getUseCumulativeQuantity',
        'restricted_quantity' => 'getRestrictedQuantity',
        'order_type' => 'getOrderType',
        'price_breaks' => 'getPriceBreaks',
        'xp' => 'getXp'
    );

    public static function getters()
    {
        return self::$getters;
    }

    

    

    /**
     * Associative array for storing property values
     * @var mixed[]
     */
    protected $container = array();

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['apply_tax'] = isset($data['apply_tax']) ? $data['apply_tax'] : null;
        $this->container['apply_shipping'] = isset($data['apply_shipping']) ? $data['apply_shipping'] : null;
        $this->container['max_quantity'] = isset($data['max_quantity']) ? $data['max_quantity'] : null;
        $this->container['use_cumulative_quantity'] = isset($data['use_cumulative_quantity']) ? $data['use_cumulative_quantity'] : null;
        $this->container['restricted_quantity'] = isset($data['restricted_quantity']) ? $data['restricted_quantity'] : null;
        $this->container['order_type'] = isset($data['order_type']) ? $data['order_type'] : null;
        $this->container['price_breaks'] = isset($data['price_breaks']) ? $data['price_breaks'] : null;
        $this->container['xp'] = isset($data['xp']) ? $data['xp'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = array();
        return $invalid_properties;
    }

    /**
     * validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properteis are valid
     */
    public function valid()
    {
        return true;
    }


    /**
     * Gets id
     * @return string
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     * @param string $id
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets name
     * @return string
     */
    public function getName()
    {
        return $this->container['name'];
    }

    /**
     * Sets name
     * @param string $name
     * @return $this
     */
    public function setName($name)
    {
        $this->container['name'] = $name;

        return $this;
    }

    /**
     * Gets apply_tax
     * @return bool
     */
    public function getApplyTax()
    {
        return $this->container['apply_tax'];
    }

    /**
     * Sets apply_tax
     * @param bool $apply_tax
     * @return $this
     */
    public function setApplyTax($apply_tax)
    {
        $this->container['apply_tax'] = $apply_tax;

        return $this;
    }

    /**
     * Gets apply_shipping
     * @return bool
     */
    public function getApplyShipping()
    {
        return $this->container['apply_shipping'];
    }

    /**
     * Sets apply_shipping
     * @param bool $apply_shipping
     * @return $this
     */
    public function setApplyShipping($apply_shipping)
    {
        $this->container['apply_shipping'] = $apply_shipping;

        return $this;
    }

    /**
     * Gets max_quantity
     * @return int
     */
    public function getMaxQuantity()
    {
        return $this->container['max_quantity'];
    }

    /**
     * Sets max_quantity
     * @param int $max_quantity
     * @return $this
     */
    public function setMaxQuantity($max_quantity)
    {
        $this->container['max_quantity'] = $max_quantity;

        return $this;
    }

    /**
     * Gets use_cumulative_quantity
     * @return bool
     */
    public function getUseCumulativeQuantity()
    {
        return $this->container['use_cumulative_quantity'];
    }

    /**
     * Sets use_cumulative_quantity
     * @param bool $use_cumulative_quantity
     * @return $this
     */
    public function setUseCumulativeQuantity($use_cumulative_quantity)
    {
        $this->container['use_cumulative_quantity'] = $use_cumulative_quantity;

        return $this;
    }

    /**
     * Gets restricted_quantity
     * @return bool
     */
    public function getRestrictedQuantity()
    {
        return $this->container['restricted_quantity'];
    }

    /**
     * Sets restricted_quantity
     * @param bool $restricted_quantity
     * @return $this
     */
    public function setRestrictedQuantity($restricted_quantity)
    {
        $this->container['restricted_quantity'] = $restricted_quantity;

        return $this;
    }

    /**
     * Gets order_type
     * @return string
     */
    public function getOrderType()
    {
        return $this->container['order_type'];
    }

    /**
     * Sets order_type
     * @param string $order_type
     * @return $this
     */
    public function setOrderType($order_type)
    {
        $this->container['order_type'] = $order_type;

        return $this;
    }

    /**
     * Gets price_breaks
     * @return \Swagger\Client\Model\ShipmentItem[]
     */
    public function getPriceBreaks()
    {
        return $this->container['price_breaks'];
    }

    /**
     * Sets price_breaks
     * @param \Swagger\Client\Model\ShipmentItem[] $price_breaks
     * @return $this
     */
    public function setPriceBreaks($price_breaks)
    {
        $this->container['price_breaks'] = $price_breaks;

        return $this;
    }

    /**
     * Gets xp
     * @return object
     */
    public function getXp()
    {
        return $this->container['xp'];
    }

    /**
     * Sets xp
     * @param object $xp
     * @return $this
     */
    public function setXp($xp)
    {
        $this->container['xp'] = $xp;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     * @param  integer $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        }

        return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
    }
}


