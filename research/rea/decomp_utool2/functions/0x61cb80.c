// rea decompile_all
// name: FUN_0061cb80
// address: 0x61cb80
// body: available
// range: 0x61cb80-0x61ccde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061cb80(void)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  byte *local_c;
  
  while( true ) {
    FUN_0045c2c0(*(undefined4 *)(in_ECX + 4));
    *(byte **)(in_ECX + 4) = local_c;
    if (*local_c == 0) break;
    iVar2 = FUN_00426f70();
    if (iVar2 != 0x3c) {
      return;
    }
    bVar1 = *local_c;
    if ((char)bVar1 < '\0') {
      uVar3 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar3 < 9) break;
          uVar3 = uVar3 >> 1;
        } while ((uVar3 & (int)(char)bVar1) != 0);
      }
    }
    iVar2 = FUN_00426f70();
    if (iVar2 == 0x21) {
      FUN_0044ebd0(2);
      iVar2 = FUN_00426f70();
      if (iVar2 != 0x2d) goto LAB_0061cc68;
      FUN_0044ebd0(3);
      iVar2 = FUN_00426f70();
      if (iVar2 != 0x2d) goto LAB_0061cc68;
      FUN_0044ebd0(4);
      iVar2 = FUN_0045e180(*(undefined4 *)(in_ECX + 4),&DAT_00c01664);
      if (iVar2 < 0) break;
      FUN_0044ebd0(iVar2 + 3);
    }
    else {
LAB_0061cc68:
      bVar1 = *local_c;
      if ((char)bVar1 < '\0') {
        uVar3 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar3 < 9) break;
            uVar3 = uVar3 >> 1;
          } while ((uVar3 & (int)(char)bVar1) != 0);
        }
      }
      iVar2 = FUN_00426f70();
      if (iVar2 != 0x3f) {
        return;
      }
      FUN_0044ebd0(2);
      iVar2 = FUN_0045e180(*(undefined4 *)(in_ECX + 4),&DAT_00c01688);
      if (iVar2 < 0) break;
      FUN_0044ebd0(iVar2 + 2);
    }
  }
  *(undefined1 *)(in_ECX + 8) = 1;
  return;
}

