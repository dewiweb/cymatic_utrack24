// rea decompile_all
// name: FUN_00500fb0
// address: 0x500fb0
// body: available
// range: 0x500fb0-0x5010ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500fb0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x304)) {
    do {
      if (uVar5 < *(uint *)(in_ECX + 0x304)) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x2fc) + uVar5 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (*(char *)(iVar3 + 0x14) == '\0') {
        uVar5 = uVar5 + 1;
      }
      else {
        piVar4 = (int *)0x0;
        if (uVar5 < *(uint *)(in_ECX + 0x304)) {
          piVar1 = (int *)(*(int *)(in_ECX + 0x2fc) + uVar5 * 4);
          if ((int *)*piVar1 != (int *)0x0) {
            piVar4 = (int *)*piVar1;
          }
          iVar3 = *(uint *)(in_ECX + 0x304) - 1;
          *(int *)(in_ECX + 0x304) = iVar3;
          iVar3 = iVar3 - uVar5;
          if (0 < iVar3) {
            FUN_004c1df0(piVar1,piVar1 + 1,iVar3 * 4);
          }
        }
        iVar3 = *(int *)(in_ECX + 0x304);
        if ((iVar3 * 2 < *(int *)(in_ECX + 0x300)) && (iVar3 < *(int *)(in_ECX + 0x300))) {
          FUN_00409cf0(iVar3);
        }
        if (piVar4 != (int *)0x0) {
          puVar2 = (undefined4 *)piVar4[2];
          if (puVar2 != (undefined4 *)0x0) {
            LOCK();
            piVar1 = puVar2 + 1;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)*puVar2)(1);
            }
          }
          puVar2 = (undefined4 *)piVar4[1];
          if (puVar2 != (undefined4 *)0x0) {
            LOCK();
            piVar1 = puVar2 + 1;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)*puVar2)(1);
            }
          }
          if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar4)(1);
          }
          FUN_004bfe14(piVar4,0x18);
        }
      }
    } while ((int)uVar5 < *(int *)(in_ECX + 0x304));
  }
  iVar3 = FUN_004ae6c0();
  FUN_004f8300(0 < iVar3);
  FUN_004f6e30();
  (**(code **)(**(int **)(in_ECX + 0x1c4) + 4))();
  return;
}

