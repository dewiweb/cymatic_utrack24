// rea decompile_all
// name: FUN_005bc3b0
// address: 0x5bc3b0
// body: available
// range: 0x5bc3b0-0x5bc599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bc3b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  
  *in_ECX = FolderStructureUpgrader_To_2_0::vftable;
  puVar2 = (undefined4 *)in_ECX[0x41];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x41] = 0;
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x42];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x42] = 0;
    (**(code **)*puVar2)(1);
  }
  if ((undefined4 *)in_ECX[0x42] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x42])(1);
  }
  if ((undefined4 *)in_ECX[0x41] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x41])(1);
  }
  FUN_00419b00();
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x36]);
  FUN_00423b20();
  FID_conflict__free((void *)in_ECX[0x33]);
  FUN_00423b20();
  FID_conflict__free((void *)in_ECX[0x30]);
  FUN_00423b20();
  FID_conflict__free((void *)in_ECX[0x2d]);
  FID_conflict__free((void *)in_ECX[0x2a]);
  FID_conflict__free((void *)in_ECX[0x27]);
  FID_conflict__free((void *)in_ECX[0x24]);
  FUN_00423c00();
  FID_conflict__free((void *)in_ECX[0x21]);
  FUN_00423c00();
  FID_conflict__free((void *)in_ECX[0x1e]);
  FUN_00423c00();
  FID_conflict__free((void *)in_ECX[0x1b]);
  FUN_00423c00();
  FID_conflict__free((void *)in_ECX[0x18]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x15]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x12]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0xf]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0xc]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[9]);
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
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
  }
  *in_ECX = GlobalProgressThread::Job::vftable;
  return;
}

