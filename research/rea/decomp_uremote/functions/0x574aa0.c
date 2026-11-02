// rea decompile_all
// name: FUN_00574aa0
// address: 0x574aa0
// body: available
// range: 0x574aa0-0x574e36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00574b30) */
/* WARNING: Removing unreachable block (ram,0x00574b8d) */

undefined4 * FUN_00574aa0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4e53;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    in_ECX[10] = &DAT_005eed0c;
    in_ECX[0x4a] = &DAT_005efda0;
    in_ECX[0x4d] = &DAT_005ea7d8;
    in_ECX[0x47] = CPNS::IObject::vftable;
    in_ECX[0x49] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x4a] + 4) + 0x128) =
         CPNS::IHookedObject::vftable;
    in_ECX[0x4c] = CPNS::IInput::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x4d] + 4) + 0x134) = CPNS::IInput::vftable;
    local_8 = 2;
  }
  FUN_0054f350(4,**(undefined4 **)(param_1 + 0x88),in_ECX,0);
  *in_ECX = CPCHAI::CInput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CInput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CInput::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::CInput::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0xf4;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0xfc;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x108;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  in_ECX[0x12] = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  in_ECX[0x14] = 0;
  *(undefined2 *)(in_ECX + 0x17) = 0;
  in_ECX[0x16] = 0;
  *(undefined2 *)(in_ECX + 0x19) = 0;
  in_ECX[0x18] = 0;
  local_8._1_3_ = 0;
  in_ECX[0x1a] = param_1;
  in_ECX[0x1b] = 0;
  local_8._0_1_ = 8;
  in_ECX[0x1c] = 0;
  FUN_00559a70(param_1 + 0xac);
  local_8._0_1_ = 9;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  *(undefined2 *)(in_ECX + 0x22) = 0;
  FUN_005017d0(uVar1);
  local_8._0_1_ = 10;
  *(undefined2 *)(in_ECX + 0x26) = 0xffff;
  *(undefined2 *)((int)in_ECX + 0x9a) = 0x8000;
  *(undefined1 *)(in_ECX + 0x27) = 1;
  *(undefined1 *)((int)in_ECX + 0x9d) = 0;
  *(undefined1 *)((int)in_ECX + 0x9e) = 0;
  FUN_00512300();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_00503bc0();
  FUN_00503de0(&DAT_0095c854);
  ExceptionList = local_10;
  return in_ECX;
}

