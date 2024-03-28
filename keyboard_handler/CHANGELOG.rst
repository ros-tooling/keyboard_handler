^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package keyboard_handler
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.3.1 (2024-03-28)
------------------
* Shorten lambdas so newer uncrustify is happier. (`#42 <https://github.com/ros-tooling/keyboard_handler/issues/42>`_)
* Fixed C++20 warning implicit capture of this in lambda (`#41 <https://github.com/ros-tooling/keyboard_handler/issues/41>`_)
* Contributors: AiVerisimilitude, Chris Lalancette

0.3.0 (2024-01-24)
------------------
* Update to C++17. (`#37 <https://github.com/ros-tooling/keyboard_handler/issues/37>`_)
* Contributors: Chris Lalancette

0.2.0 (2023-04-28)
------------------

0.1.0 (2022-11-08)
------------------
* Force exit from main thread on signal handling in `keyboard_handler` (`#23 <https://github.com/ros-tooling/keyboard_handler/issues/23>`_)
* Contributors: Michael Orlov

0.0.4 (2022-03-29)
------------------
* Install includes to include/${PROJECT_NAME} and misc CMake fixes (`#12 <https://github.com/ros-tooling/keyboard_handler/issues/12>`_)
* Contributors: Shane Loretz

0.0.3 (2021-12-21)
------------------
* Fixes for uncrustify 0.72
* Install SIGINT handler optionally and call old handler
* Contributors: Chris Lalancette, Christophe Bedard, Emerson Knapp, Michael Orlov

0.0.2 (2021-09-02)
------------------
* Merge pull request `#5 <https://github.com/ros-tooling/keyboard_handler/issues/5>`_ from lihui815/sonia-str2code
  added enum_str_to_key_code
* Unified keyboard handler (`#1 <https://github.com/ros-tooling/keyboard_handler/issues/1>`_)
  * Initial implementation for Keyboard handler
* Contributors: Emerson Knapp, Michael Orlov, Sonia Jin
