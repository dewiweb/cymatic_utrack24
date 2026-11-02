// rea decompile_all
// name: FUN_004438f0
// address: 0x4438f0
// body: available
// range: 0x4438f0-0x443aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004438f0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fece7;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  local_8 = 4;
  in_ECX[0x11] = 0;
  iVar3 = in_ECX[7] + 1;
  if (in_ECX[6] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + in_ECX[7] + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[7];
  in_ECX[7] = iVar3 + 1;
  puVar1 = (undefined4 *)(in_ECX[5] + iVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xfffffffe;
  }
  iVar3 = in_ECX[4] + 1;
  if (in_ECX[3] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + in_ECX[4] + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[4];
  in_ECX[4] = iVar3 + 1;
  puVar1 = (undefined4 *)(in_ECX[2] + iVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar3 = in_ECX[10] + 1;
  if (in_ECX[9] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + in_ECX[10] + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[10];
  in_ECX[10] = iVar3 + 1;
  puVar1 = (undefined4 *)(in_ECX[8] + iVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xfffffffe;
  }
  iVar3 = 0;
  if (0 < *(int *)(in_ECX[1] + 8)) {
    do {
      FUN_00443bf0(*(undefined4 *)(*(int *)in_ECX[1] + iVar3 * 4),param_3,iVar3);
      FUN_00445540(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX[1] + 8));
  }
  if (*(int *)(*in_ECX + 0x44) != in_ECX[0x11]) {
    *(int *)(*in_ECX + 0x44) = in_ECX[0x11];
    FUN_0060a1e0(uVar2);
  }
  ExceptionList = local_10;
  return;
}

