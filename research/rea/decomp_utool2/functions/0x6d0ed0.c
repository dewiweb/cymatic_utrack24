// rea decompile_all
// name: FUN_006d0ed0
// address: 0x6d0ed0
// body: available
// range: 0x6d0ed0-0x6d0fbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d0ed0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uStack_34;
  int *piStack_30;
  int local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726c58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piStack_30 = &local_14;
  local_2c = 0;
  uStack_34 = 0x6d0f0b;
  local_14 = in_ECX;
  FUN_006379a0();
  local_8 = 0;
  piVar3 = (int *)(in_ECX + 0x7c);
  if (*piVar3 != local_14) {
    local_2c = *piVar3;
    piStack_30 = (int *)0x6d0f30;
    iVar2 = FUN_00448730();
    if (iVar2 != 0) {
      piVar1 = (int *)(local_14 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = local_14;
      UNLOCK();
      piVar3 = (int *)(iVar2 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          local_2c = 0x6d0f6a;
          FID_conflict__free(piVar3);
        }
      }
      local_2c = 0x6d0f76;
      FUN_0068e810();
      FUN_006e6400(&uStack_34);
      FUN_006ce9f0(1);
    }
  }
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_2c = 0x6d0fa7;
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

