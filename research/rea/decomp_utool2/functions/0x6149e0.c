// rea decompile_all
// name: FUN_006149e0
// address: 0x6149e0
// body: available
// range: 0x6149e0-0x614bbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006149e0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x16bc);
  *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | 2 << ((byte)iVar2 & 0x1f);
  if (iVar2 < 0xe) {
    *(int *)(in_ECX + 0x16bc) = iVar2 + 3;
  }
  else {
    *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
         *(undefined1 *)(in_ECX + 0x16b8);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
         *(undefined1 *)(in_ECX + 0x16b9);
    cVar1 = *(char *)(in_ECX + 0x16bc);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -0xd;
    *(ushort *)(in_ECX + 0x16b8) = 2 >> (0x10U - cVar1 & 0x1f);
  }
  iVar2 = *(int *)(in_ECX + 0x16bc);
  *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | 0 << ((byte)iVar2 & 0x1f);
  if (iVar2 < 10) {
    *(int *)(in_ECX + 0x16bc) = iVar2 + 7;
  }
  else {
    *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
         *(undefined1 *)(in_ECX + 0x16b8);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
         *(undefined1 *)(in_ECX + 0x16b9);
    cVar1 = *(char *)(in_ECX + 0x16bc);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -9;
    *(ushort *)(in_ECX + 0x16b8) = 0 >> (0x10U - cVar1 & 0x1f);
  }
  FUN_00614240();
  iVar2 = *(int *)(in_ECX + 0x16bc);
  if ((*(int *)(in_ECX + 0x16b4) - iVar2) + 0xb < 9) {
    if (iVar2 < 0xe) {
      *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | 2 << ((byte)iVar2 & 0x1f);
      *(int *)(in_ECX + 0x16bc) = iVar2 + 3;
    }
    else {
      *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | 2 << ((byte)iVar2 & 0x1f);
      *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
           *(undefined1 *)(in_ECX + 0x16b8);
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
      *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
           *(undefined1 *)(in_ECX + 0x16b9);
      cVar1 = *(char *)(in_ECX + 0x16bc);
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
      *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -0xd;
      *(ushort *)(in_ECX + 0x16b8) = 2 >> (0x10U - cVar1 & 0x1f);
    }
    iVar2 = *(int *)(in_ECX + 0x16bc);
    *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | 0 << ((byte)iVar2 & 0x1f);
    if (9 < iVar2) {
      *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
           *(undefined1 *)(in_ECX + 0x16b8);
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
      *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
           *(undefined1 *)(in_ECX + 0x16b9);
      cVar1 = *(char *)(in_ECX + 0x16bc);
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
      *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -9;
      *(ushort *)(in_ECX + 0x16b8) = 0 >> (0x10U - cVar1 & 0x1f);
      FUN_00614240();
      *(undefined4 *)(in_ECX + 0x16b4) = 7;
      return;
    }
    *(int *)(in_ECX + 0x16bc) = iVar2 + 7;
    FUN_00614240();
  }
  *(undefined4 *)(in_ECX + 0x16b4) = 7;
  return;
}

