// rea decompile_all
// name: FUN_00566590
// address: 0x566590
// body: available
// range: 0x566590-0x566967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00566620) */
/* WARNING: Removing unreachable block (ram,0x0056667d) */

undefined4 *
FUN_00566590(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
            ,undefined4 *param_6,int param_7)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d44e6;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_7 != 0) {
    in_ECX[10] = &DAT_005ee8e4;
    in_ECX[0x48] = &DAT_005efda0;
    in_ECX[0x4b] = &DAT_005ea7d8;
    in_ECX[0x45] = CPNS::IObject::vftable;
    in_ECX[0x47] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x48] + 4) + 0x120) =
         CPNS::IHookedObject::vftable;
    in_ECX[0x4a] = CPNS::IBaseOutput::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x4b] + 4) + 300) = CPNS::IBaseOutput::vftable;
    local_8 = 2;
  }
  FUN_0054f350(param_1,**(undefined4 **)(param_2 + 0x88),in_ECX,0);
  local_8 = 3;
  *in_ECX = CPCHAI::CBaseOutput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CBaseOutput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CBaseOutput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::CBaseOutput::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0xec;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0xf4;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x100;
  FUN_00558e30(param_2 + 0xb4,**(int **)(param_2 + 0x88) + 0x9b8,0x20);
  local_8._0_1_ = 4;
  FUN_00558e30(param_2 + 0xb4,**(int **)(param_2 + 0x88) + 0x9b8,4);
  local_8._0_1_ = 5;
  in_ECX[0x1c] = param_4;
  in_ECX[0x1d] = param_2;
  FUN_00501870(param_3);
  local_8 = CONCAT31(local_8._1_3_,6);
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  FUN_00512300(uVar1);
  in_ECX[0x3a] = *param_6;
  in_ECX[0x3b] = param_6[1];
  in_ECX[0x3c] = param_6[2];
  in_ECX[0x3d] = param_6[3];
  *(undefined2 *)(in_ECX + 0x3e) = 0;
  *(undefined2 *)((int)in_ECX + 0xfa) = param_5;
  *(undefined1 *)(in_ECX + 0x3f) = 0;
  *(undefined1 *)((int)in_ECX + 0xfd) = 0;
  *(undefined1 *)((int)in_ECX + 0xfe) = 0;
  *(byte *)((int)in_ECX + 0xfe) = *(byte *)((int)in_ECX + 0xfe) | 1;
  *(byte *)((int)in_ECX + 0xfe) = *(byte *)((int)in_ECX + 0xfe) & 0xfd;
  *(byte *)((int)in_ECX + 0xfe) = *(byte *)((int)in_ECX + 0xfe) | 4;
  *(byte *)((int)in_ECX + 0xfe) = *(byte *)((int)in_ECX + 0xfe) & 0xf7;
  *(byte *)((int)in_ECX + 0xfe) = *(byte *)((int)in_ECX + 0xfe) | 0x20;
  *(byte *)((int)in_ECX + 0xfe) = *(byte *)((int)in_ECX + 0xfe) & 0xef;
  ExceptionList = local_10;
  return in_ECX;
}

