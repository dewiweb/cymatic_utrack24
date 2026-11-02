// rea decompile_all
// name: FUN_0058e8a0
// address: 0x58e8a0
// body: available
// range: 0x58e8a0-0x58ea21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058e8a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  
  *in_ECX = ExportJob::vftable;
  *(undefined1 *)(in_ECX[0x2c] + 0x48) = 1;
  puVar2 = (undefined4 *)in_ECX[0x2c];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x2c] = 0;
    (**(code **)*puVar2)(1);
  }
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x32]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x2e]);
  piVar3 = (int *)(in_ECX[0x2d] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if ((undefined4 *)in_ECX[0x2c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2c])(1);
  }
  FID_conflict__free((void *)in_ECX[0x29]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x23));
  FUN_0041bd90();
  FID_conflict__free((void *)in_ECX[0x20]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1a));
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x17]);
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)in_ECX + 0x41));
  piVar3 = (int *)(in_ECX[7] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[6] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[5] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[1] + -8);
  *in_ECX = juce::ThreadPoolJob::vftable;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  return;
}

