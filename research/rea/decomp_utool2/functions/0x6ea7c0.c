// rea decompile_all
// name: FUN_006ea7c0
// address: 0x6ea7c0
// body: available
// range: 0x6ea7c0-0x6ea8fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ea7c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Memory;
  int *piVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar2 = (int *)(*param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0x78);
  *(int *)(in_ECX + 0x78) = *param_1;
  UNLOCK();
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  if (param_2 == 0) {
    FUN_0040f7f0();
    if (*(int *)(in_ECX + 0x80) != 0) {
      FID_conflict__free(*(void **)(in_ECX + 0x7c));
      *(undefined4 *)(in_ECX + 0x7c) = 0;
      *(undefined4 *)(in_ECX + 0x80) = 0;
    }
    *(undefined4 *)(in_ECX + 0x84) = 0;
  }
  else if (in_ECX + 0x7c != param_2) {
    FUN_0041b050(param_2);
    _Memory = *(void **)(in_ECX + 0x7c);
    *(undefined4 *)(in_ECX + 0x7c) = local_10;
    *(undefined4 *)(in_ECX + 0x80) = local_c;
    *(undefined4 *)(in_ECX + 0x84) = local_8;
    FUN_0040f7f0();
    FID_conflict__free(_Memory);
  }
  if (param_3 == 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x88));
    *(undefined4 *)(in_ECX + 0x88) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
  }
  else {
    FUN_00624540(param_3);
  }
  *(undefined1 *)(in_ECX + 0x74) = 0;
  if (*(int *)(*(int *)(in_ECX + 0x70) + 0x78) == 0) {
    FUN_006ea660();
  }
  FUN_004b5e60(param_1,param_2,param_3);
  return;
}

