// $Id$

#ifndef EventFilter_StorageManager_CommonRegistrationInfo_h
#define EventFilter_StorageManager_CommonRegistrationInfo_h


#include <iosfwd>
#include <string>

#include "EventFilter/StorageManager/interface/QueueID.h"
#include "EventFilter/StorageManager/interface/ConsumerID.h"
#include "EventFilter/StorageManager/interface/Utils.h"

namespace stor
{
  /**
   * This struct holds the registration information sufficient to
   * implement the RegistrationInfoBase interface. Derived classes
   * that don't have reason to do otherwise should include this as a
   * data member.
   *
   * $Author$
   * $Revision$
   * $Date$
   */

  struct CommonRegistrationInfo
  {
    CommonRegistrationInfo
    (
      const std::string& consumerName,
      const size_t& queueSize,
      const enquing_policy::PolicyTag& queuePolicy,
      const utils::duration_t& secondsToStale
    );

    const std::string                _consumerName;
    const size_t                     _queueSize;
    const enquing_policy::PolicyTag  _queuePolicy;
    const utils::duration_t          _secondsToStale;
    QueueID                          _queueId;
    ConsumerID                       _consumerId;
  };

  // If changing the print order of things in
  // EventConsumerRegistrationInfo is acceptable, the following could
  // be used to implement EventConsumerRegistrationInfo::write()

  std::ostream& operator<<(std::ostream& os, 
                           CommonRegistrationInfo const& ri);

  
} // namespace stor

#endif


/// emacs configuration
/// Local Variables: -
/// mode: c++ -
/// c-basic-offset: 2 -
/// indent-tabs-mode: nil -
/// End: -
