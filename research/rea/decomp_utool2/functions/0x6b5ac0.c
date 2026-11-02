// rea decompile_all
// name: FUN_006b5ac0
// address: 0x6b5ac0
// body: available
// range: 0x6b5ac0-0x6b5c1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6b5c16 to 0x6cc240 FUN_006cc240 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b5ac0(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  byte bVar6;
  uint uVar5;
  
  iVar4 = FUN_004ae6c0();
  bVar6 = *(byte *)(in_ECX + 0x289);
  bVar2 = 0 < iVar4;
  uVar5 = (uint)CONCAT11(bVar2,bVar6);
  if ((bool)(bVar6 >> 4 & 1) == bVar2) {
    uVar5 = CONCAT11(bVar2,bVar6) & 0xffffffef;
    *(byte *)(in_ECX + 0x289) = (0 < iVar4) - 1U & 0x10 | (byte)uVar5;
    iVar1 = *(int *)(in_ECX + 0x22c);
    if ((iVar1 == 0) ||
       (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  bVar6 = (byte)(uVar5 >> 8);
  if ((*(byte *)(in_ECX + 0x369) >> 4 & 1) == bVar6) {
    *(byte *)(in_ECX + 0x369) = (0 < iVar4) - 1U & 0x10 | *(byte *)(in_ECX + 0x369) & 0xef;
    iVar1 = *(int *)(in_ECX + 0x30c);
    if ((iVar1 == 0) ||
       (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  if ((*(byte *)(in_ECX + 0x449) >> 4 & 1) == bVar6) {
    *(byte *)(in_ECX + 0x449) = (0 < iVar4) - 1U & 0x10 | *(byte *)(in_ECX + 0x449) & 0xef;
    iVar1 = *(int *)(in_ECX + 0x3ec);
    if ((iVar1 == 0) ||
       (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  if ((*(byte *)(in_ECX + 0x555) >> 4 & 1) != bVar6) {
    return;
  }
  *(byte *)(in_ECX + 0x555) = (0 < iVar4) - 1U & 0x10 | *(byte *)(in_ECX + 0x555) & 0xef;
  iVar4 = *(int *)(in_ECX + 0x4f8);
  if (iVar4 != 0) {
    if ((*(byte *)(iVar4 + 0x69) & 0x10) != 0) {
      return;
    }
    if ((*(int *)(iVar4 + 0xc) != 0) && (cVar3 = FUN_006e6320(), cVar3 == '\0')) {
      return;
    }
  }
  FUN_006cc240();
  return;
}

