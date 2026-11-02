// rea decompile_all
// name: FUN_00620c20
// address: 0x620c20
// body: available
// range: 0x620c20-0x620cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_00620c20(uint *param_1,undefined4 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint *in_ECX;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar2 = (char *)*in_ECX;
  pcVar7 = pcVar2;
  if (*pcVar2 != '\0') {
    do {
      pcVar6 = pcVar7;
      pcVar7 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    pcVar7 = pcVar6;
    if (pcVar2 < pcVar6) {
      do {
        iVar4 = 0;
        do {
          pbVar1 = (byte *)(pcVar7 + -1);
          pcVar7 = pcVar7 + -1;
          if ((*pbVar1 & 0xc0) != 0x80) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        FUN_00426f70();
        iVar4 = FUN_0045c230(param_2);
        if (iVar4 < 0) {
          FUN_0044eb90();
          break;
        }
      } while ((char *)*in_ECX < pcVar7);
    }
    if (pcVar7 < pcVar6) {
      FUN_0062cd70(*in_ECX,pcVar7);
      return param_1;
    }
  }
  uVar3 = *in_ECX;
  *param_1 = uVar3;
  piVar5 = (int *)(uVar3 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  return param_1;
}

