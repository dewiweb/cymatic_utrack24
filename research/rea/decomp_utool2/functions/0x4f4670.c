// rea decompile_all
// name: FUN_004f4670
// address: 0x4f4670
// body: available
// range: 0x4f4670-0x4f480b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4670(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_48;
  int local_40;
  char local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705fd9;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  uVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x874)) {
    do {
      if (uVar3 < *(uint *)(in_ECX + 0x874)) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x86c) + uVar3 * 4);
      }
      else {
        iVar1 = 0;
      }
      uVar4 = uVar4 + *(int *)(iVar1 + 0x14);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x874));
    if (uVar4 != 0) {
      FUN_0045c990();
      pcVar5 = local_1b + 2;
      local_8 = 0;
      local_1b[2] = 0;
      if ((int)uVar4 < 0) {
        uVar4 = -uVar4;
        do {
          pcVar6 = pcVar5;
          pcVar5 = pcVar6 + -1;
          uVar3 = uVar4 / 10;
          *pcVar5 = (char)uVar4 + (char)uVar3 * -10 + '0';
          uVar4 = uVar3;
        } while (uVar3 != 0);
        pcVar5 = pcVar6 + -2;
        *pcVar5 = '-';
      }
      else {
        do {
          pcVar5 = pcVar5 + -1;
          uVar3 = uVar4 / 10;
          *pcVar5 = (char)uVar4 + (char)uVar3 * -10 + '0';
          uVar4 = uVar3;
        } while (uVar3 != 0);
      }
      FUN_004557e0(local_1b + (2 - (int)pcVar5));
      FUN_006377c0();
      FUN_00637730();
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_006e4900();
      piVar2 = (int *)(local_48 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)(local_40 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      goto LAB_004f47f0;
    }
  }
  FUN_006e4900();
LAB_004f47f0:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

