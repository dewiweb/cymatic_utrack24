// rea decompile_all
// name: FUN_0047dd0c
// address: 0x47dd0c
// body: available
// range: 0x47dd0c-0x47de36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0047dd0c(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int local_50 [2];
  size_t local_48;
  int local_3c;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int *local_18;
  uint local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x47dd18;
  local_14 = 0;
  piVar2 = local_18;
  if ((int *)*param_2 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)*param_2 + 0xc))();
    local_8 = 1;
    local_14 = 1;
    local_18 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 8))();
    iVar4 = (**(code **)(*in_ECX + 8))();
    if (iVar4 != iVar3) {
      bVar1 = false;
      goto LAB_0047dd57;
    }
  }
  bVar1 = true;
LAB_0047dd57:
  local_8 = 0;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, piVar2 != (int *)0x0)) {
    (**(code **)*piVar2)(1);
  }
  if (bVar1) {
    param_1 = FUN_0049f50b();
  }
  else {
    FUN_0047e7d7(&local_34,0);
    local_8 = 2;
    (**(code **)(*in_ECX + 4))(&local_18,local_30,local_24,local_20,0);
    FUN_0047e2f2();
    local_8._0_1_ = 3;
    FUN_00474d0f();
    FUN_0047e7d7(local_50,1);
    iVar3 = 0;
    local_8._0_1_ = 4;
    if (0 < local_3c) {
      do {
        _memcpy((void *)(local_48 * iVar3 + local_50[0]),(void *)(local_2c * iVar3 + local_34),
                local_48);
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_3c);
    }
    FUN_0049f50b();
    local_14 = local_14 | 2;
    local_8._0_1_ = 3;
    FUN_0047e819();
    FUN_004c4d7a();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0047e819();
  }
  return param_1;
}

