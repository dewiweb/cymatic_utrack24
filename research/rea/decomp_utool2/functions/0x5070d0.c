// rea decompile_all
// name: FUN_005070d0
// address: 0x5070d0
// body: available
// range: 0x5070d0-0x50728e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005070d0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  undefined4 extraout_EDX;
  int iVar5;
  int iVar6;
  float in_XMM0_Da;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707f10;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  iVar1 = *(int *)(in_ECX + 0x1c);
  local_14 = 0;
  iVar5 = 0x16;
  if (iVar1 < 0x16) {
    iVar5 = iVar1;
  }
  iVar4 = 0x14;
  if (iVar1 < 0x14) {
    iVar4 = iVar1;
  }
  local_18 = (iVar1 - iVar5) / 2;
  if ((*(byte *)(in_ECX + 0xf8) & 2) == 0) {
    iVar6 = 0;
  }
  else {
    local_1c = *(int *)(in_ECX + 0x78);
    if (local_1c == 0) {
      FUN_006e25d0(&local_24,0);
      FUN_006e25b0(&local_20);
      local_8 = 1;
      local_14 = 3;
      local_1c = 3;
      FUN_006831f0(extraout_EDX);
      FUN_004363b0();
      local_1c = (int)in_XMM0_Da + 4;
    }
    if ((local_14 & 2) != 0) {
      local_14 = local_14 & 0xfffffffd;
      if (local_20 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_20 + 1;
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*local_20)(1,uVar2);
        }
      }
    }
    local_8 = 0xffffffff;
    if (((local_14 & 1) != 0) && (piVar3 = (int *)(local_24 + -8), piVar3 != &DAT_00bfe124)) {
      LOCK();
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_006e9790(0,0,(int)(float)local_1c,*(undefined4 *)(in_ECX + 0x1c));
    iVar6 = *(int *)(in_ECX + 0xa0) + *(int *)(in_ECX + 0xa8) + 4;
  }
  FUN_006e9790(iVar6,local_18,iVar5,iVar5);
  iVar6 = iVar6 + 4 + iVar5;
  if ((*(byte *)(in_ECX + 0x2fc) & 2) != 0) {
    FUN_006e9790(iVar6,local_18,iVar5,iVar5);
    iVar6 = iVar6 + 4 + iVar5;
  }
  FUN_006e9790(iVar6,(iVar1 - iVar4) / 2,*(int *)(in_ECX + 0x18) - iVar6,iVar4);
  ExceptionList = local_10;
  return;
}

