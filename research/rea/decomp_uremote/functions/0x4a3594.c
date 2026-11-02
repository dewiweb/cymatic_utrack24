// rea decompile_all
// name: FUN_004a3594
// address: 0x4a3594
// body: available
// range: 0x4a3594-0x4a36b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004a3594(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int local_1c;
  int *local_18;
  int *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4a35a0;
  iVar2 = *(int *)(in_ECX + 8);
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0x1c)) {
    do {
      local_1c = *(int *)(*(int *)(*(int *)(iVar2 + 0x14) + iVar4 * 4) + 8);
      if (local_1c != 0) {
        uVar1 = FUN_0049f7d4(0,&juce::Typeface::RTTI_Type_Descriptor,
                             &juce::WindowsDirectWriteTypeface::RTTI_Type_Descriptor,0);
        iVar2 = FUN_005cdbcf(uVar1);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x30) == *param_2)) {
          FUN_0049f81a(param_1,param_3);
          return param_1;
        }
      }
      iVar2 = *(int *)(in_ECX + 8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0x1c));
  }
  local_8 = 1;
  local_14[0] = (int *)0x0;
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x18))(*(int **)(in_ECX + 0xc),*param_2,local_14);
  local_8._0_1_ = 2;
  local_18 = (int *)0x0;
  (**(code **)(*local_14[0] + 0xc))(local_14[0],&local_18);
  uVar1 = FUN_004a28ea(&local_1c,local_14[0]);
  local_8._0_1_ = 3;
  uVar3 = FUN_004a289a(&param_2,local_18);
  local_8._0_1_ = 4;
  FUN_0049f5a2(uVar3,uVar1,param_3);
  FUN_004652d6();
  FUN_004652d6();
  local_8._0_1_ = 1;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_14[0] != (int *)0x0) {
    (**(code **)(*local_14[0] + 8))(local_14[0]);
  }
  return param_1;
}

