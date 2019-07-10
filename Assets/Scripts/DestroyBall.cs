using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DestroyBall : MonoBehaviour {

    public Animator anim = null;
	public spawnGoodies sg;
	public BackToMenu bm;
	public ChanceRemainMenu crm;
	public FuggaWin fw;
	public UnityAds ads;
	public Time tm;
	private AudioSource ASource;
	public AudioClip AClip;

	//Time 
	public int time;
	private bool mGameOver = false;

	void Start()
	{		
		InvokeRepeating ("Count", 0.0f, 1.0f);

		if (Manager.DifficultyLevel == 0) {
			time = 75;
		}
		if (Manager.DifficultyLevel == 1) {
			time = 60;
		}
		if (Manager.DifficultyLevel == 2) {
			time = 50;
		}
		if (Manager.DifficultyLevel == 3) {
			time = 40;
		}

		if (ASource == null) {
			ASource = gameObject.AddComponent<AudioSource>();
		}

        if(anim == null){
            anim = gameObject.GetComponent<Animator>();
        }


			
	}

	void Update()
	{
		if (mGameOver == true || LifeValue.lifeValue == 0) {

			// Disable the screen behind. Don't show any object
			GameObject obj = GameObject.Find ("Goodies");
			obj.SetActive (false);

			//ads.ShowPromo ();
			bm.showBackMenu ();
		}

		// If 60 balloons are popped then you win the game
		if (Score.scoreValue == 60) {

			fw.showWinningScreen ();
			Timer.timeValue = "";
		}

		//this if check for the mouse left click
		if (Input.GetMouseButtonDown (0)) 
		{
            killObjectAndRestart ();

			GameObject bmb = GameObject.Find ("BombLitSprite");

			// remove the bomb and call isObjectExs to reset
			if (bmb != null) {
				bmb.SetActive (false);
				sg.isObjectExs();
			}

		}
	}

	void killObjectAndRestart(){
		
		RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);

		if (hit.collider != null && hit.collider.gameObject == gameObject) {
           	if (hit.collider.gameObject.name == "BombLitSprite") {
                LifeValue.lifeValue -= 1;
                StartCoroutine(PopBomb(hit));

                if (LifeValue.lifeValue == 0)
                {
                    mGameOver = true;
                }
                else
                {
                    crm.showChanceRemainScreen();
                }
             } 
			else {                
                StartCoroutine(PlayAndDestroy(hit));
				Score.scoreValue += 1;
                Manager.PremiumScore += 1;
			}
		}

	}

    IEnumerator PopBomb(RaycastHit2D hit)
    {
        Debug.Log("bomb is popping");
        anim.SetTrigger("blast");
        Debug.Log(anim.name);
        yield return new WaitForSeconds(0.5f);
        hit.collider.gameObject.SetActive(false);
        sg.isObjectExs();
    }

    IEnumerator PlayAndDestroy(RaycastHit2D hit){
        ASource.PlayOneShot(AClip);
        anim.SetTrigger("pop");
        yield return new WaitForSeconds(AClip.length);
        hit.collider.gameObject.SetActive(false);
        sg.isObjectExs();
    }
		
	void Count(){
		if (time == 0) {
			CancelInvoke ("Count");
		} else {
			time--;
		}
	}

	void OnGUI() {
		int minutes = Mathf.FloorToInt(time / 60F);
		int seconds = Mathf.FloorToInt(time - minutes * 60);
		string niceTime = string.Format("{0:00}:{1:00}", minutes, seconds);

		if (niceTime == "00:00" && Score.scoreValue <= 60) {
			mGameOver = true;
		}

		Timer.timeValue = niceTime.ToString ();
	}

	public int Time(){
		return time; 
	}

}
