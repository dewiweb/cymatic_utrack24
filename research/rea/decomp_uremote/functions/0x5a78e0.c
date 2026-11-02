// rea decompile_all
// name: FUN_005a78e0
// address: 0x5a78e0
// body: available
// range: 0x5a78e0-0x5a7bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005a797f) */
/* WARNING: Removing unreachable block (ram,0x005a79db) */

undefined4 *
FUN_005a78e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7aec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_6 != 0) {
    in_ECX[10] = &DAT_005f03ec;
    in_ECX[0x50] = &DAT_005efda0;
    in_ECX[0x53] = &DAT_005ea7d8;
    in_ECX[0x56] = &DAT_005ea7cc;
    in_ECX[0x4d] = CPNS::IObject::vftable;
    in_ECX[0x4f] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x50] + 4) + 0x140) =
         CPNS::IHookedObject::vftable;
    in_ECX[0x52] = CPNS::IBaseOutput::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x53] + 4) + 0x14c) = CPNS::IBaseOutput::vftable;
    local_8 = 2;
    FUN_005ab090(0);
    local_8 = 3;
  }
  FUN_00566590(3,param_1,param_2,param_3,param_4,param_5,0);
  *in_ECX = CPCHAI::COutput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::COutput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::COutput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::COutput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x28) = CPCHAI::COutput::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x10c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x114;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x120;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x24) = *(int *)(in_ECX[10] + 0x10) + -300;
  *(undefined2 *)(in_ECX + 0x45) = 0;
  in_ECX[0x44] = 0;
  *(undefined2 *)(in_ECX + 0x47) = 0;
  in_ECX[0x46] = 0;
  *(undefined2 *)(in_ECX + 0x48) = 0xffff;
  in_ECX[0x49] = 0;
  *(undefined1 *)(in_ECX + 0x4a) = 1;
  ExceptionList = local_10;
  return in_ECX;
}

