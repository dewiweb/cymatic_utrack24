// rea decompile_all
// name: FUN_004cf408
// address: 0x4cf408
// body: available
// range: 0x4cf408-0x4cf54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004cf408(undefined4 *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  uint local_4c;
  undefined1 *local_48;
  undefined1 local_34 [8];
  undefined1 local_2c [16];
  undefined4 *local_1c;
  undefined1 *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4cf414;
  local_48 = (undefined1 *)0x4cf41e;
  FUN_004bfd7b();
  local_8 = 0;
  local_1c = param_1 + 0x1c;
  *param_1 = juce::ComponentAnimator::AnimationTask::ProxyComponent::vftable;
  local_48 = (undefined1 *)0x4cf433;
  FUN_004c6ae2();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_48 = (undefined1 *)0x4cf440;
  FUN_004c2ddc();
  local_48 = (undefined1 *)0x4cf44b;
  FUN_004c0c1f();
  local_48 = local_34;
  local_4c = 0x4cf456;
  FUN_004c0d8f();
  local_48 = (undefined1 *)0x4cf45d;
  FUN_004c0cff();
  local_48 = (undefined1 *)0x4cf464;
  fVar5 = (float10)FUN_004c1582();
  local_48 = (undefined1 *)(float)fVar5;
  local_4c = 0x4cf46d;
  FUN_004c15a5();
  local_48 = (undefined1 *)0x0;
  local_4c = 0x4cf478;
  FUN_004c0e0e();
  if (*(int *)(param_2 + 0xc) == 0) {
    local_48 = (undefined1 *)0x4cf493;
    cVar1 = FUN_004c044d();
    if (cVar1 != '\0') {
      local_48 = (undefined1 *)0x4cf49e;
      iVar3 = FUN_004c0453();
      if (iVar3 != 0) {
        local_48 = (undefined1 *)0x4cf4a9;
        iVar3 = FUN_004c0453();
        local_48 = (undefined1 *)0x0;
        local_4c = *(uint *)(iVar3 + 8) | 0x400;
        FUN_004c01b6();
      }
    }
  }
  else {
    local_48 = (undefined1 *)0xffffffff;
    local_4c = 0x4cf48a;
    FUN_004c1064();
  }
  local_18[0] = (undefined1 *)&local_4c;
  piVar2 = (int *)FUN_004c0848(param_1,local_2c);
  local_4c = piVar2[2] / 2 + *piVar2;
  local_48 = (undefined1 *)(piVar2[3] / 2 + piVar2[1]);
  FUN_004c4e62();
  iVar3 = FUN_004c53da();
  local_48 = (undefined1 *)(float)*(double *)(iVar3 + 0x20);
  local_4c = 0;
  local_18[0] = local_48;
  uVar4 = FUN_004c2047(local_2c);
  FUN_004c1bc3(param_2,local_18,uVar4);
  local_48 = (undefined1 *)0x4cf527;
  FUN_0049f5e8();
  local_48 = (undefined1 *)0x4cf52f;
  FUN_004c4d7a();
  local_48 = (undefined1 *)0x1;
  local_4c = 0x4cf538;
  FUN_004c0040();
  local_48 = (undefined1 *)param_2;
  local_4c = 0x4cf542;
  FUN_004c05e8();
  return param_1;
}

