// rea decompile_all
// name: FUN_00644690
// address: 0x644690
// body: available
// range: 0x644690-0x6447db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_00644690(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  void **ppvVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  int local_1c;
  int *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ff63;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_14 = 0.0;
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return (float10)local_14;
    }
    uVar5 = FUN_00443260(uVar4);
    iVar6 = FUN_00644820(uVar5,1);
    if (iVar6 == 0) {
      FUN_00644ae0();
      local_8 = 0;
      if ((local_18 != (int *)0x0) && (local_18 != in_ECX)) {
        uVar5 = FUN_00622070();
        local_8 = CONCAT31(local_8._1_3_,1);
        fVar10 = (float10)(**(code **)(*local_18 + 0x14))(uVar5);
        piVar9 = (int *)(local_1c + -8);
        local_14 = (float)(fVar10 + (float10)local_14);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar9);
          }
        }
      }
      local_8 = 0xffffffff;
      if (local_18 != (int *)0x0) {
        LOCK();
        piVar9 = local_18 + 1;
        iVar6 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*local_18)(1);
        }
      }
    }
    else {
      iVar7 = FUN_00426f70();
      if ((iVar7 != 0) && (iVar8 = *(int *)(iVar6 + 0x30) + -1, -1 < iVar8)) {
        piVar9 = (int *)(*(int *)(iVar6 + 0x28) + iVar8 * 8);
        do {
          if (*piVar9 == iVar7) {
            local_14 = *(float *)(*(int *)(iVar6 + 0x28) + 4 + iVar8 * 8) + *(float *)(iVar6 + 0x24)
                       + local_14;
            goto LAB_006447b9;
          }
          piVar9 = piVar9 + -2;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      local_14 = *(float *)(iVar6 + 0x24) + local_14;
    }
LAB_006447b9:
    cVar1 = *pcVar2;
    ppvVar3 = ExceptionList;
  } while( true );
}

