// rea decompile_all
// name: FUN_00470110
// address: 0x470110
// body: available
// range: 0x470110-0x470198 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00470110(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_ECX;
  
  iVar2 = in_ECX[2];
  while (0 < iVar2) {
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + -1;
    puVar3 = *(undefined4 **)(*in_ECX + (iVar2 + -1) * 4);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar3[0xe];
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar4 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar4)(1);
        }
      }
      puVar4 = (undefined4 *)puVar3[7];
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar4 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar4)(1);
        }
      }
      iVar2 = puVar3[6];
      if (iVar2 != 0) {
        FID_conflict__free(*(void **)(iVar2 + 0x14));
        FUN_004bfe14(iVar2,0x20);
      }
      FID_conflict__free((void *)*puVar3);
      FUN_004bfe14(puVar3,0x3c);
    }
    iVar2 = in_ECX[2];
  }
  return;
}

