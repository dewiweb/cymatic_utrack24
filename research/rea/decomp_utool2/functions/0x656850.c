// rea decompile_all
// name: FUN_00656850
// address: 0x656850
// body: available
// range: 0x656850-0x6569cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00656850(void)

{
  void *pvVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  if (*(void **)(in_ECX + 0x144) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x144));
  }
  *(undefined4 *)(in_ECX + 0x144) = 0;
  if (*(int *)(in_ECX + 0x148) != 0) {
    iVar3 = 0;
    iVar2 = 1 << (8U - (char)*(undefined4 *)(in_ECX + 0x13c) & 0x1f);
    if (0 < iVar2) {
      do {
        pvVar1 = *(void **)(*(int *)(in_ECX + 0x148) + iVar3 * 4);
        if (pvVar1 != (void *)0x0) {
          FID_conflict__free(pvVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (*(void **)(in_ECX + 0x148) != (void *)0x0) {
      FID_conflict__free(*(void **)(in_ECX + 0x148));
    }
    *(undefined4 *)(in_ECX + 0x148) = 0;
  }
  if (*(void **)(in_ECX + 0x14c) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x14c));
  }
  *(undefined4 *)(in_ECX + 0x14c) = 0;
  if (*(void **)(in_ECX + 0x150) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x150));
  }
  *(undefined4 *)(in_ECX + 0x150) = 0;
  if (*(int *)(in_ECX + 0x154) != 0) {
    iVar3 = 0;
    iVar2 = 1 << (8U - (char)*(undefined4 *)(in_ECX + 0x13c) & 0x1f);
    if (0 < iVar2) {
      do {
        pvVar1 = *(void **)(*(int *)(in_ECX + 0x154) + iVar3 * 4);
        if (pvVar1 != (void *)0x0) {
          FID_conflict__free(pvVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (*(void **)(in_ECX + 0x154) != (void *)0x0) {
      FID_conflict__free(*(void **)(in_ECX + 0x154));
    }
    *(undefined4 *)(in_ECX + 0x154) = 0;
  }
  if (*(int *)(in_ECX + 0x158) != 0) {
    iVar3 = 0;
    iVar2 = 1 << (8U - (char)*(undefined4 *)(in_ECX + 0x13c) & 0x1f);
    if (0 < iVar2) {
      do {
        pvVar1 = *(void **)(*(int *)(in_ECX + 0x158) + iVar3 * 4);
        if (pvVar1 != (void *)0x0) {
          FID_conflict__free(pvVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (*(void **)(in_ECX + 0x158) != (void *)0x0) {
      FID_conflict__free(*(void **)(in_ECX + 0x158));
    }
    *(undefined4 *)(in_ECX + 0x158) = 0;
  }
  return;
}

