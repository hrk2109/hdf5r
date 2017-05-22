# Changes from h5 to hdf5r

- Change subset operator to [[
  - Q: Why [[ instead of [? 
  - Q: Implement [ to support multiple arguments?
- No Support for on-the-fly group creation / Recursive group creation ? 
    e.g. file[["testgroup/testset"]] <- 1:10 without existing testgroup
- full.names in list.xxx does not return global path name, changed parameters

# Missing Features

- list.attributes (e.g. through H5Aiterate2)
- Adjust $print() for all HDF5 objects
- Create dataset without chunking?
  - This should work without setting chunk size:
    `dset1 <- createDataSet(file, "testmat_1", testmat_n, space = dspace)`
- Get Chunk size from dataset
- Implement follow.link
- How to set up dataset with specified maximum dimensions, only using set_extent?
- General: Improve error messages


# Issues
- H5S$new(maxdims = "test") should immediately throw error
- Check why H5T_STD_I64LE is not mapped to 64bit integer?
- Check why enum test case ist not working (test-zzz.enum.R)
- Does array retrieval work?
- Subsetting allows zero and negative values
- insert check before expand
  `f <- function() dset2[10:11, 9] <- matrix(rep(0, 2*9), nrow = 2)`
- Reading entire dataset using [] (instead of [,]) for 2-dimensional objects should also work, like in
  `matrix(1:9, nrow = 3)[]`
- Move package startup message to README / doc
- Check datatype before dataset is extended
- Fix Issues for HDF5 1.8.12
- NA handling for strings does not work properly
- Fix Issues for HDF5 1.8.14
- Implement test cases DataSet-Select-Elem/DataSet-Select-Hyperslab needs refactoring of H5D$read functions (separate dataspace from read).
  - ~Should all elements be returned if index is zero for element-wise selection?~
  - ~Subscribt out of bounds not thrown for element-wise selection. Instead, indexing starts at 1.~

# To be implemented for release:
- Adjust $print() for all HDF5 objects
  - list.attributes (e.g. through H5Aiterate2)
- Subsetting allows zero and negative values
- insert check before expand
  `f <- function() dset2[10:11, 9] <- matrix(rep(0, 2*9), nrow = 2)`
- Move package startup message to README / doc
- Fix Issues for HDF5 1.8.12
- Fix Issues for HDF5 1.8.14

# Organizational
- hhoeflin: Add mannau to repo hhoeflin/hdf5r as Collaborator
- hhoeflin: Add Mario Annau as Author to package (DESCRIPTION)
- mannau: Set **h5** as deprecated, link to **hdf5r** 
- all: Specify release date (e.g May 1st)
- mannau: Inform HDF5 Group about new CRAN release (make **hdf5r** standard HDF5 package)
