// rea decompile_all
// name: FUN_006eb0b0
// address: 0x6eb0b0
// body: available
// range: 0x6eb0b0-0x6eb1cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eb0b0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  
  piVar1 = in_ECX + 0x1d;
  if (*piVar1 != *param_1) {
    iVar3 = FUN_00448730();
    if (iVar3 != 0) {
      piVar4 = (int *)(*param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *param_1;
      UNLOCK();
      piVar1 = (int *)(iVar3 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      puVar2 = (undefined4 *)in_ECX[0x1e];
      if (puVar2 != (undefined4 *)0x0) {
        in_ECX[0x1e] = 0;
        (**(code **)*puVar2)();
      }
      puVar5 = (undefined4 *)(**(code **)(*in_ECX + 0xb0))();
      puVar2 = (undefined4 *)in_ECX[0x1e];
      if ((puVar2 != puVar5) && (in_ECX[0x1e] = (int)puVar5, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)();
      }
      piVar1 = (int *)in_ECX[0x1e];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))();
        FUN_006e5050(piVar1,0xffffffff);
        FUN_006cfbb0();
        (**(code **)(*in_ECX + 0x84))();
      }
      iVar3 = 0;
      if (0 < in_ECX[0x21]) {
        while( true ) {
          iVar6 = *(int *)(in_ECX[0x1f] + iVar3 * 4);
          if (*(int *)(iVar6 + 4) == *param_1) break;
          iVar6 = FUN_00448730(*(undefined4 *)(iVar6 + 4));
          if (iVar6 == 0) break;
          iVar3 = iVar3 + 1;
          if (in_ECX[0x21] <= iVar3) {
            return;
          }
        }
        FUN_006e5380(1);
      }
    }
  }
  return;
}

