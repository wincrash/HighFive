#ifndef H5DATASET_HPP
#define H5DATASET_HPP

#include <vector>

#include "H5Object.hpp"
#include "bits/H5Slice_traits.hpp"




namespace HighFive{


template <typename Derivate> class NodeTraits;
template <typename Derivate> class SliceTraits;
class DataType;
class DataSpace;

class DataSet : public SliceTraits<DataSet>, public Object{
public:

    size_t getStorageSize() const;

    ///
    /// \brief getDataType
    /// \return return the datatype associated with this dataset
    ///
    DataType getDataType() const;

    ///
    /// \brief getSpace
    /// \return return the dataspace associated with this dataset
    ///
    DataSpace getSpace() const;


private:
    DataSet();
    template <typename Derivate> friend class NodeTraits;

};

}

#include "bits/H5DataSet_misc.hpp"

#endif // H5DATASET_HPP
