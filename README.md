# Math Library
## Linear Algebra and Matrix Math Classes and Methods

## _Overview_

#### Data Types
- Vector 2 (x,y)
- Vector 3 (x,y,z)
- 2x2 Matrix
- 3x3 Matrix
- 2D Shape Geometries
  - Rectangle
  - Circle
- 3D Shape Geometries
  - Box
  - Sphere

#### Functionality
- Vectors
  - Add, Subtract, Multiply, Divide
    - These methods take two vectors and add, subtract, multiply, or divide them returning a new vector.
  - Scalar multiply and divide
    - These methods multiply every vector value by a scalar quantity returning a new vector.
  - Dot Product Calculation
    - The dot product is the scalar product of two vectors, meaning it returns the scalar (real number) product of two vectors.
    - This is very important because it can be used to calculate the angle between two vectors.
    - In games, the dot product can be used to quickly tell the direction two vectors are facing relative to each other.
      - Dot product > 0 shows the two vectors are facing each other
      - Dot Product < 0 shows the two vectors are facing opposite directions
      - Dot product = 0 shows the two vectors are perpendicular
    - This method takes in two vectors and returns a float.
  - Cross Product Calculation
    - The cross product is the vector product of two Vector 3's (x,y,z).
    - The cross product tells the user the vector perpendicular to the two incoming vector 3's. Its magnitude of the cross product vector is the average of the two incoming vector 3's.
    - This is useful in physics calculations like finding the angle of an object bouncing off the ground.
    - This method takes in two Vector 3's and returns a new Vector 3.
  - Get Vector Length
    - These method takes in a vector and returns its length as a float.
  - Get Rotation Vector
    - Rotation Vector: https://en.wikipedia.org/wiki/Rotation_matrix
    - Rotate a Vector 2 clockwise with respect to the x-axis.
    - Euler rotations are used to rotate about an axis in a 3D space.
      - Rotate a Vector 3 about the X, X, or Z axis.
    - These methods take in a Vector with an angle in degrees returning a new Vector.
  - Get Angle between two vectors
    - This method takes in two vector and returns the angle between them in degrees.
- Matrix
  - Add, Subtract, Multiply, Divide
    - These methods take two matrices and add, subtract, multiply, or divide them returning a new matrix.
  - Scalar multiply and divide
    - These methods multiply every matrix value by a scalar quantity returning a new matrix.
  - Get Determinant of a Matrix
    - The determinant of a matrix is its a scalar value used to calculate other properties like the inverse matrix.
    - The determinant only exists with square matrices. Luckily, the two matrix classes are both square..
    - This method takes in a matrix and returns a scalar float value.
  - Get Inverse Matrix
    - An inverse matrix is similar to the reciprocal for a number. 
    - This method takes in a matrix and returns a new matrix.
- Shapes 2D and 3D
  - Point to Shape Collisions
  - Shape to Shape collisions
    - 2D Collision: https://developer.mozilla.org/en-US/docs/Games/Techniques/2D_collision_detection
      - The collision detection for the 2d shapes assume that the two boxes are axis aligned and do not rotate.
    - 3D Collision: https://developer.mozilla.org/en-US/docs/Games/Techniques/3D_collision_detection
      - The collision detection for the 3d shapes assume that the two boxes are axis aligned and do not rotate.
  - Area, Circumference, Surface Area, and Volume
