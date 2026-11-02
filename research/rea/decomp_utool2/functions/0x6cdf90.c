// rea decompile_all
// name: FUN_006cdf90
// address: 0x6cdf90
// body: available
// range: 0x6cdf90-0x6ce0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ** FUN_006cdf90(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  void **ppvVar9;
  int in_ECX;
  int *piVar10;
  undefined **ppuVar11;
  int *piVar12;
  int iVar13;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007268ae;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar4 = false;
  iVar13 = *(int *)(in_ECX + 0x60) + -1;
  ppvVar9 = ExceptionList;
  if (-1 < iVar13) {
    ppvVar9 = (void **)(in_ECX + 0x58);
    do {
      FUN_00631840(&local_14,iVar13);
      iVar2 = local_14;
      local_8 = 0;
      pbVar7 = &DAT_00c04f70;
      do {
        while( true ) {
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          if (-1 < (char)bVar3) break;
          bVar3 = *pbVar7;
          while ((bVar3 & 0xc0) == 0x80) {
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            bVar3 = *pbVar1;
          }
        }
      } while (bVar3 != 0);
      iVar8 = FUN_0045e0d0(local_14,&DAT_00c04f70,uVar6);
      if (iVar8 == 0) {
        piVar10 = *ppvVar9;
        piVar12 = piVar10 + *(int *)(in_ECX + 0x60) * 6;
        for (; piVar10 != piVar12; piVar10 = piVar10 + 6) {
          if (*piVar10 == iVar2) {
            ppuVar11 = (undefined **)(piVar10 + 2);
            if (ppuVar11 != (undefined **)0x0) goto LAB_006ce06c;
            break;
          }
        }
        ppuVar11 = &PTR_PTR_00c7ed58;
LAB_006ce06c:
        cVar5 = FUN_00629480(&local_14,ppuVar11);
        if (cVar5 != '\0') {
          bVar4 = true;
        }
      }
      piVar12 = (int *)(iVar2 + -8);
      local_8 = 0xffffffff;
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
    if (bVar4) {
      ppvVar9 = (void **)(**(code **)(*param_1 + 0xa4))();
    }
  }
  ExceptionList = local_10;
  return ppvVar9;
}

