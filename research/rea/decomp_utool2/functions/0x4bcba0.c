// rea decompile_all
// name: FUN_004bcba0
// address: 0x4bcba0
// body: available
// range: 0x4bcba0-0x4bcc60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bcba0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007046ff;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  operator_new(0x68);
  local_8 = 0;
  uVar2 = FUN_004ba270(*in_ECX);
  local_8 = 0xffffffff;
  iVar4 = in_ECX[3] + 1;
  if (in_ECX[2] < iVar4) {
    FUN_00409cf0(iVar4 / 2 + in_ECX[3] + 9 & 0xfffffff8);
  }
  iVar4 = in_ECX[3];
  in_ECX[3] = iVar4 + 1;
  *(undefined4 *)(in_ECX[1] + iVar4 * 4) = uVar2;
  iVar3 = FUN_004ba330(uVar1);
  iVar4 = *in_ECX;
  if ((iVar4 != iVar3) && (*in_ECX = iVar3, iVar4 != 0)) {
    FUN_004bdbc0();
    FUN_004bfe14(iVar4,0x68);
  }
  ExceptionList = local_10;
  return;
}

