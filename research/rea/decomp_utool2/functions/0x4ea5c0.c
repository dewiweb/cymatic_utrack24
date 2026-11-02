// rea decompile_all
// name: FUN_004ea5c0
// address: 0x4ea5c0
// body: available
// range: 0x4ea5c0-0x4ea72a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea5c0(uint param_1,byte param_2)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  undefined *puVar7;
  int local_28;
  undefined **local_24 [2];
  byte local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00704dbb;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[0] = &PTR_vftable_00c7ed34;
  local_1c[0] = param_2;
  piVar5 = &local_28;
  local_8 = 0;
  puVar7 = &DAT_00738c00;
  FUN_0061f730(piVar5,&DAT_00738c00,local_14);
  FUN_0061fa00(piVar5,puVar7);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  for (puVar2 = *(uint **)(*(int *)(in_ECX + 0x80) + (iVar4 % *(int *)(in_ECX + 0x88)) * 4);
      (puVar2 != (uint *)0x0 && (*puVar2 != param_1)); puVar2 = (uint *)puVar2[2]) {
  }
  FUN_00637060(&local_28,local_24);
  piVar5 = (int *)(local_28 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  puVar2 = *(uint **)(*(int *)(in_ECX + 0x80) + (iVar4 % *(int *)(in_ECX + 0x88)) * 4);
  do {
    if (puVar2 == (uint *)0x0) {
      uVar6 = 0;
LAB_004ea6bd:
      if ((*(byte *)(uVar6 + 0x69) >> 4 & 1) == param_2) {
        *(byte *)(uVar6 + 0x69) = (param_2 != 0) - 1U & 0x10 | *(byte *)(uVar6 + 0x69) & 0xef;
        iVar4 = *(int *)(uVar6 + 0xc);
        if ((iVar4 == 0) ||
           (((*(byte *)(iVar4 + 0x69) & 0x10) == 0 &&
            ((*(int *)(iVar4 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
          FUN_006cc240();
        }
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*puVar2 == param_1) {
      uVar6 = puVar2[1];
      goto LAB_004ea6bd;
    }
    puVar2 = (uint *)puVar2[2];
  } while( true );
}

