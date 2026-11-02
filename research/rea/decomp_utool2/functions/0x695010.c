// rea decompile_all
// name: FUN_00695010
// address: 0x695010
// body: available
// range: 0x695010-0x6951a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00695010(uint param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  void *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721d2e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  if (*(int *)(*(int *)(DAT_00c8a67c + 0x20) + 8) != 100) {
    FUN_0063eb10(100);
  }
  FUN_00697280(uVar3);
  if (((char)in_ECX[0x27] != '\0') || (*(char *)((int)in_ECX + 0x9a) == '\0')) {
    if ((*(char *)((int)in_ECX + 0x99) != '\0') && ((*(uint *)(param_1 + 0x10) >> 5 & 1) != 0)) {
      local_24 = (void *)0x0;
      uStack_20 = 0;
      uStack_1c = 0;
      puStack_18 = (undefined4 *)0x0;
      local_8 = 1;
      uVar4 = FUN_006e9580();
      FUN_006a0020(uVar4);
      (**(code **)(*in_ECX + 0xb0))(&local_24,param_1);
      uVar4 = FUN_004b20d0();
      uVar5 = FUN_006d1110();
      FUN_006a0120(uVar5,uVar4,0);
      if (puStack_18 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puStack_18 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puStack_18)(1);
        }
      }
      FUN_004b00e0();
      FID_conflict__free(local_24);
      ExceptionList = local_10;
      return;
    }
    param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(param_1 + 0x10)) & 0xffffff01;
    uVar4 = FUN_00692ed0(param_1);
    FUN_00696020(uVar4,param_1);
  }
  ExceptionList = local_10;
  return;
}

