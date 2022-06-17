import React from 'react'
import {useAuth0} from "@auth0/auth0-react";

export const GoToFilesBtn = () => {
    const {user} = useAuth0();
    function reLocatePage(){
        window.location.assign(`http://localhost:5000/?user=${user?.email}`);
    }
    return (
        <button onClick={() => reLocatePage()}>
            My Docs
        </button>
    );
};