// rea decompile_all
// name: FUN_0049fc0c
// address: 0x49fc0c
// body: available
// range: 0x49fc0c-0x49fd28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0049fc0c(undefined4 param_1,undefined4 param_2)

{
  char **ppcVar1;
  undefined4 uVar2;
  float10 fVar3;
  char **local_40 [6];
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 *local_18;
  char *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x49fc18;
  local_24 = 0;
  local_40[0] = (char **)0x3b;
  ppcVar1 = (char **)thunk_FUN_00460947();
  local_40[0] = (char **)0x49fc30;
  FUN_004652cd();
  local_8 = 0;
  if (0 < (int)ppcVar1) {
    local_40[0] = ppcVar1;
    uVar2 = FUN_0046642b(param_2,&local_24);
    local_40[0] = (char **)&local_18;
    local_8._0_1_ = 1;
    FUN_00466678(uVar2);
    local_40[0] = local_14;
    FUN_00465317();
    local_40[0] = (char **)0x49fc68;
    FUN_004652d6();
    local_8 = (uint)local_8._1_3_ << 8;
    local_40[0] = (char **)0x49fc74;
    FUN_004652d6();
  }
  if (*local_14[0] == '\0') {
    local_40[0] = (char **)0x49fc81;
    thunk_FUN_0049f6e8();
    local_40[0] = local_14;
    FUN_00465317();
  }
  local_40[0] = (char **)((int)ppcVar1 + 1);
  FUN_004664c4();
  local_8._0_1_ = 2;
  local_40[0] = (char **)0x49fca7;
  FUN_0046670a();
  local_8._0_1_ = 4;
  local_40[0] = (char **)0x49fcb3;
  FUN_004652d6();
  local_40[0] = (char **)0x49fcbb;
  fVar3 = (float10)FUN_00466960();
  local_18 = (undefined4 *)(float)fVar3;
  if ((float)local_18 <= 0.0) {
    local_18 = (char **)0x41200000;
  }
  local_28 = (undefined1 *)local_40;
  FUN_004c751a();
  FUN_00466519(local_1c);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_40[0] = (char **)local_18;
  FUN_0049f5a2(local_14,local_20);
  local_40[0] = (char **)0x49fd11;
  FUN_004652d6();
  local_40[0] = (char **)0x49fd19;
  FUN_004652d6();
  local_40[0] = (char **)0x49fd21;
  FUN_004652d6();
  return param_1;
}

