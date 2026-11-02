// rea decompile_all
// name: FUN_006e3b90
// address: 0x6e3b90
// body: available
// range: 0x6e3b90-0x6e3b9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e3b90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  puVar3 = (undefined4 *)*in_ECX;
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = puVar3 + 1;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (*(char *)(puVar3 + 3) != '\0') {
      FUN_00637f30();
      *(undefined4 *)(&DAT_00c8ab28 + puVar3[2] * 4) = 0;
      LOCK();
      DAT_00c8a9b8 = 0;
      UNLOCK();
    }
    if (((HCURSOR)*puVar3 != (HCURSOR)0x0) && (*(char *)(puVar3 + 3) == '\0')) {
      DestroyCursor((HCURSOR)*puVar3);
    }
    FUN_004bfe14(puVar3,0x10);
  }
  return;
}

