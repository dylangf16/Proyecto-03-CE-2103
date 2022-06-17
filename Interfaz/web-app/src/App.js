import { useAuth0 } from '@auth0/auth0-react';
import { LoginButton} from "./Login";
import { LogoutButton} from "./Logout";
import { Profile } from "./Profile.js";
import { GoToFilesBtn } from "./GoToFilesBtn.js";
import logo from './logo.svg';
import './App.css';

function App() {
    const {isAuthenticated} = useAuth0();
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
          {isAuthenticated ? (
              <>
                  <Profile />
                  <GoToFilesBtn />
                  <LogoutButton/>
              </>
          ) : (<LoginButton />
          )}
      </header>
    </div>
  );
}

export default App;
