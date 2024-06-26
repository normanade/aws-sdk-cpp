﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VpcCidrBlockStateCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the state of a CIDR block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcCidrBlockState">AWS
   * API Reference</a></p>
   */
  class VpcCidrBlockState
  {
  public:
    AWS_EC2_API VpcCidrBlockState();
    AWS_EC2_API VpcCidrBlockState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcCidrBlockState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the CIDR block.</p>
     */
    inline const VpcCidrBlockStateCode& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VpcCidrBlockStateCode& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VpcCidrBlockStateCode&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VpcCidrBlockState& WithState(const VpcCidrBlockStateCode& value) { SetState(value); return *this;}
    inline VpcCidrBlockState& WithState(VpcCidrBlockStateCode&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the CIDR block, if applicable.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline VpcCidrBlockState& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline VpcCidrBlockState& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline VpcCidrBlockState& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    VpcCidrBlockStateCode m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
