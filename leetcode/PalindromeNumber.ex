defmodule Solution do
  @spec is_palindrome(x :: integer) :: boolean
  def is_palindrome(x) do
        str_x = Integer.to_string(x)                                           

        if rem(String.length(str_x), 2) do

            str_x === String.reverse(str_x)

        else 
            [head, tail] = String.split(str_x, String.at(str_x, div(String.length(str_x), 2))  )

            head === String.reverse(tail)
        end
  end
      
end
