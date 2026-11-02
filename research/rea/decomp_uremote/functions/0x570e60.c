// rea decompile_all
// name: FUN_00570e60
// address: 0x570e60
// body: available
// range: 0x570e60-0x57118b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00570ef0) */
/* WARNING: Removing unreachable block (ram,0x00570f4d) */

undefined4 * FUN_00570e60(int param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4c59;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[10] = &DAT_005eeb5c;
    in_ECX[0x42] = &DAT_005efda0;
    in_ECX[0x45] = &DAT_005ea7d8;
    in_ECX[0x3f] = CPNS::IObject::vftable;
    in_ECX[0x41] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x42] + 4) + 0x108) =
         CPNS::IHookedObject::vftable;
    in_ECX[0x44] = CPNS::IPipe::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x45] + 4) + 0x114) = CPNS::IPipe::vftable;
    local_8 = 2;
  }
  FUN_0054f350(5,**(undefined4 **)(param_1 + 0x88),in_ECX,0);
  local_8 = 3;
  *in_ECX = CPCHAI::CPipe::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CPipe::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CPipe::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::CPipe::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0xd4;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0xdc;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0xe8;
  in_ECX[0x15] = param_1;
  *(undefined1 *)(in_ECX + 0x16) = param_2;
  FUN_00558e30(param_1 + 0xb4,**(int **)(param_1 + 0x88) + 0x9b8,0x20);
  local_8._0_1_ = 4;
  FUN_00559a70(param_1 + 0xac);
  *(undefined2 *)(in_ECX + 0x1f) = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  *(undefined2 *)(in_ECX + 0x25) = 0;
  in_ECX[0x24] = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00512300(uVar1);
  *(undefined2 *)(in_ECX + 0x3c) = 0xffff;
  *(undefined1 *)((int)in_ECX + 0xf2) = 0;
  *(undefined1 *)(in_ECX + 0x3d) = 0;
  *(undefined1 *)((int)in_ECX + 0xf5) = 0;
  *(undefined1 *)((int)in_ECX + 0xf3) = 1;
  ExceptionList = local_10;
  return in_ECX;
}

