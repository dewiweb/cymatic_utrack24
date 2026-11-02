// rea decompile_all
// name: FUN_005be500
// address: 0x5be500
// body: available
// range: 0x5be500-0x5be708 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005be6b6) */
/* WARNING: Removing unreachable block (ram,0x005be6bd) */
/* WARNING: Removing unreachable block (ram,0x005be6c1) */
/* WARNING: Removing unreachable block (ram,0x005be6c7) */
/* WARNING: Removing unreachable block (ram,0x005be640) */
/* WARNING: Removing unreachable block (ram,0x005be652) */
/* WARNING: Removing unreachable block (ram,0x005be660) */
/* WARNING: Removing unreachable block (ram,0x005be667) */
/* WARNING: Removing unreachable block (ram,0x005be66b) */
/* WARNING: Removing unreachable block (ram,0x005be67c) */
/* WARNING: Removing unreachable block (ram,0x005be683) */
/* WARNING: Removing unreachable block (ram,0x005be68a) */
/* WARNING: Removing unreachable block (ram,0x005be695) */
/* WARNING: Removing unreachable block (ram,0x005be691) */
/* WARNING: Removing unreachable block (ram,0x005be697) */
/* WARNING: Removing unreachable block (ram,0x005be69f) */
/* WARNING: Removing unreachable block (ram,0x005be6a8) */
/* WARNING: Removing unreachable block (ram,0x005be6d2) */
/* WARNING: Removing unreachable block (ram,0x005be6d9) */
/* WARNING: Removing unreachable block (ram,0x005be6dd) */

int * FUN_005be500(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar6;
  int *piVar7;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0071a244;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x28);
  if (0 < iVar1) {
    FUN_00409cf0(iVar1 / 2 + iVar1 + 8 & 0xfffffff8);
  }
  local_1c = 0;
  piVar7 = (int *)0x0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      piVar7 = *(int **)(*(int *)(in_ECX + 0x20) + local_1c * 4);
      cVar3 = (**(code **)(*piVar7 + 4))(param_1,uVar4);
      if (cVar3 != '\0') {
        uVar5 = FUN_005be2b0(piVar7,extraout_ECX,0);
        FUN_00410380(uVar5,piVar7);
        local_8._0_1_ = 1;
        cVar3 = (**(code **)(*piVar7 + 0x10))();
        if ((((cVar3 == '\0') || ((char)piVar7[8] != '\0')) ||
            (*(char *)((int)piVar7 + 0x22) != '\0')) || (*(char *)((int)piVar7 + 0x21) != '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        local_8 = (uint)local_8._1_3_ << 8;
        if (!bVar2) {
          if ((local_14 == (int *)0x0) || (piVar7[4] < local_14[4])) {
            local_14 = piVar7;
          }
          if ((local_18 == (int *)0x0) || (local_18[4] < piVar7[4])) {
            local_18 = piVar7;
          }
        }
      }
      local_1c = local_1c + 1;
      piVar7 = local_18;
    } while (local_1c < *(int *)(in_ECX + 0x28));
  }
  piVar6 = (int *)0x0;
  if (piVar7 != local_14) {
    piVar6 = piVar7;
  }
  if (piVar6 == (int *)0x0) {
    piVar6 = local_14;
  }
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return piVar6;
}

