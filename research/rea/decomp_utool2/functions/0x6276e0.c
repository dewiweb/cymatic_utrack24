// rea decompile_all
// name: FUN_006276e0
// address: 0x6276e0
// body: available
// range: 0x6276e0-0x627820 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006276e0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d92c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)*in_ECX != '\0') {
    puVar2 = (undefined4 *)FUN_00458890(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if (DVar3 != 0xffffffff) {
      uVar4 = FUN_006360d0(&local_1c);
      local_8 = 0;
      uVar5 = FUN_006369b0(&local_18);
      local_8._0_1_ = 1;
      FUN_00636040(&local_14);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0062e6a0(param_1,uVar5,uVar4,1);
      piVar6 = (int *)(local_14 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_18 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      ExceptionList = local_10;
      return param_1;
    }
  }
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  piVar6 = (int *)(iVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  ExceptionList = local_10;
  return param_1;
}

