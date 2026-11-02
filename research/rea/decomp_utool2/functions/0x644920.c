// rea decompile_all
// name: FUN_00644920
// address: 0x644920
// body: available
// range: 0x644920-0x6449d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644920(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  float in_XMM1_Da;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ffb0;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((3.0 < in_XMM1_Da) && (in_XMM1_Da < 25.0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x14));
    local_8 = 0;
    if (*(int *)(in_ECX + 0x10) == 0) {
      operator_new(0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar3 = FUN_004678a0(in_ECX);
      iVar1 = *(int *)(in_ECX + 0x10);
      if (iVar1 != iVar3) {
        *(int *)(in_ECX + 0x10) = iVar3;
        FUN_004bfe14(iVar1,0x24,uVar2);
      }
    }
    FUN_00467a00(param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x14));
  }
  ExceptionList = local_10;
  return;
}

