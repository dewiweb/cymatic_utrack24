// rea decompile_all
// name: FUN_005ca990
// address: 0x5ca990
// body: available
// range: 0x5ca990-0x5cab47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca990(undefined4 param_1,int param_2)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  double in_XMM0_Qa;
  int local_20;
  LARGE_INTEGER local_10;
  
  QueryPerformanceCounter(&local_10);
  FUN_006f5730();
  in_XMM0_Qa = in_XMM0_Qa * _DAT_00c8a910;
  local_10.s.LowPart = in_ECX + 0x10;
  dVar2 = *(double *)(in_ECX + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)local_10.s.LowPart);
  *(double *)(in_ECX + 8) = in_XMM0_Qa;
  if (*(int *)(in_ECX + 0x30) != 0) {
    piVar1 = (int *)(in_ECX + 0x28);
    iVar5 = 0;
    piVar8 = (int *)*piVar1;
    local_20 = SUB84((in_XMM0_Qa - dVar2) * 0.001 * *(double *)(in_ECX + 0x38) + 6755399441055744.0,
                     0);
    iVar7 = 1;
    if (1 < local_20) {
      iVar7 = local_20;
    }
    if (param_2 < iVar7) {
      if (param_2 * 0x20 < iVar7) {
        iVar5 = iVar7 + param_2 * -0x20;
        FUN_005c6080(iVar5);
        iVar7 = param_2 * 0x20;
      }
      while (piVar8 < (int *)(*(int *)(in_ECX + 0x30) + *piVar1)) {
        iVar3 = *piVar8;
        iVar4 = (int)piVar8 + 6;
        uVar6 = (uint)*(ushort *)(piVar8 + 1);
        piVar8 = (int *)((int)piVar8 + uVar6 + 6);
        iVar3 = (iVar3 - iVar5) * ((param_2 << 10) / iVar7) >> 10;
        if (iVar3 < 0) {
          FUN_005c6170(iVar4,uVar6,0);
        }
        else {
          if (param_2 + -1 < iVar3) {
            iVar3 = param_2 + -1;
          }
          FUN_005c6170(iVar4,uVar6,iVar3);
        }
      }
    }
    else {
      while (piVar8 < (int *)(*(int *)(in_ECX + 0x30) + *piVar1)) {
        iVar5 = (int)piVar8 + 6;
        uVar6 = (uint)*(ushort *)(piVar8 + 1);
        iVar4 = *piVar8 + (param_2 - iVar7);
        piVar8 = (int *)((int)piVar8 + uVar6 + 6);
        if (iVar4 < 0) {
          FUN_005c6170(iVar5,uVar6,0);
        }
        else {
          if (param_2 + -1 < iVar4) {
            iVar4 = param_2 + -1;
          }
          FUN_005c6170(iVar5,uVar6,iVar4);
        }
      }
    }
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)local_10.s.LowPart);
  return;
}

