// rea decompile_all
// name: FUN_0042b160
// address: 0x42b160
// body: available
// range: 0x42b160-0x42b247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b160(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  *(undefined1 *)(in_ECX + 0x61) = 1;
  FUN_0040f7f0();
  if (*(int *)(in_ECX + 0x34) != 0) {
    FID_conflict__free((void *)*puVar1);
    *puVar1 = 0;
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  puVar2 = (undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  FUN_0040f7f0();
  if (*(int *)(in_ECX + 0x4c) != 0) {
    FID_conflict__free((void *)*puVar2);
    *puVar2 = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0;
  }
  puVar3 = (undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x50) = 0;
  FUN_0040f7f0();
  if (*(int *)(in_ECX + 0x40) != 0) {
    FID_conflict__free((void *)*puVar3);
    *puVar3 = 0;
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  FUN_0040f7f0();
  if (*(int *)(in_ECX + 0x58) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x54));
    *(undefined4 *)(in_ECX + 0x54) = 0;
    *(undefined4 *)(in_ECX + 0x58) = 0;
  }
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  FUN_0042b580(puVar1,puVar2,puVar3,in_ECX + 0x54);
  return;
}

