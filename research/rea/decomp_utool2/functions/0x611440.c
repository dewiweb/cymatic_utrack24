// rea decompile_all
// name: FUN_00611440
// address: 0x611440
// body: available
// range: 0x611440-0x611664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00611440(void)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_ECX_01;
  int in_EDX;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  char local_18 [4];
  char local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pvVar4 = ExceptionList;
  puStack_c = &LAB_0071c901;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (int)&DAT_00bfe12c;
  local_8 = 0;
  uVar10 = 0;
  piVar8 = in_ECX;
  if (0 < *(int *)(in_EDX + 0x14)) {
    do {
      if (0 < (int)uVar10) {
        local_14[0] = '&';
        local_14[1] = '\0';
        pcVar3 = local_14;
        do {
          pcVar11 = pcVar3;
          pcVar3 = pcVar11 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = pcVar11 + (0x14 - (int)&stack0x00000000);
        piVar8 = (int *)0x0;
        if (0 < (int)pcVar11) {
          pcVar3 = (char *)*in_ECX;
          pcVar9 = pcVar3;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_00455850(pcVar3,uVar5);
          *in_ECX = local_2c;
          FUN_004c2c30(pcVar9 + (local_2c - (int)(pcVar3 + 1)),local_14,pcVar11);
          (pcVar9 + (local_2c - (int)(pcVar3 + 1)))[(int)pcVar11] = '\0';
          piVar8 = extraout_ECX;
        }
      }
      uVar6 = FUN_00610580(piVar8);
      local_8 = 1;
      uVar7 = extraout_ECX_00;
      if (uVar10 < *(uint *)(in_EDX + 0x14)) {
        uVar7 = *(undefined4 *)(in_EDX + 0xc);
      }
      uVar7 = FUN_00610580(uVar7);
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar8 = (int *)FUN_00636ec0(uVar7);
      local_18[0] = '=';
      local_18[1] = '\0';
      pcVar3 = local_18;
      do {
        pcVar11 = pcVar3;
        pcVar3 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      pcVar11 = pcVar11 + (0x18 - (int)&stack0x00000000);
      if (0 < (int)pcVar11) {
        pcVar3 = (char *)*piVar8;
        pcVar9 = pcVar3;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        FUN_00455850(pcVar3);
        *piVar8 = local_30;
        FUN_004c2c30(pcVar9 + (local_30 - (int)(pcVar3 + 1)),local_18,pcVar11);
        (pcVar9 + (local_30 - (int)(pcVar3 + 1)))[(int)pcVar11] = '\0';
      }
      FUN_00636ec0(uVar6);
      piVar8 = (int *)(local_3c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar8 = (int *)(local_40 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
          piVar8 = extraout_ECX_01;
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(in_EDX + 0x14));
    ExceptionList = local_10;
    return in_ECX;
  }
  ExceptionList = pvVar4;
  return in_ECX;
}

