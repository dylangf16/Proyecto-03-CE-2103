import { useAuth0 } from '@auth0/auth0-react';
import { LoginButton} from "./Login";
import { LogoutButton} from "./Logout";
import { Profile } from "./Profile.js";
import { GoToFilesBtn } from "./GoToFilesBtn.js";
import logo from './logo.svg';
import './App.css';

var createGuest = require('cross-domain-storage/guest');
var createHost = require('cross-domain-storage/host');
var storageHost = createHost([
    {
        origin: 'http://localhost:3000/',
        allowedMethods: ['get', 'set', 'remove'],
    },
    {
        origin: 'http://localhost:5000/',
        allowedMethods: ['get'],
    },
    ]);

function App() {
    const {user, isAuthenticated} = useAuth0();
    // if(isAuthenticated) {
    //     localStorage.setItem("Username", user.email);
    // }
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
