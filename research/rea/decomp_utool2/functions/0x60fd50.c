// rea decompile_all
// name: FUN_0060fd50
// address: 0x60fd50
// body: available
// range: 0x60fd50-0x60fe99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0060fd50(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  int *in_EDX;
  int iVar7;
  int local_c;
  
  iVar7 = 0;
  local_c = in_EDX[2];
  iVar3 = iVar7;
  if (0 < local_c) {
    iVar1 = *in_EDX;
    iVar2 = *param_1;
    do {
      piVar6 = (int *)(iVar1 + iVar7 * 4);
      if (iVar2 == *piVar6) {
LAB_0060fe93:
        iVar7 = *piVar6;
        goto LAB_0060fe7b;
      }
      do {
        iVar3 = FUN_00443260();
        iVar4 = FUN_00443260();
        if ((iVar3 - iVar4 != 0) && (iVar4 = (iVar3 - iVar4 >> 0x1f & 0xfffffffeU) + 1, iVar4 != 0))
        goto LAB_0060fdbf;
      } while (iVar3 != 0);
      iVar4 = 0;
LAB_0060fdbf:
      if (iVar4 == 0) goto LAB_0060fe93;
      iVar3 = (local_c + iVar7) / 2;
      if (iVar3 == iVar7) {
        iVar3 = iVar7 + 1;
        if (iVar4 < 1) {
          iVar3 = iVar7;
        }
        break;
      }
      if (iVar2 == *(int *)(iVar1 + iVar3 * 4)) {
LAB_0060fe41:
        iVar7 = *(int *)(iVar1 + iVar3 * 4);
        *in_ECX = iVar7;
        piVar6 = (int *)(iVar7 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        return in_ECX;
      }
      do {
        iVar4 = FUN_00443260();
        iVar5 = FUN_00443260();
        if ((iVar4 - iVar5 != 0) && (iVar5 = (iVar4 - iVar5 >> 0x1f & 0xfffffffeU) + 1, iVar5 != 0))
        goto LAB_0060fe1d;
      } while (iVar4 != 0);
      iVar5 = 0;
LAB_0060fe1d:
      if (iVar5 == 0) goto LAB_0060fe41;
      if (0 < iVar5) {
        iVar7 = iVar3;
        iVar3 = local_c;
      }
      local_c = iVar3;
      iVar3 = iVar7;
    } while (iVar7 < local_c);
  }
  FUN_00459120(iVar3,param_1);
  iVar7 = *(int *)(*in_EDX + iVar3 * 4);
LAB_0060fe7b:
  *in_ECX = iVar7;
  piVar6 = (int *)(iVar7 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  return in_ECX;
}

