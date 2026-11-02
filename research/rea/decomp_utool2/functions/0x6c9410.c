// rea decompile_all
// name: FUN_006c9410
// address: 0x6c9410
// body: available
// range: 0x6c9410-0x6c958e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c9410(void)

{
  int *piVar1;
  void **ppvVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar7;
  int *in_EDX;
  int extraout_EDX;
  uint uVar8;
  int iVar9;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00726162;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar8 = *(uint *)(in_ECX + 0x30);
  if (0 < (int)uVar8) {
    local_1c = 0;
    local_8 = 0;
    ppvVar2 = &local_10;
    iVar6 = 0;
    while (ExceptionList = ppvVar2, uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      if (uVar8 < *(uint *)(in_ECX + 0x30)) {
        iVar9 = *(int *)(*(int *)(in_ECX + 0x28) + uVar8 * 4);
      }
      else {
        iVar9 = 0;
      }
      ppvVar2 = ExceptionList;
      if ((((*(byte *)(iVar9 + 0x68) & 2) != 0) && ((*(byte *)(iVar9 + 0x69) & 0x10) == 0)) &&
         ((uVar5 = 0, *(int *)(iVar9 + 0xc) == 0 ||
          (cVar3 = FUN_006e6320(uVar4), uVar5 = extraout_ECX, iVar6 = extraout_EDX,
          ppvVar2 = ExceptionList, cVar3 != '\0')))) {
        uVar5 = FUN_00684ea0(iVar9,uVar5,iVar6);
        FUN_00410380(uVar5,iVar9);
        ppvVar2 = ExceptionList;
        iVar6 = local_1c;
      }
    }
    local_14 = 0;
    if (0 < iVar6) {
      do {
        iVar9 = *(int *)(local_14 * 4);
        if (((*(byte *)(iVar9 + 0x68) & 0x20) != 0) && ((*(byte *)(iVar9 + 0x69) & 0x10) == 0)) {
          iVar6 = in_EDX[2];
          iVar7 = iVar6 + 1;
          if (in_EDX[1] < iVar7) {
            if (iVar7 < 0) {
              iVar7 = iVar6 + 2;
            }
            uVar8 = iVar6 + 9 + (iVar7 >> 1) & 0xfffffff8;
            if (in_EDX[1] != uVar8) {
              if ((int)uVar8 < 1) {
                FID_conflict__free((void *)*in_EDX);
                *in_EDX = 0;
              }
              else if (*in_EDX == 0) {
                iVar6 = FUN_004c554b();
                *in_EDX = iVar6;
              }
              else {
                iVar6 = FUN_004c553b(*in_EDX,uVar8 * 4);
                *in_EDX = iVar6;
              }
              in_EDX[1] = uVar8;
            }
          }
          iVar6 = in_EDX[2];
          in_EDX[2] = iVar6 + 1;
          piVar1 = (int *)(*in_EDX + iVar6 * 4);
          iVar6 = local_1c;
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar9;
            iVar6 = 0;
          }
        }
        if ((*(byte *)(iVar9 + 0x68) & 0x40) == 0) {
          FUN_006c9410();
          iVar6 = local_1c;
        }
        local_14 = local_14 + 1;
      } while (local_14 < iVar6);
    }
    FID_conflict__free((void *)0x0);
  }
  ExceptionList = local_10;
  return;
}

