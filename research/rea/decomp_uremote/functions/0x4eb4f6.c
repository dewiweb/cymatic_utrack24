// rea decompile_all
// name: FUN_004eb4f6
// address: 0x4eb4f6
// body: available
// range: 0x4eb4f6-0x4eb62c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

byte FUN_004eb4f6(int *param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  int iStack_3c;
  undefined4 *puStack_38;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4eb502;
  puStack_38 = (undefined4 *)0x4eb50c;
  local_14 = in_ECX;
  cVar3 = FUN_004e97f3();
  piVar2 = param_1;
  if (cVar3 != '\0') {
    puStack_38 = (undefined4 *)0x0;
    param_1 = &iStack_3c;
    FUN_004c751a();
    FUN_004c71a0();
    puStack_38 = (undefined4 *)0x4eb534;
    cVar3 = FUN_004c7268();
    if (cVar3 != '\0') {
      return 0;
    }
  }
  iStack_3c = 0x4eb547;
  cVar3 = FUN_004f70a7();
  if (cVar3 == '\0') {
    puStack_38 = (undefined4 *)0xd;
    iStack_3c = 0x4eb559;
    cVar3 = FUN_004c7203();
    if (cVar3 == '\0') {
      if (*piVar2 == 0x1b) {
        puStack_38 = (undefined4 *)0x4eb5ba;
        FUN_004e9764();
        puStack_38 = (undefined4 *)0x0;
        iStack_3c = 0x4eb5c2;
        iStack_3c = FUN_004ee9f3();
        FUN_004ea237();
        puStack_38 = (undefined4 *)0x4eb5d4;
        (**(code **)(*in_ECX + 0xbc))();
        goto LAB_004eb5a1;
      }
      uVar1 = piVar2[2];
      if ((uVar1 < 0x20) && (((*(byte *)((int)in_ECX + 0x95) & 2) == 0 || (uVar1 != 9)))) {
        return 0;
      }
      puStack_38 = (undefined4 *)0x4eb5fe;
      puStack_38 = (undefined4 *)FUN_00465544();
      local_8 = 1;
      iStack_3c = 0x4eb611;
      (**(code **)(local_14[0x1c] + 0x18))();
      puStack_38 = (undefined4 *)0x4eb618;
      FUN_004652d6();
      puStack_38 = (undefined4 *)0x4eb61d;
      iVar4 = FUN_00467ee3();
      local_14[0x3b] = iVar4;
    }
    else {
      puStack_38 = (undefined4 *)0x4eb564;
      FUN_004e9764();
      if ((*(byte *)(in_ECX + 0x25) & 8) == 0) {
        puStack_38 = (undefined4 *)0x4eb5a1;
        (**(code **)(*in_ECX + 0xb8))();
LAB_004eb5a1:
        return *(byte *)((int)in_ECX + 0x95) >> 4 & 1;
      }
      puStack_38 = &param_1;
      iStack_3c = 0x4eb57b;
      FUN_0046537e();
      puStack_38 = &param_1;
      local_8 = 0;
      iStack_3c = 0x4eb58a;
      (**(code **)(in_ECX[0x1c] + 0x18))();
      puStack_38 = (undefined4 *)0x4eb592;
      FUN_004652d6();
    }
  }
  return 1;
}

