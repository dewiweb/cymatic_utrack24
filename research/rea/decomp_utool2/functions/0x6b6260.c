// rea decompile_all
// name: FUN_006b6260
// address: 0x6b6260
// body: available
// range: 0x6b6260-0x6b636b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b6260(char *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int in_ECX;
  int *piVar5;
  undefined4 uStack_34;
  char *local_30;
  undefined4 uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723f12;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0xee) = 0;
  FUN_006e6400(&uStack_34);
  FUN_006ce9f0(1);
  FUN_00627bf0();
  local_8 = 0;
  if (*param_1 != '\0') {
    puVar3 = (undefined4 *)FUN_00458890();
    uStack_2c = 0x6b62e3;
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if (DVar4 != 0xffffffff) {
      puVar3 = (undefined4 *)FUN_00458890();
      uStack_2c = 0x6b62f7;
      DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
      if (((DVar4 & 0x10) == 0) || (DVar4 == 0xffffffff)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar2 == *(char *)(in_ECX + 0xec)) {
        uStack_2c = 1;
        local_30 = param_1;
        piVar5 = (int *)(param_1 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        uStack_34 = 0x6b6332;
        FUN_006b5f20();
      }
    }
  }
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_2c = 0x6b6355;
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

