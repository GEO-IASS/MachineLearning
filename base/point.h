#ifndef MACHINELEARNING_BASE_POINT_H_
#define MACHINELEARNING_BASE_POINT_H_
#include <string>

/**
 * \file point.h
 * \brief Header defining the multi-dimensional point interface.
 */

/**
 * Basic objects to be used by all machine learning algorithms.
 */
namespace base {

/**
 * \brief Multi-dimensional object interface.
 *
 * This interface is the primitive input data type for the learning algorithms.
 * For every new type of object we want to learn from, we must implement a
 * suitable concrete class to handle it.
 */
class Point {
 public:
  /**
   * \brief Standard destructor.
   */
  virtual ~Point();

  /** General accessor method for each feature of the underlying data.
   * \param feature_id The coordinate of interest. Indexing is implementation
   * specific.
   * \return The value of the coordinate specified in the input.
   */
  virtual double GetFeatureValue(unsigned feature_id) const = 0;

  /** General accessor method for the label of the underlying data.
   * \return The label of the object.
   */
  virtual double GetLabel() const = 0;

  /**
   * \brief Builds a `std::string` representation of the object.
   * \return A `std::string` representation of the object.
   */
  virtual std::string ToString() const = 0;
};

}  // namespace base

#endif
