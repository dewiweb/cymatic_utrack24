// rea decompile_all
// name: FUN_0050eee0
// address: 0x50eee0
// body: available
// range: 0x50eee0-0x50f03b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050eee0(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x1180) != 0) {
    FUN_0050e1b0();
    FUN_004e7b80();
    FUN_004126f0();
    if (*(int *)(in_ECX + 0x116c) != 0) {
      FID_conflict__free(*(void **)(in_ECX + 0x1168));
      *(undefined4 *)(in_ECX + 0x1168) = 0;
      *(undefined4 *)(in_ECX + 0x116c) = 0;
    }
    *(undefined4 *)(in_ECX + 0x1170) = 0;
    FUN_00407fe0();
    if (*(int *)(in_ECX + 0x1178) != 0) {
      FID_conflict__free(*(void **)(in_ECX + 0x1174));
      *(undefined4 *)(in_ECX + 0x1174) = 0;
      *(undefined4 *)(in_ECX + 0x1178) = 0;
    }
    iVar2 = in_ECX + 0xa98;
    *(undefined4 *)(in_ECX + 0x117c) = 0;
    FUN_0057fe20(iVar2);
    FUN_005ce600(iVar2);
    if ((*(byte *)(in_ECX + 0x741) & 0x10) == 0) {
      *(byte *)(in_ECX + 0x741) = *(byte *)(in_ECX + 0x741) | 0x10;
      iVar2 = *(int *)(in_ECX + 0x6e4);
      if ((iVar2 == 0) ||
         (((*(byte *)(iVar2 + 0x69) & 0x10) == 0 &&
          ((*(int *)(iVar2 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))))) {
        FUN_006cc240();
      }
    }
    if ((*(byte *)(in_ECX + 0x281) & 0x10) == 0) {
      *(byte *)(in_ECX + 0x281) = *(byte *)(in_ECX + 0x281) | 0x10;
      iVar2 = *(int *)(in_ECX + 0x224);
      if ((iVar2 == 0) ||
         (((*(byte *)(iVar2 + 0x69) & 0x10) == 0 &&
          ((*(int *)(iVar2 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))))) {
        FUN_006cc240();
      }
    }
    if ((*(byte *)(in_ECX + 0x399) & 0x10) == 0) {
      *(byte *)(in_ECX + 0x399) = *(byte *)(in_ECX + 0x399) | 0x10;
      iVar2 = *(int *)(in_ECX + 0x33c);
      if ((iVar2 == 0) ||
         (((*(byte *)(iVar2 + 0x69) & 0x10) == 0 &&
          ((*(int *)(iVar2 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))))) {
        FUN_006cc240();
      }
    }
    *(undefined4 *)(in_ECX + 0x1180) = 0;
    return;
  }
  return;
}

