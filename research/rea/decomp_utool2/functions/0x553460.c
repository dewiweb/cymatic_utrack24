// rea decompile_all
// name: FUN_00553460
// address: 0x553460
// body: available
// range: 0x553460-0x55358a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00553460(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined4 uVar6;
  void **ppvVar7;
  void *local_28 [2];
  int local_20;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00710d16;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  iVar5 = *(int *)(in_ECX + 8);
  local_14 = 1;
  if ((iVar5 == 0) || (iVar5 == 1)) {
    iVar5 = 0;
    if (0 < *(int *)(in_ECX + 0x58)) {
      do {
        FUN_004110e0(&local_18,iVar5);
        ppvVar7 = local_28;
        local_8 = 1;
        uVar6 = 0x553504;
        uVar4 = FUN_00553460(ppvVar7);
        FUN_00417760(uVar4,uVar6,ppvVar7);
        while (0 < local_20) {
          local_20 = local_20 + -1;
          puVar3 = *(undefined4 **)((int)local_28[0] + local_20 * 4);
          if (puVar3 != (undefined4 *)0x0) {
            LOCK();
            piVar1 = puVar3 + 1;
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)*puVar3)(1);
            }
          }
        }
        FID_conflict__free(local_28[0]);
        local_8 = local_8 & 0xffffff00;
        if (local_18 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_18 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_18)(1);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(in_ECX + 0x58));
    }
  }
  else if (iVar5 == 4) {
    FUN_00417870(in_ECX);
  }
  ExceptionList = local_10;
  return param_1;
}

