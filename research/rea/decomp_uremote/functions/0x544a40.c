// rea decompile_all
// name: FUN_00544a40
// address: 0x544a40
// body: available
// range: 0x544a40-0x544c1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00544ad0) */

undefined4 * FUN_00544a40(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2367;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[10] = &DAT_005ece38;
    in_ECX[0x49] = &DAT_005efda0;
    in_ECX[0x4a] = &PTR_005ece2c;
    in_ECX[0x46] = CPNS::IObject::vftable;
    in_ECX[0x48] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x49] + 4) + 0x124) =
         CPNS::IHookedObject::vftable;
    local_8 = 1;
    FUN_00544f10(0);
    local_8 = 2;
  }
  FUN_0054f350(0x8002,param_1,in_ECX,0);
  local_8 = 3;
  *in_ECX = CPCHAI::CDeviceEnumerationContext::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CDeviceEnumerationContext::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CDeviceEnumerationContext::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0xf0;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0xf8;
  FUN_005067b0(uVar1);
  local_8._0_1_ = 4;
  FUN_00507180();
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined1 *)(in_ECX + 0x12) = 1;
  FUN_005074c0(param_2);
  ExceptionList = local_10;
  return in_ECX;
}

