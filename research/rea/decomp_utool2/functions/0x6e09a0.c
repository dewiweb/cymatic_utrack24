// rea decompile_all
// name: FUN_006e09a0
// address: 0x6e09a0
// body: available
// range: 0x6e09a0-0x6e0a2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e09a0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x9c);
  *(undefined1 *)(in_ECX + 0xae) = 0;
  if (iVar1 == 0) goto LAB_006e0a20;
  uVar2 = *(uint *)(iVar1 + 0x34) & 3;
  if (uVar2 == 0) {
    if ((*(int *)(iVar1 + 4) != 0) && (*(char *)(*(int *)(iVar1 + 4) + 0xac) != '\0')) {
LAB_006e09d8:
      FUN_006dffc0(1);
    }
  }
  else if (uVar2 == 2) goto LAB_006e09d8;
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x9c) + 0x34) & 3;
  if (uVar2 == 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x9c) + 4);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0xac) == '\0') {
        FUN_006dffc0(2);
        FUN_00690c60();
        return;
      }
      goto LAB_006e0a20;
    }
  }
  else if (uVar2 == 2) goto LAB_006e0a20;
  FUN_006dffc0(2);
LAB_006e0a20:
  FUN_00690c60();
  return;
}

