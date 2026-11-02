// rea decompile_all
// name: FUN_0049e590
// address: 0x49e590
// body: available
// range: 0x49e590-0x49e6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

float10 FUN_0049e590(undefined4 param_1,undefined4 param_2,char param_3)

{
  void *_Memory;
  char cVar1;
  undefined4 extraout_ECX;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  float local_44;
  float local_3c;
  undefined1 local_38 [8];
  int local_30;
  void *local_2c;
  undefined4 local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x49e59c;
  FUN_0049fe5a(local_38);
  local_8 = 0;
  FUN_0046537e(&local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0049fec9(param_1,0,0);
  FUN_004652d6();
  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  iVar2 = 0;
  if (0 < local_30) {
    do {
      FUN_0047888f();
      local_8 = CONCAT31(local_8._1_3_,3);
      uVar4 = extraout_ECX;
      FUN_0049feb2(extraout_ECX);
      FUN_0049fda7(uVar4);
      FUN_00478ad2();
      cVar1 = FUN_00478a60();
      if (cVar1 == '\0') {
        local_18 = local_44;
        if (param_3 == '\0') {
          local_18 = local_3c + local_44;
        }
        FUN_004a91e9(local_18);
      }
      FUN_004f7994();
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_30);
  }
  _Memory = local_2c;
  if ((uint)((int)local_24 / 2) < local_24) {
    local_1c = *(float *)((int)local_2c + ((int)local_24 / 2) * 4);
  }
  else {
    local_1c = 0.0;
  }
  iVar2 = 0;
  local_18 = 0.0;
  local_14 = 0;
  if (0 < (int)local_24) {
    do {
      local_20 = local_1c - *(float *)((int)_Memory + iVar2 * 4);
      fVar3 = (float10)FUN_00474d74(local_20);
      if (fVar3 < (float10)5.0) {
        local_14 = local_14 + 1;
        local_18 = *(float *)((int)_Memory + iVar2 * 4) + local_18;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_24);
    if (3 < local_14) {
      local_20 = local_18 / ((float)local_14 * 100.0);
      goto LAB_0049e6d6;
    }
  }
  local_20 = 0.0;
LAB_0049e6d6:
  local_8 = local_8 & 0xffffff00;
  _free(_Memory);
  FUN_0049fea0();
  return (float10)local_20;
}

