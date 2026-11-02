// rea decompile_all
// name: FUN_004c2a51
// address: 0x4c2a51
// body: available
// range: 0x4c2a51-0x4c2b58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c2a51(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined1 auStack_a4 [4];
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 auStack_8c [8];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined1 local_5c [68];
  undefined1 *local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x4c2a5d;
  uStack_70 = 0x4c2a64;
  FUN_004c4e62();
  uStack_70 = 0x4c2a6e;
  FUN_004c3456();
  uStack_70 = 0;
  puStack_74 = (undefined1 *)0x0;
  local_18 = (undefined1 *)&uStack_7c;
  local_8 = 0;
  local_80 = 0x4c2a84;
  uStack_7c = extraout_ECX;
  FUN_00467e6f();
  local_84 = param_3;
  local_18 = auStack_8c;
  local_80 = param_4;
  uStack_90 = 0x4c2aa5;
  FUN_00467e6f();
  local_18 = auStack_98;
  local_9c = auStack_98;
  local_a0 = 0x4c2ab6;
  FUN_004c4937();
  local_a0 = param_3;
  local_18 = auStack_a4;
  local_9c = (undefined1 *)param_4;
  FUN_004d076d();
  FUN_004c6ba4();
  uStack_70 = 0x4c2ae5;
  cVar1 = FUN_004c14d9();
  uStack_70 = param_2;
  if (cVar1 == '\0') {
    puStack_74 = local_5c;
    puStack_78 = (undefined1 *)0x4c2b09;
    (**(code **)(*in_ECX + 0x20))();
    uStack_70 = 0x4c2b11;
    cVar1 = FUN_004c3462();
    if (cVar1 == '\0') {
      uStack_70 = param_2;
      puStack_74 = local_5c;
      puStack_78 = local_14;
      uStack_7c = 0x4c2b28;
      FUN_004f87d3();
      uStack_70 = 0x4c2b30;
      cVar1 = FUN_004c3462();
      if (cVar1 == '\0') {
        uStack_70 = param_2;
        puStack_74 = local_5c;
        puStack_78 = local_14;
        uStack_7c = 0x4c2b46;
        FUN_004bf909();
      }
    }
  }
  else {
    puStack_74 = local_5c;
    puStack_78 = local_14;
    uStack_7c = 0x4c2afc;
    FUN_004f87d3();
  }
  uStack_70 = 0x4c2b51;
  FUN_00474d0f();
  return;
}

