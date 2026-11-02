// rea decompile_all
// name: FUN_004c2958
// address: 0x4c2958
// body: available
// range: 0x4c2958-0x4c2a50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c2958(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 *extraout_ECX;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined1 auStack_9c [8];
  undefined4 uStack_94;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  code *pcStack_78;
  undefined1 *puStack_74;
  undefined1 local_60 [68];
  undefined1 *local_1c;
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x4c2964;
  puStack_74 = (undefined1 *)0x4c296b;
  uVar2 = FUN_004c4e62();
  puStack_74 = (undefined1 *)0x4c2974;
  cVar1 = FUN_004c14d9();
  if (cVar1 == '\0') {
    puStack_74 = (undefined1 *)0x4c298b;
    FUN_004c3456();
    puStack_74 = (undefined1 *)0x0;
    pcStack_78 = (code *)0x0;
    local_1c = (undefined1 *)&puStack_80;
    local_8 = 0;
    local_84 = 0x4c29a1;
    puStack_80 = extraout_ECX;
    puStack_7c = extraout_ECX;
    FUN_00467e6f();
    local_88 = param_2;
    local_1c = auStack_90;
    local_84 = param_3;
    uStack_94 = 0x4c29c2;
    FUN_00467e6f();
    local_1c = auStack_9c;
    local_a0 = auStack_9c;
    local_a4 = 0x4c29d3;
    FUN_004c4937();
    local_a4 = param_2;
    local_1c = auStack_a8;
    local_a0 = (undefined1 *)param_3;
    FUN_004d076d();
    FUN_004c6ba4();
    pcStack_78 = (code *)0x4c2a05;
    puStack_74 = local_60;
    (**(code **)(*in_ECX + 4))();
    puStack_74 = (undefined1 *)0x4c2a0d;
    cVar1 = FUN_004c3462();
    if (cVar1 == '\0') {
      pcStack_78 = FUN_004f9b3e;
      puStack_7c = local_18;
      local_84 = 0x4c2a26;
      puStack_74 = local_60;
      FUN_004c519d();
      puStack_80 = (undefined1 *)0x4c2a2e;
      FUN_004f8791();
      puStack_74 = local_60;
      puStack_7c = local_18;
      pcStack_78 = FUN_004f9b3e;
      puStack_80 = (undefined1 *)0x4c2a3e;
      FUN_004bf7fe();
    }
    puStack_74 = (undefined1 *)0x4c2a49;
    FUN_00474d0f();
  }
  else {
    pcStack_78 = (code *)0x4c297e;
    puStack_74 = (undefined1 *)uVar2;
    FUN_004c523f();
  }
  return;
}

