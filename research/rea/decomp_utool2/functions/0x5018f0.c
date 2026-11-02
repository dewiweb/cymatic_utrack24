// rea decompile_all
// name: FUN_005018f0
// address: 0x5018f0
// body: available
// range: 0x5018f0-0x5019a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005018f0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)(in_ECX + 0x378);
  if (*(int *)(in_ECX + 0x380) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)*piVar1;
  }
  if (*(uint *)(in_ECX + 0x380) < 2) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*piVar1 + 4);
  }
  if (*(uint *)(in_ECX + 0x380) < 4) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar1 + 0xc);
  }
  if (*(uint *)(in_ECX + 0x380) < 5) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*piVar1 + 0x10);
  }
  iVar4 = iVar3 + iVar5 + iVar6 + iVar4;
  *(int *)(in_ECX + 900) = iVar4;
  uVar2 = *(uint *)(in_ECX + 0x380);
  iVar4 = (*(int *)(in_ECX + 0x18) - iVar4) + -0x14;
  if (uVar2 < 3) {
    if (*(int *)(in_ECX + 0x37c) < (int)(uVar2 + 1)) {
      FUN_00409cf0((int)(uVar2 + 1) / 2 + uVar2 + 9 & 0xfffffff8);
    }
    iVar6 = *(int *)(in_ECX + 0x380);
    *(int *)(in_ECX + 0x380) = iVar6 + 1;
    piVar1 = (int *)(*piVar1 + iVar6 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar4;
    }
  }
  else {
    *(int *)(*piVar1 + 8) = iVar4;
  }
  FUN_006e9790(*(int *)(in_ECX + 0x18) + -0x3c,2,0x3c,0x14);
  return;
}

