// rea decompile_all
// name: FUN_006cc310
// address: 0x6cc310
// body: available
// range: 0x6cc310-0x6cc3ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cc310(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char in_CL;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar4 = DAT_00c8a678;
  local_8 = -1;
  puStack_c = &LAB_0072655a;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_00c8a678 = 0;
  if ((in_CL != '\0') && (iVar4 != 0)) {
    FUN_006cc960(2);
  }
  iVar4 = DAT_00c8a67c;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    local_8 = iVar4;
    DAT_00c8a67c = FUN_006cb960();
  }
  iVar1 = DAT_00c8a67c;
  piVar5 = (int *)(*(int *)(DAT_00c8a67c + 0x1c) + 0xc);
  LOCK();
  iVar4 = *piVar5;
  if (iVar4 == 0) {
    *piVar5 = 1;
    iVar4 = 0;
  }
  UNLOCK();
  if ((iVar4 == 0) && (cVar2 = FUN_0063e270(uVar3), cVar2 == '\0')) {
    LOCK();
    *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc) = 0;
    UNLOCK();
  }
  ExceptionList = local_10;
  return;
}

