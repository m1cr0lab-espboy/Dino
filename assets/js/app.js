window.addEventListener('load', () => {
    
    const upload   = document.querySelector('#upload');
    const button   = document.querySelector('#button');
    const loading  = document.querySelector('.progress-bar');
    const progress = document.querySelector('.progress-bar span');

    upload.addEventListener('state-changed', (event) => {

        switch (event.detail.state) {

            case 'initializing':
                progress.style.display = 'none';
                progress.style.width   = '0%';
                progress.className     = '';
                loading.style.display  = 'block';
                break;
            
            case 'preparing':
                if (event.detail.details.done) progress.style.display = 'block';
                break;
            
            case 'writing':
                progress.style.width = `${event.detail.details.percentage}%`;
                break;
            
            case 'finished':
                progress.classList.add('complete');
                break;
            
            case 'error':
                progress.classList.add('error');

        }

    });

});