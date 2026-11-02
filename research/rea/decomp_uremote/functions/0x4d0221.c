// rea decompile_all
// name: FUN_004d0221
// address: 0x4d0221
// body: available
// range: 0x4d0221-0x4d0388 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004d0221(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_48 [16];
  void *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x4d022d;
  iVar2 = FUN_004c121d();
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_8 = 0;
  FUN_0046ea7f();
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0046ea7f();
  local_14 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_004c1221();
      FUN_0046ea7f();
      iVar1 = local_24 + 1;
      local_14 = local_14 + 1;
      *(undefined4 *)(local_2c + local_24 * 4) = uVar3;
      local_24 = iVar1;
    } while (local_14 < iVar2);
  }
  local_20 = FUN_004723d5();
  local_14 = 0;
  if (0 < local_20) {
    do {
      FUN_004723e0(local_48,local_14);
      local_8._0_1_ = 2;
      uVar3 = FUN_004cfe60(local_1c);
      local_8._0_1_ = 3;
      local_18 = FUN_004cfe7f(uVar3);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004652d6();
      if ((local_18 != 0) ||
         ((iVar2 = FUN_004d0176(local_48), iVar2 != 0 &&
          (local_18 = FUN_004cfeed(local_48,param_2), local_18 != 0)))) {
        FUN_0043e86a(&local_18);
      }
      FUN_004722b6();
      local_14 = local_14 + 1;
    } while (local_14 < local_20);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004432c6(&local_2c);
  _Memory = local_38;
  if (0 < local_30) {
    FUN_004c052f(0);
    for (iVar2 = local_30 + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
      FUN_004c05e8(*(undefined4 *)((int)_Memory + iVar2 * 4 + 4));
    }
  }
  local_8 = 0xffffffff;
  _free(_Memory);
  return;
}

