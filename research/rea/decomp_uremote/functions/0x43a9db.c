// rea decompile_all
// name: FUN_0043a9db
// address: 0x43a9db
// body: available
// range: 0x43a9db-0x43ab1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0043a9db(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 **extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar1;
  float10 fVar2;
  undefined4 uStack_48;
  undefined1 **ppuStack_44;
  undefined1 *local_40 [5];
  undefined1 local_2c [8];
  int local_24;
  undefined1 *local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x43a9e7;
  iVar1 = 0;
  local_20 = (undefined1 *)0x0;
  local_40[0] = (undefined1 *)0x43a9f4;
  FUN_0040954d();
  local_20 = (undefined1 *)local_40;
  local_8 = 0;
  ppuStack_44 = (undefined1 **)0x43aa07;
  FUN_004d076d();
  local_20 = (undefined1 *)&ppuStack_44;
  uStack_48 = 0x43aa17;
  ppuStack_44 = extraout_ECX;
  FUN_004c751a();
  local_20 = (undefined1 *)&uStack_48;
  uStack_48 = extraout_ECX_00;
  FUN_004d076d();
  FUN_00467248(local_2c);
  if (local_24 == 0) {
    local_40[0] = (undefined1 *)0x43ab0c;
    FUN_0049f50b();
  }
  else {
    ppuStack_44 = (undefined1 **)&local_18;
    local_40[0] = (undefined1 *)((float)param_4 / (float)local_24);
    uStack_48 = 0x43aa53;
    local_20 = local_40[0];
    FUN_0049f81a();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 0.0;
    if (0 < local_24) {
      do {
        local_40[0] = (undefined1 *)0x43aa6b;
        local_40[0] = (undefined1 *)FUN_00467165();
        ppuStack_44 = (undefined1 **)0x43aa74;
        fVar2 = (float10)FUN_0049fa7b();
        local_14 = (float)fVar2;
        if (local_1c < local_14) {
          local_1c = local_14;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_24);
    }
    local_40[0] = (undefined1 *)0x43aaa0;
    local_14 = (float)FUN_005b3fb0();
    local_40[0] = (undefined1 *)0x43aaab;
    iVar1 = FUN_005b3fb0();
    while ((4 < (int)local_14 && (param_3 < iVar1))) {
      local_40[0] = (undefined1 *)(float)(int)local_14;
      ppuStack_44 = &local_20;
      uStack_48 = 0x43aac5;
      FUN_0049f81a();
      local_40[0] = (undefined1 *)0x43aacd;
      FUN_0049f5e8();
      local_40[0] = (undefined1 *)0x43aad5;
      FUN_004c4d7a();
      local_40[0] = param_1;
      ppuStack_44 = (undefined1 **)0x43aae0;
      iVar1 = FUN_0049fa60();
      if (param_3 < iVar1) {
        local_14 = (float)((int)local_14 + -1);
      }
    }
    local_40[0] = (undefined1 *)0x43aaf8;
    FUN_0049f50b();
    local_40[0] = (undefined1 *)0x43ab00;
    FUN_004c4d7a();
  }
  local_40[0] = (undefined1 *)0x43ab14;
  FUN_004670ed();
  return;
}

