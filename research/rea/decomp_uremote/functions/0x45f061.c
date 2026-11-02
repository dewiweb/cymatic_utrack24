// rea decompile_all
// name: FUN_0045f061
// address: 0x45f061
// body: available
// range: 0x45f061-0x45f170 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Type propagation algorithm not settling */

uint FUN_0045f061(uint param_1)

{
  int unaff_ESI;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  uint *puStack_58;
  uint auStack_54 [2];
  undefined *puStack_4c;
  undefined4 local_38;
  undefined *local_2c;
  uint *local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x45f06d;
  local_38 = 0;
  if (*(int *)(unaff_ESI + 0x1d8) == 0) {
    puStack_4c = &DAT_0095d718;
    auStack_54[1] = 0x45f087;
    FUN_004652e4();
  }
  else {
    puStack_4c = (undefined *)(uint)*(byte *)(unaff_ESI + 0x1db);
    auStack_54[1] = 0x45f09c;
    puStack_4c = (undefined *)FUN_00465858();
    local_8 = 0;
    local_28 = auStack_54 + 1;
    auStack_54[0] = (uint)*(byte *)(unaff_ESI + 0x1da);
    local_2c = &DAT_00916bd4;
    puStack_58 = (uint *)0x45f0c2;
    puStack_58 = (uint *)FUN_00465858();
    puStack_5c = (undefined1 *)auStack_54;
    local_24 = (undefined1 *)auStack_54;
    local_8._0_1_ = 1;
    puStack_60 = (undefined1 *)(uint)*(byte *)(unaff_ESI + 0x1d9);
    local_20 = &DAT_00916bd4;
    puStack_64 = (undefined1 *)0x45f0e9;
    puStack_64 = (undefined1 *)FUN_00465858();
    puStack_68 = (undefined1 *)&puStack_60;
    local_1c = (undefined1 *)&puStack_60;
    local_14 = (undefined1 *)&puStack_68;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_18 = &DAT_00916bd4;
    FUN_00465858(*(undefined1 *)(unaff_ESI + 0x1d8));
    FUN_00465c6b(local_14);
    FUN_00465c30();
    puStack_68 = (undefined1 *)0x45f132;
    puStack_64 = (undefined1 *)&puStack_5c;
    FUN_00465c6b();
    puStack_60 = local_24;
    puStack_64 = (undefined1 *)0x45f13b;
    FUN_00465c30();
    puStack_58 = local_28;
    puStack_5c = (undefined1 *)0x45f146;
    FUN_00465c6b();
    auStack_54[0] = param_1;
    puStack_58 = (uint *)0x45f14e;
    FUN_00465c30();
    puStack_4c = (undefined *)0x45f156;
    FUN_004652d6();
    puStack_4c = (undefined *)0x45f15e;
    FUN_004652d6();
    puStack_4c = (undefined *)0x45f166;
    FUN_004652d6();
  }
  return param_1;
}

