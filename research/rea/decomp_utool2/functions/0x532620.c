// rea decompile_all
// name: FUN_00532620
// address: 0x532620
// body: available
// range: 0x532620-0x532706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00532620(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  
  iVar5 = 0x50;
  piVar1 = (int *)(in_ECX + 0x4d4);
  if (*(int *)(in_ECX + 0x4a8) < 2) {
    iVar5 = 0x32;
  }
  if (*(int *)(in_ECX + 0x4dc) == 0) {
    if (*(int *)(in_ECX + 0x4d8) < 1) {
      FUN_00409cf0(8);
    }
    iVar3 = *(int *)(in_ECX + 0x4dc);
    *(int *)(in_ECX + 0x4dc) = iVar3 + 1;
    piVar4 = (int *)(*piVar1 + iVar3 * 4);
    if (piVar4 == (int *)0x0) goto LAB_00532688;
  }
  else {
    piVar4 = (int *)*piVar1;
  }
  *piVar4 = iVar5;
LAB_00532688:
  uVar2 = *(uint *)(in_ECX + 0x4dc);
  iVar5 = (*(int *)(in_ECX + 0x18) - iVar5) + -0x14;
  if (uVar2 < 2) {
    if (*(int *)(in_ECX + 0x4d8) < (int)(uVar2 + 1)) {
      FUN_00409cf0((int)(uVar2 + 1) / 2 + uVar2 + 9 & 0xfffffff8);
    }
    iVar3 = *(int *)(in_ECX + 0x4dc);
    *(int *)(in_ECX + 0x4dc) = iVar3 + 1;
    piVar1 = (int *)(*piVar1 + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar5;
    }
  }
  else {
    *(int *)(*piVar1 + 4) = iVar5;
  }
  FUN_006e9790(*(int *)(in_ECX + 0x18) + -0x3c,0,0x3c,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x18) + -0x7d,0,0x3c,0x14);
  return;
}

