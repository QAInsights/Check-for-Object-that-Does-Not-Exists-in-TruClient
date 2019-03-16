//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://www.w3schools.c...me=G269FJAU8S54'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Run » button", "snapshot=Action_2.inf");
	truclient_step("3", "Wait until Loader does not exist", "snapshot=Action_3.inf");
	truclient_step("4", "Verify Some text in my newly... 's Visible Text contains Some text in my newly loaded page..", "snapshot=Action_4.inf");

	return 0;
}
