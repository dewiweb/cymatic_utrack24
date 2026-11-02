// rea decompile_all
// name: FUN_006eed60
// address: 0x6eed60
// body: available
// range: 0x6eed60-0x6eeeeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006eed60(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  undefined1 uVar8;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729484;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006f2b00(&local_20);
  local_8 = 0;
  FUN_00631430(&local_18,&DAT_00c05f08);
  local_8._0_1_ = 2;
  piVar7 = (int *)(local_20 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  iVar5 = *(int *)(in_ECX + 0xbc);
  local_1c = iVar5;
  if (*local_18 != '\0') {
    iVar4 = FUN_0044ec90(uVar3);
    if (iVar4 == iVar5) {
      uVar2 = *(undefined4 *)(in_ECX + 0xb8);
      iVar5 = FUN_006ed2a0(uVar2,local_1c);
      iVar4 = FUN_006ed210(uVar2,(iVar5 - (iVar5 + -1) % *(int *)(in_ECX + 0x88)) + -1);
      iVar5 = local_1c;
      FUN_006379a0(&local_24,iVar4,local_1c);
      local_8._0_1_ = 3;
      puVar6 = (undefined4 *)FUN_006378b0(&local_1c);
      piVar7 = (int *)(local_1c + -8);
      local_11 = *(char *)*puVar6;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_24 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (local_11 == '\0') {
        FUN_006f2bf0(iVar4 - iVar5);
        uVar8 = 1;
        goto LAB_006eeeb8;
      }
    }
  }
  uVar8 = 0;
LAB_006eeeb8:
  piVar7 = (int *)(local_18 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return uVar8;
}

