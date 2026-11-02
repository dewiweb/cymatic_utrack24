// rea decompile_all
// name: FUN_005e8980
// address: 0x5e8980
// body: available
// range: 0x5e8980-0x5e8a41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e8980(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x68);
  iVar1 = *(int *)(in_ECX + 4);
  if (*(void **)(iVar3 + 0x40) != (void *)0x0) {
    FID_conflict__free(*(void **)(iVar3 + 0x40));
  }
  *(undefined4 *)(iVar3 + 0x40) = 0;
  if (*(void **)(iVar3 + 0x44) != (void *)0x0) {
    FID_conflict__free(*(void **)(iVar3 + 0x44));
  }
  *(undefined4 *)(iVar3 + 0x44) = 0;
  if (*(void **)(iVar3 + 0x48) != (void *)0x0) {
    FID_conflict__free(*(void **)(iVar3 + 0x48));
  }
  *(undefined4 *)(iVar3 + 0x48) = 0;
  if (*(int *)(in_ECX + 0x10) <= *(int *)(in_ECX + 0x14) + in_EDX) {
    iVar3 = 0;
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x14) + in_EDX * 2;
    if (0 < *(int *)(iVar1 + 4)) {
      do {
        uVar2 = FUN_004c553b(*(undefined4 *)(*(int *)(in_ECX + 8) + iVar3 * 4),
                             *(int *)(in_ECX + 0x10) << 2);
        *(undefined4 *)(*(int *)(in_ECX + 8) + iVar3 * 4) = uVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 4));
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 4)) {
    do {
      *(int *)(*(int *)(in_ECX + 0xc) + iVar3 * 4) =
           *(int *)(*(int *)(in_ECX + 8) + iVar3 * 4) + *(int *)(in_ECX + 0x14) * 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 4));
  }
  return *(undefined4 *)(in_ECX + 0xc);
}

