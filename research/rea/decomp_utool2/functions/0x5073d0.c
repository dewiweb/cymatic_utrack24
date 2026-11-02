// rea decompile_all
// name: FUN_005073d0
// address: 0x5073d0
// body: available
// range: 0x5073d0-0x50771d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005075d7) */
/* WARNING: Removing unreachable block (ram,0x005075e3) */
/* WARNING: Removing unreachable block (ram,0x005074b0) */
/* WARNING: Removing unreachable block (ram,0x005074bb) */
/* WARNING: Removing unreachable block (ram,0x00507515) */
/* WARNING: Removing unreachable block (ram,0x00507521) */
/* WARNING: Removing unreachable block (ram,0x00507669) */
/* WARNING: Removing unreachable block (ram,0x00507673) */

void FUN_005073d0(undefined4 *param_1,int *param_2,int *param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6,char param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707ffb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = PushButton::Listener::vftable;
  in_ECX[0x1d] = juce::Label::Listener::vftable;
  in_ECX[0x1e] = param_6;
  *in_ECX = FileSelector::vftable;
  in_ECX[0x1c] = FileSelector::vftable;
  in_ECX[0x1d] = FileSelector::vftable;
  iVar1 = *param_2;
  in_ECX[0x1f] = iVar1;
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  in_ECX[0x20] = &DAT_00bfe12c;
  iVar1 = *param_3;
  in_ECX[0x21] = iVar1;
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined1 *)(in_ECX + 0x22) = param_4;
  in_ECX[0x23] = param_5;
  local_8 = 7;
  FUN_006e8b40();
  local_8._0_1_ = 10;
  FUN_004f83b0();
  local_8._0_1_ = 0xb;
  FUN_004f83b0();
  local_8._0_1_ = 0xe;
  FUN_006e8b40();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  if (*(char *)*param_1 != '\0') {
    FUN_006e4900();
    if (in_ECX[0x4b] != 0x22) {
      in_ECX[0x4b] = 0x22;
      FUN_006e6400(&stack0xffffffcc);
      FUN_006ce9f0(1);
    }
    (**(code **)(in_ECX[0x24] + 0x28))();
    FUN_006e5050();
  }
  in_ECX[0x95] = 2;
  if (in_ECX != (undefined4 *)0xffffff90) {
    FUN_004097d0();
  }
  FUN_0045c990();
  local_8._0_1_ = 0x12;
  (**(code **)(in_ECX[0x74] + 8))();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  (**(code **)(in_ECX[0x58] + 0x28))();
  FUN_006e5050();
  if (param_7 != '\0') {
    in_ECX[0xe2] = 0xe;
    if (in_ECX != (undefined4 *)0xffffff90) {
      FUN_004097d0();
    }
    FUN_0045c990();
    local_8._0_1_ = 0x13;
    (**(code **)(in_ECX[0xc1] + 8))();
    local_8 = CONCAT31(local_8._1_3_,0x11);
    (**(code **)(in_ECX[0xa5] + 0x28))();
    FUN_006e5050();
  }
  if (in_ECX != (undefined4 *)0xffffff8c) {
    FUN_004097d0();
  }
  *(byte *)(in_ECX + 0x10c) = *(byte *)(in_ECX + 0x10c) | 0x60;
  *(undefined2 *)(in_ECX + 0x125) = 0x101;
  *(undefined1 *)((int)in_ECX + 0x496) = 0;
  FUN_006e6170();
  FUN_006e6170();
  (**(code **)(in_ECX[0xf2] + 0x28))();
  FUN_006e5050(in_ECX + 0xf2);
  ExceptionList = local_10;
  return;
}

