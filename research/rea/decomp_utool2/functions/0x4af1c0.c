// rea decompile_all
// name: FUN_004af1c0
// address: 0x4af1c0
// body: available
// range: 0x4af1c0-0x4af270 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004af1c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  int *piVar6;
  
  uVar5 = 0;
  uVar2 = in_ECX[2];
  if (0 < (int)uVar2) {
    while (param_1 != *(int *)(*in_ECX + uVar5 * 4)) {
      uVar5 = uVar5 + 1;
      if ((int)uVar2 <= (int)uVar5) {
        return;
      }
    }
    piVar6 = (int *)0x0;
    if (uVar5 < uVar2) {
      piVar1 = (int *)(*in_ECX + uVar5 * 4);
      if ((int *)*piVar1 != (int *)0x0) {
        piVar6 = (int *)*piVar1;
      }
      in_ECX[2] = uVar2 - 1;
      iVar4 = (uVar2 - 1) - uVar5;
      if (0 < iVar4) {
        FUN_004c1df0(piVar1,piVar1 + 1,iVar4 * 4);
      }
    }
    iVar4 = in_ECX[2];
    if ((iVar4 * 2 < in_ECX[1]) && (iVar4 < in_ECX[1])) {
      FUN_00409cf0(iVar4);
    }
    if (piVar6 != (int *)0x0) {
      if ((undefined4 *)piVar6[1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[1])(1);
      }
      puVar3 = (undefined4 *)*piVar6;
      if (puVar3 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar3 + 1;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar3)(1);
        }
      }
      FUN_004bfe14(piVar6,0x78);
    }
  }
  return;
}

