// rea decompile_all
// name: FUN_00697c90
// address: 0x697c90
// body: available
// range: 0x697c90-0x697d14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697c90(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  if ((((*(char *)(in_ECX + 0x98) != '\0') && (0 < *(int *)(in_ECX + 0xb4))) &&
      (0 < *(int *)(in_ECX + 0x18))) &&
     ((*(int *)(in_ECX + 0x9c) == 0 && (*(int *)(in_ECX + 0xa0) == 0)))) {
    uStack_14 = 0;
    uStack_18 = 0x697cca;
    iStack_10 = *(int *)(in_ECX + 0xb4);
    FUN_00698d60();
  }
  FUN_006e6400(auStack_1c);
  FUN_006ce9f0(1);
  *(undefined1 *)(in_ECX + 0x94) = 1;
  piVar3 = (int *)(*(int *)(in_ECX + 0x74) + 0xc);
  LOCK();
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    *piVar3 = 1;
    iVar2 = 0;
  }
  UNLOCK();
  if (iVar2 == 0) {
    iStack_10 = 0x697d02;
    cVar1 = FUN_0063e270();
    if (cVar1 == '\0') {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0xc) = 0;
      UNLOCK();
    }
  }
  return;
}

