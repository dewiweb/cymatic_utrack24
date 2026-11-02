// rea decompile_all
// name: FUN_004a4900
// address: 0x4a4900
// body: available
// range: 0x4a4900-0x4a49b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004a4900(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18 [4];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4a490c;
  local_18[1] = 0;
  FUN_004a8158(local_18);
  local_8 = 1;
  if (*(int *)(local_18[0] + 8) != 0) {
    iVar1 = FUN_005af82d(0x5c);
    local_8._0_1_ = 2;
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
      local_18[0] = iVar1;
    }
    else {
      puVar2 = (undefined4 *)(local_18[0] + 8);
      local_18[0] = iVar1;
      puVar2 = (undefined4 *)FUN_004a2b0f(iVar1,param_2,*puVar2);
    }
    if (puVar2[0xc] != 0) {
      *param_1 = (int)puVar2;
      LOCK();
      puVar2[1] = puVar2[1] + 1;
      UNLOCK();
      goto LAB_004a499d;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    (**(code **)*puVar2)(1);
  }
  local_18[0] = FUN_005af82d(0x94);
  local_8._0_1_ = 4;
  if (local_18[0] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004a40a4(local_18[0],param_2);
  }
  *param_1 = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
LAB_004a499d:
  local_18[1] = 1;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004a69ac();
  return param_1;
}

