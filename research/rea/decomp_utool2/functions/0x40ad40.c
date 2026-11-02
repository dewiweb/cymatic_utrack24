// rea decompile_all
// name: FUN_0040ad40
// address: 0x40ad40
// body: available
// range: 0x40ad40-0x40ae9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ad40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int in_ECX;
  int *piVar6;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc2c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063eab0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar4 = (undefined4 *)FUN_005cf320(&local_14,in_ECX + 0x20,1);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  puVar1 = (undefined4 *)(in_ECX + 0x84);
  *puVar1 = *puVar4;
  *puVar4 = uVar3;
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (*(char *)*puVar1 != '\0') {
    DVar5 = timeGetTime();
    if ((DAT_00c8a644 <= DVar5) || (DVar5 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar5;
    }
    if (DVar5 - *(int *)(in_ECX + 0x80) < 60000) {
      FUN_0063eb10(20000);
      ExceptionList = local_10;
      return;
    }
  }
  (**(code **)(*(int *)(in_ECX + -0x160) + 0x28))(0);
  if (*(char *)*puVar1 != '\0') {
    local_14 = &DAT_00bfe12c;
    local_8 = 0;
    FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_006e6af0(puVar1,&local_14,0,0);
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8 = 0xffffffff;
  }
  FUN_006e8fd0(0);
  ExceptionList = local_10;
  return;
}

