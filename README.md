# chrono

Function :<br/>
  Restart => restart chronom<br/>
  Start => start chrono<br/>
  Pause => pause chrono<br/>
  Toggle => start or pause the chrono<br/>
  getElapsedTime => return elapsed second in a double<br/>
  <br/>
How to use it ?<br/>
Tools::Chronometer ch;<br/>
ch.toggle();<br/>
// do op<br/>
ch.pause();<br/>
std::cout << ch.getElapsedTime() << std::endl;<br/>
// ...<br/>

