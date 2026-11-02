// rea decompile_all
// name: FUN_006ba3c0
// address: 0x6ba3c0
// body: available
// range: 0x6ba3c0-0x6ba51d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006ba3c0(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  int in_ECX;
  int *piVar7;
  int *extraout_EDX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00724676;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar6 = false;
  local_14 = 0;
  if ((*(byte *)(in_ECX + 0xa4) & 8) == 0) {
LAB_006ba415:
    bVar2 = false;
  }
  else {
    puVar5 = (undefined4 *)FUN_006e50e0(&local_14);
    bVar6 = true;
    if (*(char *)*puVar5 != '\0') goto LAB_006ba415;
    bVar2 = true;
  }
  if ((bVar6) && (piVar7 = (int *)(local_14 + -8), piVar7 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (bVar2) {
    iVar1 = *(int *)(in_ECX + 0xa8);
    *param_1 = iVar1;
    piVar7 = (int *)(iVar1 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if ((*(char *)(in_ECX + 0x22c) == '\0') && ((*(byte *)(in_ECX + 0x201) & 0x10) == 0)) {
      if (*(int *)(in_ECX + 0x1a4) == 0) {
LAB_006ba49b:
        puVar5 = (undefined4 *)FUN_006e50e0(&param_2);
        FUN_00635a10(param_1,*puVar5);
        piVar7 = (int *)(param_2 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        ExceptionList = local_10;
        return param_1;
      }
      cVar3 = FUN_006e6320(uVar4);
      if (cVar3 != '\0') goto LAB_006ba49b;
    }
    FUN_0040f6b0(param_1,param_2);
    param_1 = extraout_EDX;
  }
  ExceptionList = local_10;
  return param_1;
}

