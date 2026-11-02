// rea decompile_all
// name: FUN_0060ffb0
// address: 0x60ffb0
// body: available
// range: 0x60ffb0-0x61011f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0060ffb0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int *in_EDX;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_10 = in_EDX[2];
  local_c = 0;
  iVar7 = 0;
  if (0 < local_10) {
    local_14 = *in_EDX;
    local_18 = *param_1;
    local_8 = in_ECX;
    do {
      iVar3 = local_c;
      iVar5 = local_10;
      iVar7 = *(int *)(local_14 + local_c * 4);
      while( true ) {
        iVar1 = FUN_00443260();
        iVar2 = FUN_00443260();
        if ((iVar1 - iVar2 != 0) &&
           (uVar4 = iVar1 - iVar2 >> 0x1f & 0xfffffffe, uVar4 != 0xffffffff)) break;
        if (iVar1 == 0) goto LAB_00610027;
      }
      iVar5 = (iVar5 + local_c) / 2;
      if (iVar5 == local_c) {
        iVar7 = local_c + 1;
        in_ECX = local_8;
        if ((int)(uVar4 + 1) < 1) {
          iVar7 = iVar3;
        }
        break;
      }
      iVar7 = *(int *)(local_14 + iVar5 * 4);
      while( true ) {
        iVar3 = FUN_00443260();
        iVar1 = FUN_00443260();
        if ((iVar3 - iVar1 != 0) &&
           (uVar4 = iVar3 - iVar1 >> 0x1f & 0xfffffffe, uVar4 != 0xffffffff)) break;
        if (iVar3 == 0) {
LAB_00610027:
          *local_8 = iVar7;
          piVar6 = (int *)(iVar7 + -8);
          if (piVar6 == &DAT_00bfe124) {
            return local_8;
          }
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
          return local_8;
        }
      }
      iVar7 = iVar5;
      if (0 < (int)(uVar4 + 1)) {
        iVar7 = local_10;
        local_c = iVar5;
      }
      local_10 = iVar7;
      iVar7 = local_c;
      in_ECX = local_8;
    } while (local_c < local_10);
  }
  FUN_0045cb50(*param_1);
  FUN_00459120(iVar7,&local_18);
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar7 = *(int *)(*in_EDX + iVar7 * 4);
  *in_ECX = iVar7;
  piVar6 = (int *)(iVar7 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  return in_ECX;
}

