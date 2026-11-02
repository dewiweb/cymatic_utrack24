// rea decompile_all
// name: FUN_006207d0
// address: 0x6207d0
// body: available
// range: 0x6207d0-0x6208d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006207d0(uint param_1)

{
  int *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  uint uVar4;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d22b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Memory = (int *)FUN_004c554b(param_1 * 4 + 4,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar1 = 0;
  local_8 = 0;
  if (param_1 != 0) {
    do {
      uVar4 = (uint)*(byte *)(uVar1 + in_EDX);
      if ((byte)(*(byte *)(uVar1 + in_EDX) + 0x80) < 0x20) {
        uVar4 = (uint)*(ushort *)(&DAT_00c15fc8 + uVar4 * 2);
      }
      _Memory[uVar1] = uVar4;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  _Memory[param_1] = 0;
  if ((_Memory == (int *)0x0) || (*_Memory == 0)) {
    *in_ECX = &DAT_00bfe12c;
  }
  else {
    iVar2 = FUN_0045de60(_Memory);
    uVar1 = iVar2 + 4U & 0xfffffffc;
    puVar3 = (undefined4 *)FUN_004bfe22(uVar1 + 0xb);
    puVar3[1] = uVar1;
    *puVar3 = 0;
    FUN_0045e4f0(_Memory);
    *in_ECX = puVar3 + 2;
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return in_ECX;
}

