// rea decompile_all
// name: FUN_004563f9
// address: 0x4563f9
// body: available
// range: 0x4563f9-0x45658d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004563f9(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uVar6;
  float local_30 [6];
  undefined1 *local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x456405;
  local_30[0] = 6.372539e-39;
  iVar1 = FUN_0044bfc5();
  local_30[0] = (float)(iVar1 + 0xb4);
  local_18 = (undefined1 *)local_30;
  FUN_004d076d();
  FUN_0047cda7();
  local_14 = *(float *)(in_ECX + 0x18);
  local_30[0] = 6.372604e-39;
  iVar1 = FUN_0044bfc5();
  local_30[0] = (float)*(int *)(iVar1 + 0x14);
  FUN_0047d535(0,0);
  local_30[0] = 6.372664e-39;
  iVar1 = FUN_0044bfc5();
  local_30[0] = (float)(iVar1 + 0xb8);
  FUN_004d076d();
  FUN_0047cda7();
  local_14 = *(float *)(in_ECX + 0x18);
  local_30[0] = 1.0;
  FUN_0044bfc5();
  FUN_0047d5bd(param_1,0,0,(float)(int)local_14);
  local_30[0] = 6.372794e-39;
  iVar1 = FUN_0044bfc5();
  iVar1 = *(int *)(iVar1 + 8);
  local_30[0] = 6.37281e-39;
  iVar2 = FUN_0044bfc5();
  local_14 = (float)*(int *)(iVar2 + 0xc);
  local_18 = *(undefined1 **)(in_ECX + 0x18);
  local_30[0] = 6.372838e-39;
  uVar3 = FUN_005b3fb0();
  local_30[0] = (float)(int)local_18;
  FUN_0047d84f(param_1);
  local_18 = (undefined1 *)local_30;
  FUN_004d076d();
  FUN_0047cda7();
  local_30[0] = (float)iVar1 * 0.7;
  FUN_0044bfc5();
  local_30[0] = (float)FUN_0049f81a();
  local_8 = 0;
  FUN_0047ceaa();
  local_8 = 0xffffffff;
  FUN_004c4d7a();
  uVar4 = FUN_005b3fb0(uVar3);
  uVar6 = 0;
  uVar5 = FUN_005b3fb0(0,uVar4);
  FUN_0047d02d(param_1,in_ECX + 4,uVar5,uVar6,uVar4,uVar3);
  return;
}

