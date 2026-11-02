// rea decompile_all
// name: FUN_004c23c1
// address: 0x4c23c1
// body: available
// range: 0x4c23c1-0x4c24ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c23c1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *in_ECX;
  code *extraout_ECX;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined1 auStack_9c [8];
  undefined4 uStack_94;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  code *pcStack_80;
  code *pcStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined1 local_60 [68];
  undefined1 *local_1c;
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x4c23cd;
  if ((*(byte *)((int)in_ECX + 0x69) & 8) != 0) {
    puStack_78 = (undefined1 *)0x4c23db;
    FUN_004c1613();
  }
  puStack_74 = (undefined1 *)0x4c23e3;
  FUN_004c3456();
  puStack_74 = (undefined1 *)0x0;
  puStack_78 = (undefined1 *)0x0;
  local_1c = (undefined1 *)&pcStack_80;
  local_8 = 0;
  local_84 = 0x4c23f9;
  pcStack_80 = extraout_ECX;
  pcStack_7c = extraout_ECX;
  FUN_00467e6f();
  local_88 = param_2;
  local_1c = auStack_90;
  local_84 = param_3;
  uStack_94 = 0x4c241a;
  FUN_00467e6f();
  local_1c = auStack_9c;
  local_a0 = auStack_9c;
  local_a4 = 0x4c242b;
  FUN_004c4937();
  local_a4 = param_2;
  local_1c = auStack_a8;
  local_a0 = (undefined1 *)param_3;
  FUN_004d076d();
  FUN_004c6ba4();
  puStack_78 = (undefined1 *)0x4c245d;
  puStack_74 = local_60;
  (**(code **)(*in_ECX + 0xc))();
  puStack_78 = (undefined1 *)0x4c2465;
  cVar1 = FUN_004c3462();
  if (cVar1 == '\0') {
    pcStack_7c = FUN_004f9d5b;
    pcStack_80 = (code *)local_18;
    local_88 = 0x4c247c;
    puStack_78 = local_60;
    FUN_004c4e62();
    local_88 = 0x4c2481;
    FUN_004c519d();
    local_84 = 0x4c2489;
    FUN_004f8791();
    puStack_78 = local_60;
    pcStack_80 = (code *)local_18;
    pcStack_7c = FUN_004f9d5b;
    local_84 = 0x4c2499;
    FUN_004bf7fe();
  }
  puStack_78 = (undefined1 *)0x4c24a4;
  FUN_00474d0f();
  return;
}

