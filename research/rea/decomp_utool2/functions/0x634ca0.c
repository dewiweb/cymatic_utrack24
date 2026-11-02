// rea decompile_all
// name: FUN_00634ca0
// address: 0x634ca0
// body: available
// range: 0x634ca0-0x634d8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00634ca0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  
  puVar2 = *(undefined4 **)(in_ECX + 8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = operator_new(0xc);
    *puVar2 = 0;
    iVar1 = *param_1;
    puVar2[1] = iVar1;
    piVar4 = (int *)(iVar1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    iVar1 = *param_2;
    puVar2[2] = iVar1;
    piVar4 = (int *)(iVar1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(undefined4 **)(in_ECX + 8) = puVar2;
    return;
  }
  iVar1 = puVar2[1];
  while( true ) {
    if (iVar1 == *param_1) {
      piVar4 = (int *)(*param_2 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = puVar2[2];
      puVar2[2] = *param_2;
      UNLOCK();
      piVar4 = (int *)(iVar1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      return;
    }
    puVar3 = (undefined4 *)*puVar2;
    if (puVar3 == (undefined4 *)0x0) break;
    iVar1 = puVar3[1];
    puVar2 = puVar3;
  }
  puVar3 = operator_new(0xc);
  *puVar3 = 0;
  iVar1 = *param_1;
  puVar3[1] = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  iVar1 = *param_2;
  puVar3[2] = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *puVar2 = puVar3;
  return;
}

