// rea decompile_all
// name: FUN_004a55d0
// address: 0x4a55d0
// body: available
// range: 0x4a55d0-0x4a5783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a55d0(undefined4 param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070381c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0068dd50(param_1,param_2);
  *(undefined1 *)(in_ECX + 0xd) = param_4;
  *in_ECX = juce::HWNDComponentPeer::vftable;
  in_ECX[0xf] = param_3;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0xff;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x22] = juce::HWNDComponentPeer::TemporaryImage::vftable;
  in_ECX[0x27] = 0;
  local_8 = 3;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  FUN_004aa6a0(uVar2);
  FUN_004a98b0();
  puVar3 = (undefined4 *)FUN_00458890();
  SetWindowTextW((HWND)in_ECX[0xe],(LPCWSTR)*puVar3);
  if (((param_2 & 0x100) != 0) && (cVar1 = FUN_00687a20(), cVar1 != '\0')) {
    if ((((uint)in_ECX[2] >> 3 & 1) != 0) && (iVar4 = FUN_006311d0(), 0x202 < iVar4)) {
      ExceptionList = local_10;
      return;
    }
    piVar5 = (int *)FUN_006e9580();
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x38))(in_ECX[1]);
    puVar3 = (undefined4 *)in_ECX[0x10];
    if ((puVar3 != puVar6) && (in_ECX[0x10] = puVar6, puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    if (in_ECX[0x10] != 0) {
      FUN_00687e50(in_ECX[1]);
    }
  }
  ExceptionList = local_10;
  return;
}

