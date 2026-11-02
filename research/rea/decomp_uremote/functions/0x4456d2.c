// rea decompile_all
// name: FUN_004456d2
// address: 0x4456d2
// body: available
// range: 0x4456d2-0x44594d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004456d2(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  undefined4 **local_2c [6];
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4456de;
  local_14[0] = local_2c;
  FUN_0046537e(local_2c);
  FUN_0044565e(2);
  param_1[0x26] = uTrack::StatusListener::vftable;
  param_1[0x27] = uTrack::MixerListener::vftable;
  param_1[0x28] = uTrack::MetersListener::vftable;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  *param_1 = DSPMixerPanel::vftable;
  param_1[0x26] = DSPMixerPanel::vftable;
  param_1[0x27] = DSPMixerPanel::vftable;
  param_1[0x28] = DSPMixerPanel::vftable;
  param_1[0x29] = in_ECX;
  param_1[0x2a] = *(undefined4 *)(in_ECX + 0x7c);
  local_2c[0] = (undefined4 **)(param_1 + 0x2b);
  FUN_0043d31e();
  local_2c[0] = (undefined4 **)(param_1 + 0x5a);
  local_8._0_1_ = 4;
  FUN_00440cef();
  local_2c[0] = (undefined4 **)(in_ECX + 0x605c);
  local_8._0_1_ = 5;
  FUN_004452b4(param_1 + 0x134,in_ECX,param_1 + 0x2b);
  local_8 = CONCAT31(local_8._1_3_,6);
  local_2c[0] = (undefined4 **)0x3f000000;
  puVar1 = param_1 + 0x1e;
  param_1[0x1ba] = 0xb;
  FUN_00478eaa(0x3e70a3d7,0x3e800000,0x3cf5c28f);
  local_2c[0] = (undefined4 **)0x3f000000;
  FUN_00478eaa(0x3ef851ec,0x3e800000,0x3cf5c28f);
  local_2c[0] = (undefined4 **)0x3f000000;
  FUN_00478eaa(0x3f3c28f6,0x3e800000,0x3cf5c28f);
  local_2c[0] = (undefined4 **)0x3df5c28f;
  FUN_00479464(puVar1,0x3e428f5c,0x3f30a3d7,0x3df5c28f);
  local_2c[0] = (undefined4 **)0x3df5c28f;
  FUN_00479464(puVar1,0x3ee147ae,0x3ee147ae,0x3df5c28f);
  local_2c[0] = (undefined4 **)0x3df5c28f;
  FUN_00479464(puVar1,0x3f30a3d7,0x3e428f5c,0x3df5c28f);
  local_2c[0] = (undefined4 **)0x3f4ccccd;
  FUN_00478a11(puVar1,0x3dcccccd,0x3dcccccd,0x3f4ccccd);
  local_2c[0] = (undefined4 **)0xffffffff;
  FUN_004c1064();
  local_2c[0] = (undefined4 **)(param_1 + 0x134);
  FUN_00440ea9();
  local_2c[0] = (undefined4 **)0xffffffff;
  FUN_004c1064();
  local_2c[0] = (undefined4 **)0x4458fc;
  FUN_0043e015();
  puVar1 = param_1 + 0x27;
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = *(int **)(param_1[0x2a] + 0x84);
    piVar2 = piVar3 + *(int *)(param_1[0x2a] + 0x8c);
    for (; local_14[0] = puVar1, piVar3 != piVar2; piVar3 = piVar3 + 1) {
      if (puVar1 == (undefined4 *)*piVar3) goto LAB_00445933;
    }
    local_2c[0] = local_14;
    FUN_00450daf();
  }
LAB_00445933:
  local_2c[0] = (undefined4 **)0x445944;
  FUN_0043e047();
  return param_1;
}

