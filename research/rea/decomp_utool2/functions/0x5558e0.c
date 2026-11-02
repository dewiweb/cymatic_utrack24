// rea decompile_all
// name: FUN_005558e0
// address: 0x5558e0
// body: available
// range: 0x5558e0-0x555a06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005558e0(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  bVar2 = false;
  bVar1 = false;
  if (*(int *)(in_ECX + 0x30) < 1) {
LAB_00555970:
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  else {
    do {
      cVar3 = FUN_00632c80(&DAT_0073e8a8);
      if ((cVar3 == '\0') && (cVar3 = FUN_00632c80(&DAT_0073e8b0), cVar3 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar2 = true;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x30));
    if (bVar1) {
      if (bVar2) {
        *(undefined4 *)(in_ECX + 0x44) = 5;
      }
      else {
        *(undefined4 *)(in_ECX + 0x44) = 4;
      }
    }
    else {
      if (!bVar2) goto LAB_00555970;
      *(undefined4 *)(in_ECX + 0x44) = 3;
    }
  }
  if (*(int *)(in_ECX + 0x40) != 0) goto LAB_005559cc;
  if (*(int *)(in_ECX + 0x44) != 5) {
    iVar6 = 0;
    uVar5 = 0xff;
    if (0 < *(int *)(in_ECX + 0x30)) {
      do {
        uVar4 = FUN_00554d60(in_ECX + 0xc);
        if (uVar4 != 0) {
          uVar5 = uVar5 & uVar4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(in_ECX + 0x30));
    }
    if (uVar5 != 1) {
      if (uVar5 == 2) {
        *(undefined4 *)(in_ECX + 0x40) = 1;
        goto LAB_005559cc;
      }
      if (uVar5 != 3) goto LAB_005559cc;
    }
  }
  *(undefined4 *)(in_ECX + 0x40) = 3;
LAB_005559cc:
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x30)) {
    do {
      FUN_00555090(in_ECX + 0xc,*(undefined4 *)(in_ECX + 0x44),*(undefined4 *)(in_ECX + 0x40));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x30));
  }
  return;
}

