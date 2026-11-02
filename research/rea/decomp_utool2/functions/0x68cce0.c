// rea decompile_all
// name: FUN_0068cce0
// address: 0x68cce0
// body: available
// range: 0x68cce0-0x68ce24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068cce0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar4 = DAT_00c8a67c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721488;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_00c8a9c8 = DAT_00c8a9dc;
  if (*(int *)(in_ECX + 0x20) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x20) + 8);
  }
  do {
    if (iVar3 == 0) {
      cVar1 = FUN_006ceda0();
      uVar6 = 1;
      if (cVar1 == '\0') {
        FUN_006cc500(2,1);
        ExceptionList = local_10;
        return;
      }
      FUN_0048c530(1);
      FUN_006ca2a0(uVar6);
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(iVar3 + 0xc);
  } while (iVar3 != *(int *)(in_ECX + 4));
  if (*(int *)(in_ECX + 0x20) == 0) {
    DAT_00c8a678 = 0;
  }
  else {
    DAT_00c8a678 = *(undefined4 *)(*(int *)(in_ECX + 0x20) + 8);
  }
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    local_8 = iVar4;
    DAT_00c8a67c = FUN_006cb960();
  }
  iVar3 = DAT_00c8a67c;
  local_8 = 0xffffffff;
  piVar5 = (int *)(*(int *)(DAT_00c8a67c + 0x1c) + 0xc);
  LOCK();
  iVar4 = *piVar5;
  if (iVar4 == 0) {
    *piVar5 = 1;
    iVar4 = 0;
  }
  UNLOCK();
  if ((iVar4 == 0) && (cVar1 = FUN_0063e270(uVar2), cVar1 == '\0')) {
    LOCK();
    *(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0xc) = 0;
    UNLOCK();
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_006cca30(*(undefined4 *)(*(int *)(in_ECX + 0x20) + 8));
    ExceptionList = local_10;
    return;
  }
  FUN_006cca30(0);
  ExceptionList = local_10;
  return;
}

